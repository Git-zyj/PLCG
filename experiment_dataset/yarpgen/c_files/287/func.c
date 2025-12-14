/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/287
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) min((895090892), (-1120911955)))) : (arr_4 [i_1 - 2] [i_2] [i_1 + 1]))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18101)) ? (((/* implicit */int) (unsigned short)18109)) : (((/* implicit */int) (short)-15206))));
                                var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [2ULL])) || (((/* implicit */_Bool) (unsigned short)47426))))), (arr_6 [i_1 - 1] [i_2] [i_1] [(unsigned short)15])))) ^ ((+(arr_4 [i_1] [i_2] [i_4 + 2])))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(18014793684111346837ULL))))));
                                var_16 = max((arr_1 [3U]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_5), (8U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) max((var_11), (((/* implicit */unsigned short) (_Bool)0)))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_8), (((/* implicit */unsigned int) (unsigned short)18090)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2034181494U)) && (((/* implicit */_Bool) 7961838021584101088ULL)))))))) ? (((unsigned long long int) ((unsigned int) 7961838021584101088ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2)))) ^ (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_9))))))))));
}
