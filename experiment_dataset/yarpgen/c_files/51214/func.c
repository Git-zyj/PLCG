/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51214
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
    var_19 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 2636143942U)) >= (var_2))))) + (min((var_17), (((/* implicit */unsigned long long int) var_3))))))));
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2636143933U))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [(short)4] [i_0] [i_1] = ((/* implicit */_Bool) (-((-(((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2375915613U)))))));
                var_21 ^= ((/* implicit */unsigned char) (-(2636143925U)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [5LL] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11484815610729165312ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1658823324U))))));
                                var_22 = ((/* implicit */int) ((short) 4087968931U));
                                var_23 = ((/* implicit */long long int) var_13);
                                arr_14 [i_3] [i_3] [i_0] [i_3] [(short)12] = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2636143942U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])), (0U)))))) ? (min((((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) 1073741823))))), (min((((/* implicit */unsigned long long int) 1418792317U)), (var_13))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))))))));
            }
        } 
    } 
}
