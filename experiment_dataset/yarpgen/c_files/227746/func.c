/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227746
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
    var_19 -= ((/* implicit */unsigned short) (unsigned char)225);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) -266213874357791883LL)) ? (((266213874357791882LL) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 2] [i_1] [i_3 - 1] [i_3]))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 3524676785533218146LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2237132287U))))))));
                        arr_11 [i_0] [(unsigned short)8] [(_Bool)1] [(signed char)6] &= ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 + 2])))) ? (var_4) : (((min((((/* implicit */long long int) arr_1 [i_0] [i_1])), (var_13))) | (266213874357791893LL)))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_8)), (17911678617705871111ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2237132294U)), (9179574140456856559LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1])) <= (((((/* implicit */_Bool) 2237132283U)) ? (266213874357791895LL) : (((/* implicit */long long int) 2237132276U)))))))) : ((~(arr_6 [i_0] [i_1])))));
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1]))) : (((((/* implicit */_Bool) var_12)) ? (266213874357791895LL) : (-266213874357791895LL))))), (((((/* implicit */_Bool) arr_4 [i_1] [3LL])) ? (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)18052)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_2 + 1] [i_3 + 1] [i_3 - 1])))))));
                    }
                    var_21 = ((/* implicit */long long int) max((max((((/* implicit */int) (unsigned short)187)), (arr_7 [i_2 + 1]))), (max((arr_7 [i_2 - 3]), (arr_7 [i_2 - 3])))));
                    arr_14 [i_2 - 3] [i_1] [i_0] = var_16;
                }
            } 
        } 
    } 
}
