/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27529
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0] [i_3 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_3] [i_1])) ? (((int) (short)-32757)) : (((/* implicit */int) arr_1 [6] [6]))))))))));
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1] [i_1] [i_3 + 1] [i_3] [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)139)) : (arr_5 [i_0] [i_0 - 2] [i_4] [i_2 - 1])))) ? (((/* implicit */int) ((arr_8 [i_3 + 1] [i_0] [i_2 + 2] [i_4] [i_4]) < (arr_8 [i_4] [i_0] [i_2] [i_3 - 3] [i_4])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3 + 1])) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) var_14))))));
                                var_19 = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_5 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */int) (short)24002)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(signed char)6] [(signed char)6])) && (((/* implicit */_Bool) var_5))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)31010)) ? (arr_8 [i_1] [i_0] [i_0] [i_0] [1LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))))) ? (max((9223372036854775807LL), (((/* implicit */long long int) (short)10742)))) : (arr_8 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2])));
                    arr_13 [i_0 - 2] [i_1] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                }
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 285584504)) : (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) arr_12 [i_1])) : (arr_6 [i_6] [i_1] [i_0]))))))) >> (((((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_6] [i_1] [i_1] [i_0] [i_1])) ? (-1884163106) : (((/* implicit */int) arr_4 [i_6] [i_1] [i_0 + 1])))) / (arr_12 [i_0 - 2]))) + (24)))));
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((arr_12 [11LL]) << (((((-39868260022745650LL) + (39868260022745665LL))) - (15LL)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0 - 2])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */int) (short)31))))))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_6] [i_6] [i_6] [i_0] [i_0 - 2] [i_1])))))));
                    var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (arr_11 [i_6] [8LL] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_6] [i_0 - 2] [i_0 - 2] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_11 [i_6] [(unsigned char)4] [i_0 - 2] [i_0 - 2])) ? (arr_11 [i_6] [i_6] [i_0 - 1] [i_0 + 1]) : (arr_11 [i_6] [i_0] [i_0 - 2] [i_0 - 1]))) : (((((/* implicit */int) var_5)) / (arr_5 [i_6] [i_0 - 2] [i_0 - 1] [i_0 + 1])))))));
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_11 [i_7] [i_1] [i_7] [i_7]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) (~(arr_15 [i_0] [i_0 - 2] [i_9])))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0 + 1] [i_0])) ? (arr_15 [(short)7] [i_0 + 1] [(unsigned char)7]) : (arr_15 [i_0] [i_0 - 2] [i_0]))) : (max((var_0), (7717070099114108603LL))));
                                arr_24 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)8] [i_8]))));
                                arr_25 [(signed char)3] [i_8] [(signed char)3] [i_0] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2])) ? (arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2])) ? (arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 - 2] [i_0 + 1]))) : (((arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]) / (arr_3 [i_0 + 1] [i_0 - 2] [i_0 + 1])))));
                                var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_15 [i_9] [i_8] [i_7]), (((/* implicit */long long int) arr_12 [i_8])))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_7])) | (-1)))) : (((((/* implicit */_Bool) arr_8 [i_9] [i_7] [i_9] [(short)12] [i_9])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_7]))) ^ (arr_8 [(signed char)2] [i_9] [i_7] [i_9] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483620)) ? (((/* implicit */int) var_8)) : (-2147483619))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1916241616207787240LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_7] [i_7])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [(unsigned short)9] [i_0]))))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (7728315010263097623LL) : (((/* implicit */long long int) 3806938167U))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        for (short i_11 = 2; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_10 + 2] [i_0 - 2] [i_0 - 2]) * (((/* implicit */int) arr_26 [i_0 + 1] [(signed char)2] [(signed char)2] [i_11 - 2]))))) ? (((/* implicit */int) arr_26 [i_0] [4] [i_7] [i_11 - 2])) : (((arr_3 [i_10 + 1] [i_0 + 1] [i_7]) | (((/* implicit */int) arr_26 [i_7] [i_11] [i_7] [i_11 - 2]))))));
                                arr_30 [i_0] [i_1] [i_1] [i_1] [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 39868260022745659LL)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (short)-32))))), (((arr_20 [i_0 - 2] [i_0 + 1] [i_11 + 2] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)36)))))));
                                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_7] [i_7] [i_11 + 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_26 [i_0] [i_0] [i_0 - 2] [i_0])), ((signed char)19))))) : (((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [4] [i_7] [i_7]))))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] = ((/* implicit */int) (~(((arr_18 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2]) - (arr_18 [i_0] [i_0 - 2] [i_0] [i_0])))));
                }
                arr_32 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_11 [i_0] [i_1] [i_0] [i_0]))) << (min(((-(arr_23 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) > (arr_27 [i_1] [i_1] [i_0] [i_0]))))))))) : (((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_11 [i_0] [i_1] [i_0] [i_0]))) + (2147483647))) << (((((min(((-(arr_23 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)11)) > (arr_27 [i_1] [i_1] [i_0] [i_0])))))) + (466574841559474790LL))) - (9LL))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (-885357432) : (((/* implicit */int) var_11)))), (-885357430)))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_9)))) << (((arr_27 [i_0] [i_0] [i_0] [3LL]) + (1611800575))))))));
                arr_33 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) % (arr_8 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1])))) : (((((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 2] [i_1] [i_1])) ? (arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_0] [i_0] [i_0] [i_0])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)56)) : (arr_12 [i_0]))))))));
            }
        } 
    } 
    var_31 &= ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) var_17)))));
}
