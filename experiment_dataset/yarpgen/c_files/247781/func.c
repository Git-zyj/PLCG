/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247781
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_11 = var_5;
        arr_2 [i_0] = ((/* implicit */unsigned char) 1212635096U);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_12 *= ((((/* implicit */_Bool) ((((((/* implicit */int) (short)3597)) < (((/* implicit */int) (unsigned short)31778)))) ? (((int) arr_0 [i_1])) : (((/* implicit */int) arr_3 [(unsigned char)7]))))) && (((/* implicit */_Bool) (unsigned char)123)));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_4 = 4; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) (+(var_1)));
                        arr_14 [i_3] = ((unsigned short) (~(-1026926542)));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_4 - 2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (arr_8 [i_4 - 2] [i_4 - 4] [i_4 - 2] [i_4 - 2])));
                    }
                    for (long long int i_5 = 4; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_17 [(signed char)11] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((max((((int) var_10)), ((+(var_4))))) <= (((/* implicit */int) (signed char)-104))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5 - 2] [i_5 - 1] [i_5 - 3])) ? (arr_8 [i_5 - 4] [i_5 - 3] [i_5 - 4] [i_5 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(signed char)10] [i_5 - 1] [i_5] [i_5 + 1])))))) ? (((/* implicit */unsigned long long int) (~(235689042U)))) : ((~(6108868749767182633ULL)))));
                        var_16 = ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_0 [i_1])))))))) & (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (unsigned short)31794)) ? (((/* implicit */unsigned long long int) var_0)) : (var_1))))));
                    }
                    arr_18 [i_1] [i_2] [i_3] = var_10;
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_23 [i_1] [i_2] [(_Bool)1] [i_6] [i_2]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7])))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-109)), (var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) arr_19 [i_2] [i_3] [i_6] [i_6])) : (arr_4 [i_3])))) : ((~(max((((/* implicit */long long int) var_5)), (9223372036854775803LL)))))));
                                arr_25 [i_1] [i_2] [i_3] [(unsigned short)3] [4U] = ((/* implicit */_Bool) max((8014756177931182288ULL), (((/* implicit */unsigned long long int) (unsigned char)228))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */signed char) (short)-13999);
                                var_18 *= ((/* implicit */unsigned char) (unsigned short)48446);
                                arr_32 [i_1] [i_2] [i_3] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-117)), (412632834U)))) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)120))))))) << (((((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_9] [i_9] [i_9 + 1] [i_8] [i_8])), ((unsigned char)237)))) - (194)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))), (min((var_10), (((/* implicit */unsigned short) (unsigned char)253))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (3677199587U) : (((/* implicit */unsigned int) 657778914))))), (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))))));
        arr_33 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_30 [(unsigned char)10] [i_1] [(unsigned short)4] [i_1] [i_1])) ? (arr_30 [i_1] [(_Bool)1] [(_Bool)1] [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_1]))))));
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (unsigned char)124)) ? (((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((((((/* implicit */int) (signed char)-121)) + (150))) - (29))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) arr_3 [i_1])))))))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    {
                        var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [(short)4] [(short)7] [i_12] [i_13]))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 8120955460584986481ULL))));
                        arr_43 [(short)4] [i_10] [(short)4] [i_10] = ((/* implicit */signed char) (~(var_0)));
                        arr_44 [i_12] [i_11] [i_11] [i_10] [i_10] [i_12] = ((/* implicit */signed char) ((var_4) - (((/* implicit */int) arr_21 [i_10] [i_13]))));
                        var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_10] [i_10])))))));
        var_25 ^= ((/* implicit */long long int) (!(((var_4) < (((/* implicit */int) arr_38 [i_10] [11U]))))));
        arr_45 [i_10] = ((/* implicit */_Bool) arr_3 [i_10]);
    }
    var_26 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_4)), ((+(var_8))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)135)))))))));
}
