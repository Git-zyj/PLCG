/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221201
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_13))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) 2013265920U))));
                            arr_15 [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) var_11))), (min((2013265917U), (((/* implicit */unsigned int) -416730596))))));
                            arr_16 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] [i_2] = ((/* implicit */int) 2047U);
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            arr_21 [i_5 - 1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) var_6);
                            arr_22 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3 - 2] [i_0]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) (unsigned short)27174);
                            arr_25 [i_2] [i_3] [i_3 - 2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (7935531212058766377LL) : (-19LL)));
                            var_17 &= ((/* implicit */unsigned short) (+(arr_24 [i_3 - 3] [i_1] [i_3 + 3] [i_1] [i_3 + 3])));
                        }
                        var_18 = ((/* implicit */signed char) min((((/* implicit */int) min(((unsigned char)43), (var_12)))), ((-(var_3)))));
                        arr_26 [i_2] = ((/* implicit */unsigned char) arr_8 [i_2] [i_2] [i_2]);
                        arr_27 [i_0] [i_2] [i_0] [i_1] [i_3] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_3 + 2] [i_2] [i_3 - 1] [i_3] [i_3 + 3]))))), (min((((var_6) & (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned short) (_Bool)1))))));
                        arr_28 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2]);
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        var_19 += ((/* implicit */long long int) (signed char)-12);
                        arr_31 [i_2] = (!((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])))));
                        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) (-(arr_2 [i_0])))) + (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_11 [i_7] [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) + (((/* implicit */int) arr_14 [i_7] [i_7] [i_2] [i_2] [i_2] [i_1] [i_0])))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((max((arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_8]), (var_12))), (((/* implicit */unsigned char) arr_23 [i_0] [i_2] [i_1] [i_2] [i_8] [i_8])))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_4))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_37 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned short) var_4);
                            var_23 = ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)119)));
                            var_24 &= ((/* implicit */unsigned char) max((min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) arr_8 [i_0] [i_8] [i_9])))))), (((/* implicit */int) var_4))));
                            arr_38 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_2] [i_9]))) : (12U))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_9] [i_2] [i_0])) / (var_3))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) 14615430210024685038ULL))), (min((((/* implicit */unsigned int) arr_7 [i_9] [i_8] [i_2] [i_0])), (arr_2 [i_0])))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            arr_44 [i_10] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) (+(-1759954967704411466LL))));
                            var_25 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_32 [i_1] [i_2] [i_10])))) / ((-(var_3)))));
                            arr_45 [i_2] = ((/* implicit */int) (!(((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_10] [i_0] [i_10]))))));
                            var_26 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((arr_0 [i_10] [i_2]), (((/* implicit */unsigned char) ((_Bool) arr_6 [i_0] [i_0])))))), (min((((/* implicit */long long int) arr_6 [i_8] [i_1])), (var_2)))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(arr_11 [i_0] [i_1] [i_2] [i_8] [i_11] [i_2] [i_8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_8] [i_0])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_11] [i_8] [i_0] [i_2] [i_0] [i_1] [i_0]))))) : (((((/* implicit */unsigned int) arr_42 [i_0] [i_1] [i_2] [i_1] [i_11])) + (((var_10) ? (2477795399U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            arr_48 [i_0] [i_1] [i_2] [i_8] [i_2] = ((/* implicit */signed char) (-(arr_36 [i_0] [i_1] [i_2])));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */short) var_1);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_36 [i_0] [i_2] [i_2]) < (arr_11 [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] [i_12])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_2] [i_2] [i_12])) && (((/* implicit */_Bool) arr_32 [i_1] [i_2] [i_2])))))));
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_40 [i_12] [i_2] [i_2] [i_2] [i_0]))));
                            var_31 = ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)109)), ((unsigned char)74)))), ((+(((/* implicit */int) (signed char)-41))))));
                        }
                        arr_53 [i_0] [i_2] [i_2] [i_8] = ((/* implicit */_Bool) arr_49 [i_0] [i_2] [i_0] [i_0] [i_1]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_56 [i_0] [i_2] [i_2] [i_13] [i_0] [i_2] = ((/* implicit */signed char) min((((unsigned long long int) max((((/* implicit */long long int) var_7)), (arr_51 [i_0] [i_2] [i_2] [i_13] [i_13])))), (((/* implicit */unsigned long long int) var_5))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), ((unsigned char)165)));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            arr_63 [i_0] [i_1] [i_2] [i_14] [i_15] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_33 [i_15] [i_14] [i_2] [i_1])) ? (arr_17 [i_14] [i_1] [i_2]) : (((/* implicit */long long int) arr_2 [i_0])))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) 416730596))));
                            arr_64 [i_0] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_2] [i_1] [i_2] [i_14] [i_15] [i_15] [i_0]))));
                            var_34 = ((/* implicit */_Bool) arr_57 [i_0] [i_14]);
                            var_35 = ((/* implicit */unsigned int) var_13);
                        }
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(arr_24 [i_0] [i_1] [i_2] [i_14] [i_0]))))));
                            var_37 = ((/* implicit */long long int) (!(arr_12 [i_0] [i_1] [i_2] [i_14] [i_16])));
                        }
                        arr_67 [i_0] [i_0] [i_2] = ((/* implicit */short) ((_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                        var_38 &= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_14] [i_14]))) + (min((-4728749820052235049LL), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_0])), (((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                    }
                    arr_68 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((min((arr_43 [i_2] [i_2] [i_1] [i_1] [i_0]), ((_Bool)1))) ? (((max((1543490938U), (((/* implicit */unsigned int) (signed char)125)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */int) (signed char)-12);
                        arr_71 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                        var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_62 [i_0] [i_1] [i_2] [i_17] [i_1] [i_17] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65534))))), (((/* implicit */int) (unsigned char)147))))), (((min((((/* implicit */long long int) var_1)), (-1042643793003374114LL))) | (((/* implicit */long long int) ((((/* implicit */unsigned int) var_11)) & (var_9))))))));
}
