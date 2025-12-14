/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200924
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(max((((((/* implicit */int) var_16)) + (((/* implicit */int) (short)15885)))), (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = max((arr_3 [i_1]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (3068671962U)))));
                arr_6 [3] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) (short)15)), (189295720U))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)29082)) ? (10599450545027754469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)9])))))))));
                arr_7 [i_0] &= max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)15))) & (max((16159113539889603142ULL), (((/* implicit */unsigned long long int) (short)-13)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 4; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-9223372036854775807LL - 1LL)))));
                                arr_16 [i_0] [6LL] [i_0] [i_4] [(short)6] [(unsigned char)0] [i_0] &= ((/* implicit */unsigned int) min(((short)-15885), ((short)13)));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967295U)) + (-9223372036854775797LL)))) + (((((/* implicit */_Bool) 285125707)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2]))) : (16107733838931958781ULL)))));
                                var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)-32764)) ? (arr_1 [i_0 + 1]) : (9223372036854775780LL))) == (((var_17) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_4 + 1]))))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [(_Bool)0] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-15893)), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32737)) && (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])))))) : (((((/* implicit */_Bool) arr_5 [0] [i_1] [(short)6])) ? (arr_14 [i_5] [i_5 + 1] [14LL] [i_5 + 2] [10LL] [i_5 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [4U] [i_1]))))))));
                            var_23 = ((/* implicit */short) ((unsigned long long int) (unsigned short)51243));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) ((_Bool) -405709078))), (((((-3781699673928384292LL) + (9223372036854775807LL))) << (((var_5) - (629070148)))))))));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) 14336)) ? (arr_28 [i_7] [i_7] [i_7]) : (arr_28 [i_7] [i_8] [i_8]))) / (max((arr_28 [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_8]))))));
                arr_29 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255))));
                var_26 += ((/* implicit */unsigned int) ((7395830443601092164LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-2)))));
                arr_30 [i_7] [i_7] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_7]))))) / (min((((/* implicit */unsigned long long int) 163632738)), (arr_28 [i_7] [1U] [i_7]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))));
            }
        } 
    } 
}
