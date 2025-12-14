/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33252
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
    var_15 = ((/* implicit */int) min((var_15), (min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 16387327804647898425ULL)))))), (((var_1) - (((var_10) / (((/* implicit */int) (unsigned short)22370))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_16 = ((unsigned short) min((((((/* implicit */int) (unsigned short)45882)) >> (((13522709978374950382ULL) - (13522709978374950376ULL))))), (((((/* implicit */_Bool) -4245212355202176155LL)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)-122))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 4; i_4 < 12; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [10LL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_3]) : (arr_6 [i_3]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 13522709978374950382ULL)))) != (281472829227008ULL))))));
                                var_17 = ((/* implicit */long long int) (~(((unsigned long long int) -1857334447770356029LL))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_2))))) ? (arr_1 [i_4 - 4]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -1813742578))))))) ? (((int) (-(((/* implicit */int) var_2))))) : (max((2147483647), (max((var_12), (((/* implicit */int) var_2))))))));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
}
