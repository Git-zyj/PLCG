/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227695
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
    var_20 = ((/* implicit */unsigned short) (-(((unsigned long long int) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    var_21 |= ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] = ((/* implicit */long long int) (~(((int) var_3))));
                            var_22 ^= ((/* implicit */unsigned int) min((((var_13) - (((/* implicit */unsigned long long int) ((var_14) - (arr_7 [(unsigned char)12] [i_1])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_2] [i_3]))))) - (max((((/* implicit */unsigned long long int) var_18)), (var_3)))))));
                            var_23 = min((((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >= (((/* implicit */int) ((short) arr_2 [i_0] [i_1 - 1])))))), (arr_5 [i_3] [i_2] [i_1 - 2] [i_0]));
                            arr_11 [i_0] [i_3] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2 - 2] [i_1 + 2] [i_1 - 1] [i_1])))))));
                            var_24 |= ((/* implicit */short) min((((unsigned long long int) (unsigned char)230)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_2 [i_1 - 3] [i_1 - 3])), (arr_4 [i_0] [i_0] [i_2 - 1] [i_2 - 1])))))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((((signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_17))))), (((/* implicit */signed char) arr_6 [i_0] [i_1 - 2] [i_0] [i_1 - 2]))));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((var_13) & (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))))));
                arr_13 [(unsigned short)16] [(unsigned short)16] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (arr_7 [(short)12] [i_1 - 2]) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
}
