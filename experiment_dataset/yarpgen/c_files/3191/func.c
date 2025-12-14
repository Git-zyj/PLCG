/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3191
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_6)))) ? (((/* implicit */int) ((_Bool) var_4))) : ((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))), (min(((~(var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 184470785U)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) -581716055))))) / (((/* implicit */int) var_7))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) -3121231327819028564LL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)47064)) : (((/* implicit */int) (unsigned short)5843)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) < (-5473563369648927262LL)))))), (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
        var_12 *= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))) + (((/* implicit */int) (short)6101))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] = min(((-(((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2])))), (((/* implicit */int) (!(arr_2 [i_1 - 1] [i_1 + 1])))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_1 [(_Bool)1]))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2]))))) * (((((/* implicit */_Bool) arr_1 [(unsigned short)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [2U])))));
        var_14 = ((/* implicit */long long int) arr_4 [i_1] [i_1 + 2]);
        var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2]))))));
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])))) * (((/* implicit */int) arr_4 [i_1 + 2] [(short)8]))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) + (((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) (short)448)) - (448)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (min((var_1), (arr_7 [(unsigned char)4])))))));
        var_18 -= ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1])))))))) <= ((+(var_8)))));
        var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (0ULL)));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = var_2;
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 7; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_4] [(signed char)7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)7335)) : (((/* implicit */int) (unsigned short)511))));
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [12] [12])) : (((/* implicit */int) arr_4 [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_14 [6LL] [i_5] [i_6] [i_5] [i_5] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_6 - 1])))))))))) : (arr_10 [i_2] [i_5] [i_4])));
                                arr_21 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)65017)))))))));
                                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((int) 280707318U))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)6))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 8; i_7 += 4) 
                    {
                        for (int i_8 = 3; i_8 < 9; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned char) ((_Bool) var_3)))));
                                arr_27 [i_4] [(short)9] [i_4] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28138)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (unsigned short)20))));
                                arr_28 [i_2] [i_2] [i_4] [i_4] [(signed char)6] [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                                var_24 = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1] [i_4])) && (((/* implicit */_Bool) min((arr_19 [8] [i_3] [i_4] [3ULL] [i_8]), (((/* implicit */short) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        for (long long int i_10 = 3; i_10 < 24; i_10 += 4) 
        {
            {
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)21)) | ((+(((/* implicit */int) arr_29 [i_9] [i_9])))))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 3; i_11 < 24; i_11 += 3) 
                {
                    var_27 = ((/* implicit */signed char) max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) (short)-32748)))));
                    var_29 ^= ((/* implicit */signed char) arr_34 [(short)20] [i_10] [(short)20] [i_10]);
                    arr_36 [(short)2] [i_10] [i_11] |= ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) ((((/* implicit */long long int) var_1)) < (arr_32 [i_11]))))))));
                }
            }
        } 
    } 
}
