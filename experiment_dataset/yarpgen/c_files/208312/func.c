/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208312
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_2 [i_3 + 4] [i_0 + 1])), (min((((/* implicit */long long int) (_Bool)1)), (var_14)))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_1]))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (((-(((/* implicit */int) var_8)))) >= (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_1] = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (max((-2026292070138065270LL), (((/* implicit */long long int) arr_7 [i_1] [i_5 - 1] [i_5])))))), (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6])));
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)30077)) ? (0) : (((/* implicit */int) (_Bool)0)))))), (max((var_15), (((/* implicit */long long int) ((int) var_6)))))));
                                var_20 &= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_14 [i_6] [i_2] [i_2] [i_0 - 2])) ^ (var_7))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_2] [i_5 - 1] [i_2] [i_2] [i_1] [i_2]))))), (((((/* implicit */unsigned int) 0)) - (1348066106U)))))));
                                arr_20 [i_0] [i_0] [i_1] [i_0 + 2] [(short)9] = min((((/* implicit */long long int) ((_Bool) -1833331489188759843LL))), (max((max((arr_9 [i_1] [i_0] [i_2] [i_1] [i_0] [i_1]), (((/* implicit */long long int) (short)13069)))), (((/* implicit */long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [(short)1]))))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)105)))) & ((+(((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) ((short) arr_14 [6LL] [i_1] [i_1] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30077))))) ? ((+(0ULL))) : (((arr_22 [i_8] [i_7] [i_2]) ? (arr_3 [(short)9] [(short)9]) : (((/* implicit */unsigned long long int) var_15)))))) & (((/* implicit */unsigned long long int) ((arr_11 [i_0 - 1] [i_7] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 + 1]) / (((/* implicit */long long int) min((((/* implicit */int) (short)-14558)), (-1638307951)))))))));
                                var_22 = ((/* implicit */int) ((unsigned short) ((short) 2026292070138065270LL)));
                                var_23 -= ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (arr_11 [11LL] [11LL] [i_2] [i_7] [i_8] [i_8])))) : (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) > ((+(var_12)))));
                                var_24 = ((/* implicit */unsigned short) var_0);
                                arr_27 [i_1] [i_1] [i_2] [0LL] [(_Bool)1] = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_0 + 2] [i_0 + 2] [(short)10])) || (((/* implicit */_Bool) (short)-1))))) << (((((((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) - ((-(((/* implicit */int) arr_16 [i_1] [i_1] [8] [i_7] [i_8] [i_2])))))) - (34536)))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_0 + 2] [i_0 + 2] [(short)10])) || (((/* implicit */_Bool) (short)-1))))) << (((((((((((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) - ((-(((/* implicit */int) arr_16 [i_1] [i_1] [8] [i_7] [i_8] [i_2])))))) - (34536))) + (54))) - (17))))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 2; i_9 < 9; i_9 += 2) 
                {
                    var_25 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30077))) : (4403251837909933119ULL))))) > (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_9] [i_9])) : (var_7))), ((+(((/* implicit */int) var_5)))))))));
                    var_26 -= ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_11)), (max((((/* implicit */unsigned int) (short)-25207)), (1738138680U))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_7 [i_0] [2] [i_9 + 2])) / (((/* implicit */int) var_10))))))));
                }
                arr_31 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_22 [i_0] [i_1] [i_1])), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((arr_8 [i_1] [i_1] [i_0]) / (((/* implicit */long long int) 1348066106U))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_14);
    var_28 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((unsigned int) 0))));
    var_29 = ((/* implicit */unsigned int) var_4);
}
