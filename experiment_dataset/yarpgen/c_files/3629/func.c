/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3629
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
    var_12 *= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))), (6041544750394251094LL))) <= (((var_1) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)9)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) var_6)) == (arr_11 [(unsigned short)4] [i_3] [i_3 - 1] [i_3] [i_1])));
                        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2685041691712909685LL))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_0] [i_2])));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_2] [i_3] [(_Bool)1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_8 [i_3 - 1])) : (1868399445)))) : (((329630967U) >> (((/* implicit */int) (_Bool)1)))))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? ((-(2685041691712909687LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2685041691712909682LL))))));
                            var_17 = ((((/* implicit */int) arr_5 [i_3 - 1] [i_4 - 1] [i_4 - 1])) >> (((((/* implicit */int) ((unsigned short) var_11))) - (11086))));
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((signed char) arr_11 [i_1] [i_3] [(short)13] [i_3 - 1] [i_3 - 1]));
                            arr_20 [i_0] [i_1] [i_3] [(_Bool)0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (-2685041691712909670LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3] [i_3] [i_3 - 1])))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)9] [i_0] [i_0])))))))));
                        }
                        arr_21 [i_0] [i_3] [i_0] [(unsigned short)10] [12LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_1] [i_3])) : (((/* implicit */int) arr_14 [i_3])))))));
                        arr_22 [i_3] [i_1] [i_2] = ((/* implicit */int) 3965336334U);
                    }
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) var_0);
                        arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_4 [i_1] [i_2] [i_6])) >> (((((/* implicit */int) arr_4 [i_0] [(signed char)13] [i_6])) - (28956))))));
                    }
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (unsigned char)142)))))) % (((2685041691712909689LL) >> (((3965336342U) - (3965336337U)))))));
                            var_22 = (+(((/* implicit */int) (((~(((/* implicit */int) arr_18 [i_8] [(unsigned char)8])))) == (((((/* implicit */_Bool) (unsigned char)216)) ? (-152298216) : (arr_13 [4LL] [i_1])))))));
                            arr_31 [i_1] [(unsigned short)16] [i_1] |= ((((/* implicit */_Bool) ((var_6) ^ (arr_13 [3] [i_8])))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) (unsigned short)31743)))) : (((((_Bool) 4204889940843297004LL)) ? (((int) arr_4 [i_0] [i_0] [i_7])) : ((~(((/* implicit */int) var_9)))))));
                            arr_32 [i_0] [i_2] [i_7] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_7)) <= (((((var_0) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [i_0] [i_1] [i_7])))))) ? (((unsigned int) arr_13 [i_0] [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)16] [(unsigned char)16] [i_0] [(unsigned short)12])))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            arr_37 [i_0] [(unsigned short)10] [i_2] [i_2] [i_7] [(short)2] = ((/* implicit */unsigned short) var_1);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((_Bool) (unsigned short)33787)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(3379823367702890182LL)))));
                            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_29 [i_9] [i_1]))))))));
                        }
                        var_26 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 235375589U)) && (((/* implicit */_Bool) (unsigned char)246))))));
                        arr_38 [i_0] [i_7] [i_0] [i_7] = (((-(((/* implicit */int) (unsigned short)55084)))) <= ((+(((/* implicit */int) (unsigned short)17)))));
                        arr_39 [i_7] = ((((/* implicit */_Bool) max(((~(2147483647))), (((((/* implicit */_Bool) -1868399430)) ? (-2147483639) : (1868399431)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_14 [i_7]))))))) : (4294967269U));
                    }
                    arr_40 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */signed char) ((unsigned short) ((int) ((unsigned int) arr_34 [i_2] [i_2] [i_2] [(unsigned short)14] [i_2] [i_2]))));
                }
            } 
        } 
        arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [12U])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0])))))) ? (((/* implicit */long long int) ((arr_16 [(unsigned short)14] [i_0] [i_0] [i_0] [i_0]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)1] [i_0]) : (16383)))) : ((-(var_1))))) : (((/* implicit */long long int) 2880154709U))));
    }
    var_27 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((unsigned int) (unsigned short)42219)) : (2998427060U)));
}
