/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204710
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
    var_20 = var_13;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-16))));
                                var_22 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_2]))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_3])), (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)26795))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)29)), (16624275354421463905ULL)))) ? ((-(1809680495U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] |= ((/* implicit */_Bool) (-(0U)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) var_11);
                    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) var_3)) : (arr_6 [i_0] [i_0] [i_0] [i_2])))) ^ (((((/* implicit */_Bool) 523776)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (1099511627775ULL)))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min(((-(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_7))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_6 [i_2] [i_1] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (_Bool)0))));
}
