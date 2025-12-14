/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216524
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
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((max((((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_1] [i_0])) - (7564))))), (((/* implicit */int) arr_3 [i_0] [(unsigned short)8])))) | (429266909)))));
                    arr_8 [i_0] = arr_5 [i_1];
                }
                for (signed char i_3 = 3; i_3 < 9; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        for (short i_5 = 4; i_5 < 8; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_3] [(unsigned char)6])))))));
                                arr_18 [i_0] [i_0] [i_3 + 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1125891316908032ULL)) ? (((((/* implicit */int) ((455041391) == (((/* implicit */int) var_3))))) << (((((/* implicit */int) max((var_1), ((unsigned short)57721)))) - (57693))))) : (((/* implicit */int) ((short) arr_15 [i_0 + 2] [i_4 + 2] [i_3] [i_3] [i_3] [i_4 + 2] [i_4 - 2])))));
                                var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) / (((unsigned long long int) (unsigned short)30684))))));
                                arr_19 [i_0] [i_0] [i_1] [i_3] [i_3] [i_4] [i_5 - 1] = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18445618182392643579ULL)))))) >= (var_4)));
                    arr_20 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((int) arr_17 [i_0 + 4] [i_0] [i_0] [i_0] [i_0] [i_3 + 1])) > ((~(((/* implicit */int) var_18))))))) * (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_0 - 2] [i_0] [i_0])), ((unsigned short)57721))))));
                    var_23 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7794))))) : (((((/* implicit */_Bool) (unsigned short)57721)) ? (arr_4 [i_0] [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_3])))))))));
                }
                for (signed char i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (signed char i_8 = 1; i_8 < 8; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_6] [i_6 - 3] [i_0] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) -455041392));
                                var_24 -= ((/* implicit */signed char) arr_13 [i_7]);
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_21 [i_0] [i_6 - 2] [i_6 - 3])) : (455041391)))) / (min((((/* implicit */long long int) arr_21 [i_0] [i_6 - 2] [i_6 - 3])), (arr_4 [i_0] [i_6 + 1] [i_6 - 1])))));
                    arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0]);
                }
                for (signed char i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) min((max((((/* implicit */int) min((arr_15 [i_0 + 3] [i_0] [i_0 + 3] [i_1] [i_1] [i_1] [i_1]), (arr_3 [i_0 - 2] [i_0])))), (455041391))), (((/* implicit */int) max((((((/* implicit */int) (unsigned short)57721)) > (((/* implicit */int) (signed char)-16)))), ((!(((/* implicit */_Bool) arr_32 [i_9] [i_1])))))))));
                    var_26 = ((/* implicit */unsigned short) ((int) (+(-455041368))));
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4081386865594777003LL) << (((((((/* implicit */int) arr_0 [i_0] [i_0 - 2])) + (139))) - (55)))))) ? (max((((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned char)56)))))) : (((/* implicit */int) (signed char)34))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) 0)))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21527)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))))))) : (((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 3] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_0 + 4]))) : (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_10])) : (arr_17 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10])))))));
                    arr_35 [i_0] [i_0 + 2] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)248)), (arr_7 [i_0] [i_1])))), ((~(((/* implicit */int) arr_33 [i_10] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_0] [i_0])) || (((/* implicit */_Bool) arr_33 [i_0 - 2] [i_10] [i_10])))))) : (((unsigned long long int) arr_24 [i_0] [i_0 + 4] [i_10] [i_0 + 4]))));
                    arr_36 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)6)))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 - 1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_10]))))))));
                }
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_30 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0] [i_11] [i_0 - 2] [i_11] [i_0 - 2])) && (((/* implicit */_Bool) arr_27 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_11]))))) % (((/* implicit */int) (unsigned char)7))));
                    arr_40 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_39 [i_0] [i_0])) ? (arr_39 [i_0] [i_0]) : (arr_39 [i_0] [i_0]))) > (max((arr_39 [i_0] [i_0]), (arr_39 [i_0] [i_0])))));
                }
                for (signed char i_12 = 2; i_12 < 7; i_12 += 3) 
                {
                    var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(72057593769492480LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0]), ((signed char)34))))) : ((~(var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)148)) < (((/* implicit */int) (signed char)6)))))))))));
                    arr_43 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_24 [i_0] [i_0 - 1] [i_1] [i_12])))) * (min((9820672886937230928ULL), (((/* implicit */unsigned long long int) (signed char)-16)))))), (((/* implicit */unsigned long long int) (-(-1217308031))))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) ((-455041368) - (((/* implicit */int) (unsigned short)27396))));
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
    {
        for (short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)255)), (((8626071186772320688ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))))));
                    arr_52 [i_13 + 1] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_47 [i_15] [i_15 + 1])), (((((/* implicit */int) (short)-25554)) & (-455041368)))))));
                    var_34 = ((/* implicit */unsigned char) arr_51 [i_13 - 2] [i_13 - 2] [i_14] [i_15]);
                    /* LoopNest 2 */
                    for (long long int i_16 = 3; i_16 < 10; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)106), ((signed char)-101)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21527))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))))) % (min((((/* implicit */unsigned long long int) arr_44 [i_16 + 2])), ((~(var_11)))))));
                                arr_60 [i_13] [i_16] [i_17] [i_15 + 1] [i_17] [i_15 + 1] [i_17] = ((/* implicit */unsigned long long int) min((max(((-(((/* implicit */int) (signed char)-109)))), (((((/* implicit */int) (unsigned short)7680)) / (((/* implicit */int) (unsigned short)64045)))))), ((-(((((/* implicit */_Bool) (unsigned short)30720)) ? (arr_44 [i_14]) : (((/* implicit */int) arr_50 [i_15]))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        {
                            var_36 = arr_65 [i_13] [i_14] [i_18] [i_19] [i_18];
                            var_37 = max(((signed char)-27), ((signed char)-21));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_61 [i_18]))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-34)) ^ (455041367))) / (((/* implicit */int) (signed char)69)))))));
                        }
                    } 
                } 
                arr_67 [i_13] = ((/* implicit */unsigned long long int) (~((~(24)))));
                var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_50 [i_13]))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 2; i_20 < 10; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        {
                            arr_72 [i_21] [i_20] [i_20] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9489532763520255696ULL))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 1) 
                            {
                                var_40 -= ((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)-69)) / (455041367))) ^ (((/* implicit */int) (unsigned char)236)))) & (((((/* implicit */int) arr_45 [i_20 - 1])) % (((/* implicit */int) (signed char)127))))));
                                arr_75 [i_20] [i_14] [i_20] = ((/* implicit */unsigned char) ((var_11) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (signed char)116)))))));
                            }
                            arr_76 [i_13] [i_14] [i_13] [i_13] &= ((/* implicit */unsigned char) ((4398012956672ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-24)), ((unsigned char)1)))) ? ((-(((/* implicit */int) (unsigned char)30)))) : (max((((/* implicit */int) arr_47 [i_13] [i_13 + 1])), (arr_68 [i_13 + 1] [i_20]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_41 = ((((((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) (signed char)127)))) & (((/* implicit */int) max(((signed char)12), ((signed char)-46)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)194))))));
    var_42 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)194))))), ((-((~(var_0)))))));
}
