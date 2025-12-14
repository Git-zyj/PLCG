/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197537
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            var_12 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
            var_13 = ((/* implicit */signed char) var_11);
        }
        for (short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) max((min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned short) var_1)))))));
            var_14 = ((/* implicit */unsigned short) var_11);
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_15 = ((/* implicit */short) var_8);
            var_16 = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])), (var_0))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        }
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    }
    var_17 = ((/* implicit */long long int) var_10);
    var_18 = ((/* implicit */unsigned short) var_3);
    var_19 ^= ((/* implicit */unsigned short) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_20 -= ((/* implicit */unsigned char) min((min((((((/* implicit */int) arr_3 [i_4] [i_4] [16LL])) | (((/* implicit */int) var_7)))), (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))));
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_4]))) ^ (var_3)));
    }
}
