/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29181
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned int) arr_1 [i_0]);
                        arr_9 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_1 + 3] [(short)8])) ? (arr_8 [i_3]) : (0LL))), (((/* implicit */long long int) var_16))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_0] [i_0]))))), (((long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 879168045))))))))) : (((3083760224829828090LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [9ULL] [i_0] [9ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [(short)1]))))))))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_0 [i_0]))));
                        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_0])), ((((-(var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    }
                }
                for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    var_24 ^= arr_8 [(short)14];
                    arr_14 [i_0] [i_0] [(unsigned char)8] [i_5] = ((/* implicit */signed char) 2147483639);
                    arr_15 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_13)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483639)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192)))))) ? (2147483610) : (-879168046)))));
                }
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    var_25 *= ((/* implicit */unsigned long long int) arr_6 [(short)10] [i_1 - 2] [(short)12]);
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */short) arr_3 [i_1 - 2] [i_6 - 1]);
                        arr_21 [12ULL] [3U] [i_0] = ((/* implicit */unsigned char) -2147483639);
                        var_27 = ((/* implicit */short) ((_Bool) (short)8164));
                        var_28 = (((!(arr_10 [i_0] [6LL] [i_1 + 1] [i_6 + 2] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_6] [i_7] [i_7]))) : (((unsigned long long int) (unsigned char)168)));
                    }
                    arr_22 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((int) (signed char)-109));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_8)));
                    /* LoopNest 2 */
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        for (int i_9 = 2; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_19 [i_6] [i_6])))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6] [i_8 - 1] [i_8] [i_9])))))))))));
                                var_31 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_1))))));
                                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) arr_3 [i_6 - 1] [i_1 - 2])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    for (short i_11 = 3; i_11 < 14; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_33 = (-(max((5129334), (879168046))));
                                arr_36 [i_0] = ((/* implicit */unsigned char) arr_17 [i_0] [i_11] [i_10]);
                                var_34 = ((/* implicit */unsigned int) var_5);
                                arr_37 [i_0] [6LL] [i_11] [i_11 - 2] [(short)4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (min((((/* implicit */unsigned long long int) arr_27 [i_10] [i_0] [i_10] [i_0] [i_0])), (var_7))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15384)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1052565306U)))), ((-(6766206177340952287ULL)))))));
                            }
                        } 
                    } 
                } 
                var_35 = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) && (((/* implicit */_Bool) var_14))));
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -6200273916042182897LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8192))) : (16922654097522925002ULL))) / (((/* implicit */unsigned long long int) var_17))));
    var_37 = ((/* implicit */unsigned long long int) var_8);
}
