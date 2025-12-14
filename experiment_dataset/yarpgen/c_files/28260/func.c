/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28260
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
    var_20 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (_Bool)1)), (max((2147483647), (-884377702)))))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (-2147483643)))))), (max((((12307117067478751139ULL) - (((/* implicit */unsigned long long int) 795405929U)))), (((/* implicit */unsigned long long int) ((var_18) - (var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(short)8])) ? ((~(((/* implicit */int) ((var_18) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))) : (arr_3 [i_0] [i_1 - 1] [i_0])));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(var_7)))), (arr_0 [i_0] [i_1])));
                arr_7 [6LL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_2 [i_0 + 1]) + (((/* implicit */int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (-6866303223531852479LL) : (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 + 2] [13U] [3] [i_1] [(_Bool)1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) + (795405925U)))) ? (((arr_12 [i_0 - 1] [i_0 - 1] [i_1 - 1] [(short)8] [i_1 - 1]) ? (((/* implicit */int) arr_12 [i_4] [i_1 - 1] [i_2] [i_3] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_0 + 1] [i_3] [(unsigned char)9] [i_3] [i_1 - 1])))) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_0] [i_1 - 1]))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((6139627006230800478ULL), (((/* implicit */unsigned long long int) 1598266714U)))), (((((/* implicit */_Bool) arr_0 [8] [i_1])) ? (var_11) : (12307117067478751139ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2]))) : (min((var_16), (var_7))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
