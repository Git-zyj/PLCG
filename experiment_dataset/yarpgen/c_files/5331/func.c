/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5331
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) <= (arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)182))))) : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2 + 1]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? ((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2 - 1] [i_3])))) : ((+(((/* implicit */int) var_1)))))))));
                            arr_13 [i_1] [i_2 - 1] [(unsigned short)4] = (-(var_8));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_1] [i_1] [i_1] [i_1]);
                    arr_17 [i_1] [i_4 - 1] = ((/* implicit */_Bool) ((((long long int) arr_2 [i_4 - 2] [i_1] [i_0])) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_4 + 1])))));
                    arr_18 [i_1] [i_1] [i_4 + 1] [i_0] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned int) var_7)), (arr_9 [i_0] [i_0] [i_4] [i_0] [i_4 - 2] [i_4]))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_25 [i_6] [i_5] [14U] [i_4 - 2] [14U] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)182)) - (161))))));
                            arr_26 [i_0] [i_0] [i_0] [i_1] = max((((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */long long int) min((arr_11 [i_1] [i_5] [i_1] [i_1]), (var_4)))) : (min((var_9), (arr_1 [i_1]))))), (((arr_19 [i_1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 2]))) : (var_9))));
                            arr_27 [i_0] [i_1] [i_0] [i_4 - 1] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned char) arr_20 [i_0] [i_1]));
                            arr_28 [i_1] [i_1] = arr_21 [i_0] [i_0] [i_1] [i_5] [i_6] [i_1] [i_4 - 1];
                            arr_29 [i_0] [i_4 - 1] [i_4 - 2] [i_1] [i_1] = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) 8U)), (-1LL)))));
                            arr_33 [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) min((max((max((((/* implicit */long long int) -1759617793)), (var_8))), (((/* implicit */long long int) ((unsigned int) 856230280U))))), (((/* implicit */long long int) ((1885100525) % (((/* implicit */int) (_Bool)1)))))));
                            arr_34 [i_0] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4 - 2] [i_5])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_4 + 1] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_4 + 1] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)58))))) ? (min((((/* implicit */long long int) ((unsigned int) var_7))), (min((var_9), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4 - 1] [i_4] [i_5] [i_8])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_4] [i_1] [i_1] [i_8])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (min((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [i_0])))))))));
                            arr_38 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_10);
                        }
                        arr_39 [i_0] [i_0] [(unsigned short)0] = ((/* implicit */long long int) 3533396742U);
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_9 = 4; i_9 < 13; i_9 += 3) 
                {
                    for (unsigned int i_10 = 2; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_45 [(unsigned char)10] [i_9] [i_1] [(unsigned char)10] |= ((/* implicit */long long int) min((max((622717834U), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((unsigned char) var_5)))));
                            arr_46 [i_0] [i_1] [i_9] [i_9 + 1] [i_1] [i_10 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((var_3) ? (var_9) : (var_8)))) ? (((/* implicit */int) arr_14 [i_1] [i_9 - 1] [i_10 + 1])) : (((int) (unsigned short)52750)))) : (((/* implicit */int) arr_5 [i_9 - 4]))));
                            arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((arr_11 [i_1] [i_1] [i_1] [i_10 - 2]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_1] [i_10]))))) <= (var_2))))));
                            /* LoopSeq 3 */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_50 [i_0] [i_1] [i_1] [i_10 - 2] [i_1] = 1931143935;
                                arr_51 [i_10] [i_1] [i_10] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) max((var_1), (arr_5 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1455523792U)))));
                                arr_52 [4LL] [i_10 + 1] [4LL] = ((((/* implicit */unsigned int) ((arr_24 [i_0] [i_1] [4LL] [i_0] [i_0]) ? (((((/* implicit */_Bool) 255)) ? (-1118095413) : (((/* implicit */int) (unsigned short)54358)))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_10 - 1] [i_11] [i_11])) ? (((/* implicit */int) arr_42 [i_11] [i_10 - 2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1]))))))) * ((((((_Bool)1) ? (arr_11 [(_Bool)1] [(_Bool)1] [i_9 - 1] [i_9 + 3]) : (var_2))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_10] [i_11])) / (((/* implicit */int) var_6))))))));
                            }
                            for (unsigned char i_12 = 3; i_12 < 14; i_12 += 3) /* same iter space */
                            {
                                arr_55 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_12 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [i_1]) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_9]))) : (arr_21 [i_12] [i_0] [i_1] [i_10 - 1] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_22 [i_12 - 1] [i_10] [i_10] [i_9 - 3] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1110937417U)))) % (arr_22 [i_0] [i_0] [i_1] [i_9 - 3] [i_1] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_30 [i_12 - 3] [i_12 + 2] [i_12 + 1] [i_10 - 2] [i_9 + 2] [i_9 + 2])) ? (arr_21 [i_1] [i_9 + 3] [i_1] [i_9] [i_9 - 4] [i_12 - 3] [i_9 - 4]) : (((/* implicit */long long int) min((1185369819U), (var_10))))))));
                                arr_56 [i_9 - 1] [(unsigned short)14] [i_9 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned int) ((int) var_5))) : (max((((/* implicit */unsigned int) arr_2 [i_9 + 1] [i_10] [i_9 + 1])), (3714539633U)))))) ? (min(((+(-1))), (((/* implicit */int) arr_44 [i_9 + 2] [i_10] [i_10 + 2] [i_12 + 2])))) : (((((/* implicit */_Bool) arr_22 [i_9 + 3] [i_9 - 2] [i_9 + 1] [i_10 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 3])) ? (((((/* implicit */_Bool) var_5)) ? (-823327401) : (((/* implicit */int) arr_36 [i_10 + 1] [i_10] [i_10] [i_10 + 2] [i_10] [i_10 + 1])))) : (((/* implicit */int) var_3))))));
                            }
                            for (unsigned char i_13 = 3; i_13 < 14; i_13 += 3) /* same iter space */
                            {
                                arr_60 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((min(((-(240))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_9 - 3])) : (((/* implicit */int) var_7)))))) / (12708747));
                                arr_61 [i_1] [i_10] [i_1] [i_1] [i_1] = arr_19 [i_0] [i_1] [i_9 - 4] [i_1] [i_1] [i_0];
                            }
                            arr_62 [0U] [0U] [0U] [i_0] = ((unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-823327423) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((arr_59 [i_0] [i_0] [i_1] [i_0] [i_0] [(unsigned char)2]), (arr_59 [i_0] [i_1] [i_9] [i_9] [i_10] [(_Bool)1])))) : (((/* implicit */int) arr_59 [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_10] [6U]))));
                        }
                    } 
                } 
                arr_63 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_1] [i_1] [i_0] [i_0])) & (((/* implicit */int) ((7906490565321855456LL) == (((/* implicit */long long int) arr_3 [i_0] [i_1])))))))) ? (max((((3232853901672307797LL) / (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_1] [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))) * (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((((/* implicit */long long int) var_10)), (arr_1 [i_0])))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_2)) : (max((((/* implicit */long long int) (unsigned char)23)), (var_8))))), (((/* implicit */long long int) var_2))));
    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
    var_13 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)11484))))), (var_9));
}
