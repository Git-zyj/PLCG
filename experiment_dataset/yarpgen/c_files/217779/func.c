/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217779
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
    var_16 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (-(min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_18 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (268435328LL))))) < (min(((+(arr_1 [i_0]))), (arr_1 [(signed char)6])))));
        arr_2 [i_0] = (-(((-6098096094504473085LL) & (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_5 [i_0] [(short)10] [(signed char)10]))), (((/* implicit */unsigned long long int) arr_7 [i_0]))))) && (((/* implicit */_Bool) (-(arr_7 [i_0]))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(-6098096094504473111LL))), (((/* implicit */long long int) (~(arr_8 [i_0]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)191), (arr_6 [i_0] [i_0] [i_2]))))) * (((unsigned int) arr_3 [9])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6098096094504473107LL)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (short)12118))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) : (var_5))) : (arr_8 [i_0]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned short) (+((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            var_22 ^= var_2;
                            var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)10)) ? ((-(-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [12U] [i_1] [i_2])) ? (-1319446586) : (-1988181361))))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_4] [i_1] [(unsigned short)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned char)13]))), (((/* implicit */unsigned int) (!((_Bool)1))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1818014070U)))))))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 3839276419U))) ? (0ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) 587620227U))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_5] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)246)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))))) : (((/* implicit */int) ((short) arr_14 [i_0] [i_3 + 1] [i_5] [i_5] [12U])))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_3))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (var_3)));
                        }
                        var_28 = ((/* implicit */_Bool) arr_12 [i_3 + 1] [(unsigned short)8] [i_1] [i_0] [i_0]);
                    }
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            arr_22 [1U] [14U] [i_1] [1U] [i_1] [i_6] [i_7] = ((/* implicit */_Bool) arr_11 [i_2]);
                            arr_23 [i_7] [i_6] [i_2] [i_1] [(_Bool)1] |= ((/* implicit */int) arr_18 [i_0] [i_1] [i_2]);
                            var_29 = ((/* implicit */short) ((((((/* implicit */int) ((unsigned char) (short)-26184))) >> (((/* implicit */int) ((arr_5 [i_1] [i_1] [i_2]) < (((/* implicit */unsigned long long int) 27U))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)239))))))))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) 1319446586);
                            arr_27 [3] [12] [i_2] [(signed char)10] [3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10)))))));
                            arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((int) 2670768472U));
                            arr_29 [(signed char)4] [(short)5] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 6098096094504473128LL))) && (((/* implicit */_Bool) 6098096094504473111LL)))))));
                            var_31 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((arr_8 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127)))))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((short) 455690886U)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 2; i_9 < 14; i_9 += 2) /* same iter space */
                        {
                            var_32 += ((/* implicit */unsigned long long int) (-(-7635815343001962452LL)));
                            arr_32 [i_0] [i_0] [9] [i_6] [i_0] = ((/* implicit */int) (+(arr_30 [i_9] [i_9] [i_6] [i_6] [i_2] [(unsigned char)4] [13LL])));
                            arr_33 [i_0] [i_1] [(signed char)11] [i_6] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                        }
                        var_33 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_15 [12U] [12U] [12U] [i_1] [i_2] [12U] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) arr_0 [i_0]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 3) 
                        {
                            arr_37 [i_0] [12ULL] [i_2] [i_6] [i_2] [i_10] = ((/* implicit */_Bool) (-((-(-2147483634)))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (var_11)));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) (~((+(var_10)))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(385940125)))) ? (((/* implicit */long long int) ((var_6) ? (arr_26 [i_0] [i_1] [i_1] [i_6] [i_11]) : (3839276419U)))) : (min((134217728LL), (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_43 [i_0] [(unsigned short)8] [i_2] [i_2] &= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)63))));
                        arr_44 [12U] [i_2] [i_12] = ((/* implicit */signed char) arr_1 [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) min((185834279), (((/* implicit */int) (unsigned short)65535))));
                            var_38 = ((/* implicit */long long int) (~((-(((int) arr_25 [i_2] [i_1] [0U] [(_Bool)1] [i_13] [i_2]))))));
                        }
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7168))))), (min((((/* implicit */unsigned int) (signed char)-23)), (644758264U))))))));
                            arr_49 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_12);
                        }
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 12; i_15 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) 6098096094504473110LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((~(arr_51 [i_0] [i_0]))))))));
                        var_41 = ((/* implicit */int) var_5);
                        var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_0)))));
                        arr_52 [(unsigned char)8] [1] [i_2] [(unsigned char)8] [i_2] [(unsigned char)8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_2] [(_Bool)1]))));
                    }
                    var_43 = ((/* implicit */unsigned char) (~((~(10)))));
                    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_3), ((_Bool)0)))), (min((6718574430024605851LL), (((/* implicit */long long int) 3923939356U))))))))))));
                }
            } 
        } 
    }
    var_45 = var_1;
}
