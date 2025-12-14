/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195486
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((arr_5 [i_0] [i_0] [i_4]), (((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_0])) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_1] [7U] [i_3 + 2]))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3 - 1] [i_3 - 1] [(unsigned short)6] [i_3 - 1])) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (arr_7 [11] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))) <= (((unsigned long long int) arr_9 [i_3 + 2])))))));
                                arr_15 [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned int) var_19)) : (((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_22 += ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [12U] [i_0])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0])) : (arr_3 [i_0] [i_0])))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) <= ((((_Bool)1) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23446)))))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((arr_13 [i_0] [18LL]) ? (max((((/* implicit */unsigned long long int) 2073255912)), (516050602268934862ULL))) : (((/* implicit */unsigned long long int) min((-9151692251993053128LL), (((/* implicit */long long int) 3546005544U))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_8);
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((_Bool) var_12)))))));
    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_19)) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_18)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (var_18))) : (var_2))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_19)))) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))));
}
