/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245632
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
    var_11 = ((short) ((unsigned long long int) max((var_1), (((/* implicit */unsigned char) (signed char)-118)))));
    var_12 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) max((var_1), (var_1)))))), (((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (signed char)-118))))) <= (((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((((/* implicit */int) ((_Bool) max((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_9)))))) > (((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_2] [i_3 - 1]))))) << ((((~(((/* implicit */int) arr_9 [i_3])))) + (268))))));
                            arr_13 [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [i_2 + 1]), ((signed char)117)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0])))) : ((((_Bool)1) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                            arr_14 [(unsigned short)12] [(_Bool)1] [i_2] [i_3] = ((/* implicit */signed char) max((((((_Bool) var_8)) ? (((/* implicit */int) min((arr_6 [i_0] [i_3] [(_Bool)1]), ((signed char)121)))) : (((/* implicit */int) ((_Bool) var_9))))), (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) (signed char)-109)))))))));
                            arr_15 [i_0] [i_1] [i_0] [i_0] [i_3 - 1] [(short)14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-115))));
                        }
                    } 
                } 
                arr_16 [i_0] [9LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_9 [i_0]))))), (min((var_8), (((/* implicit */unsigned char) var_7))))))) << (((((((((/* implicit */_Bool) -2140339287)) ? (((/* implicit */int) (unsigned short)52770)) : (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_8 [i_0] [i_1])))))) - (11)))));
                arr_17 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((signed char) (signed char)-40))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0])), (arr_7 [(unsigned short)1] [(unsigned short)6] [i_1] [(unsigned short)6])))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                            {
                                arr_26 [i_0] [i_1 - 2] [i_4] [(signed char)3] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) min((var_7), (var_2)))) : (((/* implicit */int) ((unsigned short) (unsigned char)218))))));
                                arr_27 [i_0] [i_1 - 1] [i_4] [8ULL] [i_5] = ((/* implicit */signed char) max((((unsigned short) ((unsigned char) arr_9 [i_6]))), (((unsigned short) (+(((/* implicit */int) arr_19 [(signed char)10] [i_1] [5LL])))))));
                                arr_28 [i_0] [i_1] [i_4] [i_5 + 1] [5ULL] = ((/* implicit */unsigned short) (((-(((int) arr_19 [i_0] [(_Bool)1] [(signed char)6])))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [(unsigned char)1] [i_4] [(_Bool)1])) + (2147483647))) << (((/* implicit */int) var_4))))))))));
                                arr_29 [i_6] [i_5] [i_4] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), ((short)22047))))) ^ (min((13592221995069450041ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                            }
                            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                            {
                                arr_33 [i_1] [i_0] [i_4] [i_5] = ((/* implicit */signed char) min(((-(max((arr_23 [i_0] [i_7] [i_4] [i_5] [1ULL] [i_5 + 2]), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) arr_21 [i_0] [(unsigned char)12]))))))));
                                arr_34 [i_5] [i_1] [(short)12] [i_1 - 2] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((short) arr_10 [i_0] [i_7] [i_4] [(short)11]))));
                                arr_35 [i_0] [(unsigned short)2] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) min((((long long int) (-(((/* implicit */int) arr_10 [i_7] [i_5] [i_4] [(unsigned short)10]))))), (((/* implicit */long long int) ((unsigned short) ((unsigned char) var_7))))));
                                arr_36 [i_5] [i_1] [i_4] [i_5 - 2] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((max((5869807880656635705LL), (((/* implicit */long long int) (unsigned short)26380)))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))))));
                            }
                            for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                            {
                                arr_39 [i_1] [i_4] = ((/* implicit */unsigned short) ((signed char) ((signed char) ((_Bool) var_3))));
                                arr_40 [i_0] [1LL] [i_4] [(unsigned short)9] &= ((/* implicit */_Bool) ((unsigned short) ((signed char) (-(((/* implicit */int) (short)(-32767 - 1)))))));
                            }
                            arr_41 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) min((max((((arr_1 [i_0]) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 3] [i_1 - 3] [i_5])) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((arr_11 [i_5 + 2] [i_4] [i_1] [i_0]) && (((/* implicit */_Bool) arr_9 [i_0]))))))), (((/* implicit */int) min((max(((unsigned short)55165), (((/* implicit */unsigned short) (signed char)-124)))), (((/* implicit */unsigned short) ((unsigned char) arr_7 [i_0] [i_0] [(unsigned char)4] [i_0]))))))));
                            arr_42 [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_25 [(_Bool)1]))))) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (9223372036854775791LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)27777))))))) & (min((min((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_38 [(short)1] [(signed char)5] [i_4] [i_4] [(signed char)9] [i_5])))), (((/* implicit */unsigned long long int) max(((unsigned short)6377), (((/* implicit */unsigned short) (short)-27777)))))))));
                            arr_43 [i_0] [i_1] [i_4] [i_1] [i_5] [(signed char)2] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) min((((/* implicit */short) (signed char)-28)), (var_10)))), (((((/* implicit */_Bool) arr_2 [i_4] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_5])) : (((/* implicit */int) var_5))))))));
                            arr_44 [i_4] [i_4] [i_1] = (((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_0)))))) - ((((~(((/* implicit */int) arr_24 [i_0] [14ULL] [i_4] [i_5 - 2] [i_5 + 3])))) - (((((/* implicit */int) (unsigned short)29871)) * (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
