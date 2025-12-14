/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217605
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_10))));
        arr_2 [i_0] [6ULL] |= ((/* implicit */short) var_13);
    }
    var_19 = max((((/* implicit */unsigned long long int) max((min((4045105031U), (4224349480U))), (((/* implicit */unsigned int) var_4))))), (var_11));
    /* LoopSeq 2 */
    for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) max((var_4), (((/* implicit */int) var_3))));
            arr_9 [i_1] [(_Bool)1] [15ULL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) var_15)), (var_16)))));
        }
        for (int i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            var_20 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_17)), (max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) var_8)), (var_9)))))));
            var_21 *= var_16;
        }
        var_22 ^= ((/* implicit */int) var_1);
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        var_23 = ((/* implicit */short) var_4);
        var_24 |= ((/* implicit */unsigned int) var_12);
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) var_5)), (min((var_12), (((/* implicit */unsigned short) var_8)))))), (((/* implicit */unsigned short) var_10))));
    }
}
