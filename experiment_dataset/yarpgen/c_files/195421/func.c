/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195421
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_7))));
    var_21 = ((/* implicit */short) var_16);
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_9)))) ? (((-5597034572181349435LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))))) : (((/* implicit */long long int) var_4)))) + (31983054698179164LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_15)) - (147))))))), (((/* implicit */int) (signed char)-11)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((_Bool) arr_1 [i_0])))) >= (((/* implicit */int) var_0))));
                    var_24 *= ((/* implicit */signed char) ((unsigned short) min((var_3), (var_18))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) 3961283614U);
                        arr_11 [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))))), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) : (1029360517U));
                    }
                }
            } 
        } 
    }
}
