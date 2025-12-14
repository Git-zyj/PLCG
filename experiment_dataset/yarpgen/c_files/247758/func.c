/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247758
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
    var_10 |= ((/* implicit */short) ((unsigned long long int) var_6));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 |= ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((arr_3 [i_0]) >> (((arr_2 [i_0]) + (1531244288137142481LL)))))), (max((arr_9 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_7 [(short)12] [i_1] [(short)12] [(short)12]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 267220497941142078LL)) ? (267220497941142075LL) : (267220497941142070LL)))) : (arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))));
                                arr_15 [3LL] [i_2] [i_2] [i_2] [20U] [i_3] [i_2] = ((/* implicit */short) arr_12 [i_0]);
                                arr_16 [i_2] [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) 267220497941142049LL);
                                var_13 = ((/* implicit */long long int) var_4);
                                var_14 = ((/* implicit */_Bool) min((-267220497941142083LL), (((/* implicit */long long int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
