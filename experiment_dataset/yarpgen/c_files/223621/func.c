/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223621
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [15LL]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) (-(min((((arr_4 [i_0] [(unsigned char)14]) ? (((/* implicit */long long int) var_13)) : (var_6))), (((/* implicit */long long int) arr_10 [i_0 - 3] [i_0 - 3]))))));
                                var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_18)) ? (arr_3 [i_0 - 3] [i_1 + 1] [i_2 - 1]) : (5793442543067531270LL)))));
                                arr_12 [i_2] [(unsigned short)9] [(short)15] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((0), (arr_7 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2])))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 17592186044415LL)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (short)-5571))))));
                                var_22 = ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) & (9223372036854775807LL));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0]))))) > (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0] [i_0] [i_1 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) : (((/* implicit */int) (signed char)2))));
                    arr_13 [i_0] [9] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_14)) + (((int) 3067991712U))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (+(9LL)));
    var_25 = ((/* implicit */unsigned short) ((var_17) ? (max(((+(6707837009044107243LL))), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((unsigned int) (unsigned short)37327)) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
}
