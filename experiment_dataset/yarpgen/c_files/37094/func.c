/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37094
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
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? ((+(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) != (((/* implicit */int) var_16)))) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)56343))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 2] [i_2])) << (((((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 2] [i_2])) - (138)))))) : ((-(2313354210U))));
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65515))));
                    var_21 = ((min((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) var_13)))) / (min((min((arr_8 [i_0] [i_1] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) (signed char)25)))), (((/* implicit */unsigned int) ((signed char) var_15))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] [i_3 + 1] = ((/* implicit */unsigned char) (signed char)61);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) 1981613094U)) || (((/* implicit */_Bool) arr_5 [i_0] [(signed char)1] [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56343))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0])))))))))));
                        var_23 = ((/* implicit */unsigned char) ((unsigned short) min((min((arr_6 [(unsigned char)2]), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) 11U)))));
                        var_24 += ((/* implicit */long long int) 1981613068U);
                    }
                    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_10 [(unsigned char)9] [(unsigned char)9] [i_1] [i_0]))))) & (arr_11 [i_0] [i_0] [i_0] [i_4])));
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) 0LL)))));
                            var_28 = ((/* implicit */short) (~(var_2)));
                        }
                        for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_2 - 1] [i_4 + 2] [i_6] [2U]);
                            arr_21 [i_6] [i_4] [i_2] [i_1] [i_6] = ((/* implicit */long long int) arr_10 [i_4 - 1] [i_2] [i_1] [i_0]);
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) var_2)) : (var_6))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (arr_16 [i_0] [i_1] [i_2] [i_4 + 2] [i_1 - 3]) : (arr_16 [i_0] [2U] [i_2 - 1] [i_0] [i_1 - 4])))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_4 + 1] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((unsigned int) -4318798265670106231LL)))))), (arr_11 [i_0] [(short)3] [(short)3] [(short)3])));
                            arr_26 [i_0] [i_1 + 1] [(signed char)10] [i_4] [(unsigned short)9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_1 - 3] [i_2] [i_1 - 3])))) ? (((/* implicit */int) arr_1 [i_7] [5U])) : (((/* implicit */int) max((((unsigned char) var_6)), (((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1] [i_0] [i_4] [i_8])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((21U) << (((/* implicit */int) (signed char)24)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32765)))))) ? (((((/* implicit */_Bool) arr_16 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_16 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4]))) : (((((/* implicit */_Bool) var_3)) ? (max((arr_16 [i_0] [i_1] [i_2 - 1] [i_0] [i_8]), (arr_8 [i_8] [i_2] [i_1 - 3] [6U]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                            arr_30 [i_4 + 1] [i_4 + 1] [i_2] [9U] [9U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 + 2]))) : (-8390974353928031620LL)))) ? ((+(4001548077U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (((/* implicit */int) arr_3 [i_4 - 1])) : (((/* implicit */int) arr_3 [i_4 + 2]))))));
                        }
                    }
                    var_32 &= ((/* implicit */unsigned char) max(((~(arr_10 [i_0] [(unsigned char)2] [(unsigned char)2] [i_0]))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (2017190036659837835LL) : (((/* implicit */long long int) var_5))))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) 2313354202U);
    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)43547)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_7))))) ? (((unsigned int) 1133696898U)) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
}
