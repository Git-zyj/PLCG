/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239943
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
    var_10 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_2))))), (((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [4U] = ((/* implicit */long long int) ((unsigned char) arr_1 [i_1]));
                var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) max((max((arr_3 [i_0]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) max((var_8), (16777215U))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_3 [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) 4185516633U));
                                arr_16 [i_1] [13U] [i_2] [13U] [i_4] [(unsigned char)14] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) - (var_2)))) ? (arr_8 [i_0] [i_3] [i_3] [i_3]) : (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_4])))))))) ? ((-(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))));
                                arr_17 [i_0] [(unsigned short)12] [i_3] [i_2] [6U] = ((((/* implicit */_Bool) 4278190081U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)14] [i_2] [i_2] [13LL]))));
                                arr_18 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_0))))));
                                arr_19 [i_2] = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
