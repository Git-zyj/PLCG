/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3153
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
    var_20 ^= ((/* implicit */int) (short)-10185);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_9);
                var_21 = ((/* implicit */int) ((min((min((var_9), (((/* implicit */long long int) var_2)))), (max((arr_4 [i_0] [i_1]), (((/* implicit */long long int) var_11)))))) == (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) min((var_8), (((/* implicit */short) arr_5 [i_0] [i_0]))))) : (((/* implicit */int) var_11)))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? (var_12) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) | (-2451457012085861053LL))))))) && (((_Bool) ((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) var_6))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) var_3)) >= (arr_2 [i_1 + 2] [i_1 - 1])))) : (((/* implicit */int) var_16))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_19)) >= (((/* implicit */int) arr_7 [i_0] [i_3] [i_1 - 1]))))))))));
                            var_25 = ((/* implicit */short) arr_5 [i_0] [i_1]);
                            var_26 = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
}
