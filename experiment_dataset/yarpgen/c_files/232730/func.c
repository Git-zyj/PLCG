/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232730
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
    var_10 = ((/* implicit */int) min((var_10), (min((((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) var_1)) + (12076)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_8) - (4716037420729699003LL)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_3 [i_1]))), (min((arr_7 [i_2] [i_1] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_1 [7U] [i_0])))))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)-127)) >= (((/* implicit */int) (unsigned char)94))))), ((-(((/* implicit */int) var_4)))))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((arr_7 [i_2] [i_1] [i_1] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_1] [(short)7] [i_2]) > (((/* implicit */unsigned long long int) arr_3 [i_0]))))))))));
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_13 [i_1])) <= (((/* implicit */int) arr_13 [i_1])))))));
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3] [i_1]);
                    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
                    var_14 = ((/* implicit */short) min((((arr_7 [i_3] [i_1] [i_3] [i_1]) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (12715))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_2 [i_1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_23 [i_5] [i_1] [i_4] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-14703)))))) || ((!((!(((/* implicit */_Bool) -5613560733130574789LL))))))));
                                var_15 |= ((/* implicit */short) (~(((/* implicit */int) arr_8 [2U] [i_5]))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_1])) >> (((var_9) - (13079158701074403954ULL)))))) : (max((((/* implicit */unsigned long long int) var_4)), (var_9)))));
                    arr_25 [i_0] [(short)10] [i_1] [i_1] = arr_21 [i_0] [i_1] [i_1] [i_4] [i_1];
                }
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_7 + 1])) ? ((~(((/* implicit */int) arr_4 [i_8] [1LL] [i_8])))) : (((((/* implicit */int) arr_4 [i_1] [i_8] [i_1])) & (((/* implicit */int) var_1))))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) & (arr_15 [i_0]))), (((/* implicit */unsigned long long int) var_0)))))))));
                                var_17 = ((/* implicit */short) (((!(((((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_8] [i_9] [i_0])) <= (((/* implicit */int) arr_26 [i_0] [(short)2] [i_7 - 1] [(unsigned char)13])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 4051699364U)) != (-7987202079909815561LL))))) : (arr_11 [i_1] [i_7 + 2] [12ULL] [12ULL])));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((long long int) arr_6 [i_0]))))) && (((/* implicit */_Bool) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((var_4) ? (((((/* implicit */int) arr_36 [i_11] [(signed char)15] [i_1] [i_0])) >> (((var_2) - (3909200377U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [(short)16] [i_7] [i_10] [(short)1]))))))) >> ((-(((/* implicit */int) (_Bool)0)))))))));
                                arr_42 [i_0] [(short)13] [i_7 + 2] [i_1] [i_7 + 2] = ((((/* implicit */_Bool) (signed char)-56)) ? (min((((/* implicit */unsigned long long int) 4051699378U)), (9981236028327047033ULL))) : (((/* implicit */unsigned long long int) 3152994398U)));
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_10 - 3] [i_0])) ? (arr_31 [i_7 - 1] [i_10 - 3] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) >> ((((-(arr_31 [i_7 - 1] [i_10 - 3] [i_7 - 1]))) - (2513854652U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 15; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 16; i_13 += 2) 
                        {
                            {
                                arr_48 [i_0] [i_0] [(signed char)12] [i_12] [i_13 - 3] [i_1] [i_1] = (((-(arr_40 [i_0] [i_1] [i_13 - 1] [i_13 + 1]))) / (((((/* implicit */_Bool) arr_1 [i_12 + 2] [i_7 + 1])) ? (arr_40 [i_1] [i_7 + 2] [i_13 - 2] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_7] [i_1] [8ULL] [i_7 - 1] [i_7 + 1]))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_13] [i_1] [i_7]))))) ? (((/* implicit */long long int) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */long long int) 4051699364U)) / (6624038971180996938LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_37 [(unsigned char)6] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_41 [i_0] [i_1] [(unsigned short)7] [i_7] [i_12] [16LL]))))) ? (max((((/* implicit */unsigned long long int) 8760213129362970681LL)), (9981236028327047046ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_13] [i_12] [i_7] [i_0])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 1])))))));
                                var_22 ^= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) * (((unsigned int) arr_29 [i_0] [i_0]))))));
                                arr_49 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) arr_39 [i_13] [i_1] [i_13 + 1] [i_13 - 1] [i_13] [i_13 + 1])) + (((/* implicit */int) arr_38 [i_12 + 2] [i_12 + 1] [i_12] [i_12])))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        for (long long int i_15 = 2; i_15 < 14; i_15 += 2) 
                        {
                            {
                                arr_56 [i_15] [i_15] [i_1] [(unsigned short)10] = ((/* implicit */unsigned char) (((~(((/* implicit */int) max((((/* implicit */short) arr_12 [i_0] [i_0] [3ULL])), (var_1)))))) <= (((/* implicit */int) min((arr_39 [(unsigned short)4] [i_1] [(unsigned char)8] [i_14 - 2] [i_14 - 1] [i_14 - 3]), (arr_39 [i_14] [i_1] [i_14] [i_14 - 3] [i_14 - 1] [i_14 + 1]))))));
                                arr_57 [i_1] [i_1] [i_7 + 1] [i_14 - 1] [i_14] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [14U])) ^ (((/* implicit */int) var_3)))) >> (((/* implicit */int) arr_16 [i_7 - 1]))))) ? ((-((-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))) : (((/* implicit */int) ((unsigned short) ((var_2) >> (((var_8) - (4716037420729698988LL)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
