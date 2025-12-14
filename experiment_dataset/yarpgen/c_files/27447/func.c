/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27447
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
    var_18 = ((/* implicit */signed char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) arr_4 [i_0] [11LL] [i_1]);
            var_20 = arr_0 [9ULL] [i_1];
            var_21 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]);
        }
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_3 [(signed char)10] [i_2]);
            var_23 = ((/* implicit */long long int) arr_4 [i_2] [i_2] [i_0]);
            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_7 [i_0]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_0] [i_3]);
            arr_14 [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_24 = ((/* implicit */long long int) arr_3 [i_0] [i_3]);
        }
        arr_15 [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [(signed char)2]);
        var_25 = ((/* implicit */_Bool) arr_11 [i_0]);
    }
    var_26 &= ((/* implicit */unsigned int) var_14);
    var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */unsigned char) min((var_15), (var_5)))), (max((var_8), (((/* implicit */unsigned char) var_6))))))), (max((min((((/* implicit */long long int) var_7)), (var_3))), (max((var_3), (((/* implicit */long long int) var_15))))))));
    var_28 ^= ((/* implicit */signed char) min((max((((/* implicit */short) min((var_8), (((/* implicit */unsigned char) var_2))))), (min(((short)-17327), (((/* implicit */short) (signed char)6)))))), (max(((short)22269), (((/* implicit */short) (_Bool)1))))));
}
