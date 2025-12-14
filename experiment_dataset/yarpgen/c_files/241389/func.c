/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241389
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) var_13)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_14)), ((signed char)-70))))))), (((/* implicit */long long int) arr_0 [i_0]))));
                            arr_13 [i_2] [i_1] [i_2] [i_2] [i_3] [i_2] = (~(min((var_3), (arr_10 [i_2] [i_1] [i_2 + 1] [i_3]))));
                            var_20 = ((/* implicit */signed char) max((var_20), (var_5)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((int) arr_7 [i_1] [i_0])))))));
                arr_14 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) arr_0 [i_1])) : (((/* implicit */unsigned int) ((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_0])))))));
                arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))) ? ((-(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_14))))))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 1016840353U))) ? (((long long int) var_18)) : (((/* implicit */long long int) 4294967294U))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_14))))) : ((-(((/* implicit */int) var_1)))))))));
}
