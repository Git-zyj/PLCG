/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223158
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
    var_18 &= ((/* implicit */unsigned long long int) ((_Bool) var_1));
    var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */_Bool) ((33554304ULL) / ((-(((unsigned long long int) 18446744073675997311ULL))))));
                var_21 = ((/* implicit */unsigned long long int) ((_Bool) 33554304ULL));
                var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_1]);
                var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0]))) & (min((var_11), (((/* implicit */unsigned long long int) var_6)))))) >> (((/* implicit */int) ((_Bool) (~(18446744073709551603ULL))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((33554304ULL) <= (18014398475927552ULL)))) == (((/* implicit */int) arr_5 [i_0] [i_2 - 2] [i_2 - 1]))));
                    var_25 = ((/* implicit */_Bool) max((((unsigned long long int) arr_1 [i_0])), (8465964100485759465ULL)));
                    var_26 = ((unsigned long long int) ((_Bool) var_13));
                    var_27 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_5) > (arr_7 [i_1] [i_1] [i_0] [i_0]))))))) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_2]))) <= (9980779973223792131ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8465964100485759484ULL) == (18014398475927557ULL))))) : (((unsigned long long int) arr_2 [i_0 - 1] [i_1])))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_28 = (_Bool)1;
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((17982728257179659291ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) >> (((unsigned long long int) (_Bool)1))));
                                var_30 &= arr_4 [i_3] [i_3];
                                var_31 = ((/* implicit */unsigned long long int) max((var_31), (min((max((arr_7 [i_0] [i_1] [13ULL] [i_5]), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 18446744073675997308ULL))))))), (((var_7) ? (max((18446744073709551615ULL), (8465964100485759495ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) <= (9980779973223792127ULL)))))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) ((_Bool) 33554299ULL)))))));
                }
            }
        } 
    } 
}
