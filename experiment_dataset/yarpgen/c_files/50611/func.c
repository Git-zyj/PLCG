/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50611
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
    var_19 = ((/* implicit */signed char) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)12505)), (4193792)))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_9)))))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (short)15403))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) var_13);
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_0 + 2] [(signed char)0])) ? (arr_3 [i_1 - 2] [i_0 + 2] [i_0]) : (0U))) | (min((arr_3 [i_1 - 2] [i_0 + 2] [i_0 - 1]), (arr_3 [i_1 - 2] [i_0 + 2] [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [8LL] [i_0] [i_3] |= ((/* implicit */long long int) (short)15409);
                            arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) var_12)), ((-(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) (unsigned short)60181)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2147475456U));
    var_24 &= ((/* implicit */unsigned int) var_2);
}
