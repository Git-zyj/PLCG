/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22745
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
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [(signed char)13] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_7 [i_0 - 2] [i_4 - 1] [17LL])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_0 - 2] [i_0 - 2]))) == ((~(var_12))))))));
                                arr_15 [i_0 - 1] [(signed char)16] [i_0] [i_0] [i_3] [15U] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_20 = 3109907848U;
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_0 + 3] [i_0 + 1])) : (((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_0 + 3] [i_0 + 1]))))) ? ((~((+(-2108051915))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)3697)) != (((/* implicit */int) (unsigned char)192)))))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -580800719)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (var_12)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) : (max((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))));
    var_23 = ((/* implicit */short) ((unsigned short) (unsigned char)20));
}
