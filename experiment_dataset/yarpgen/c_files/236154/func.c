/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236154
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (~(-1356065058522978279LL))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (4398028719018645966LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_12)) - (103)))))));
                    arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(4398028719018645966LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_1] [i_3] [i_4 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28672)))))));
                                arr_13 [i_3] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_0] [i_4]))))) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_4 + 1])) : ((~(-4398028719018645966LL))))));
                                var_21 = ((/* implicit */long long int) min((((((/* implicit */int) arr_11 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_2 + 1] [i_2])) != (((/* implicit */int) arr_11 [i_2 - 4] [i_2 - 4] [i_2] [i_2] [i_2] [i_2])))), (((_Bool) -4398028719018645973LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_0] [i_0] [i_5] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_7 [i_6] [i_5] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_10 [i_6] [i_5] [i_5] [i_0])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 3218966466U))))))) : (((/* implicit */int) ((arr_10 [i_0] [i_5] [i_6] [i_0]) >= (arr_10 [i_6] [i_5] [i_0] [i_0]))))));
                    var_22 *= ((/* implicit */unsigned int) (!((_Bool)1)));
                    var_23 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) -919940598)) ? (510958160) : (((/* implicit */int) (unsigned short)65535)))) ^ (((((/* implicit */_Bool) arr_15 [i_0] [i_5] [(unsigned short)16])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [(unsigned short)4])) ? (((/* implicit */unsigned int) arr_19 [i_0] [i_5] [i_0] [i_0])) : (var_5)))) ? ((-(3368786335U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || ((_Bool)0))))))) - (926180950U)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                    {
                        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7] [i_8 - 1])) ? (arr_24 [i_7] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((63U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (arr_28 [i_7]) : (((/* implicit */long long int) ((2147483647) & (((/* implicit */int) (unsigned short)37161))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_33 [i_7] [i_7] [i_10] [i_7] [i_11] [i_11] = (!(((/* implicit */_Bool) arr_30 [i_7] [i_7])));
                            arr_34 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921504606842880LL)) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : ((-2147483647 - 1))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) (unsigned short)44688)) : (((/* implicit */int) (unsigned short)0))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_38 [i_10] [i_10] [i_10] [i_10] [i_7] = ((/* implicit */unsigned short) arr_22 [i_7]);
                            arr_39 [i_7] [i_12] [i_10] [i_7] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_7] [i_7]))));
                            var_26 += ((/* implicit */unsigned char) ((((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_12] [i_8] [i_9] [i_12] [i_12]))))) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) arr_32 [i_7] [i_7] [i_12] [i_8 + 1] [i_9 + 2]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_12] [i_8] [i_7] [i_10] [i_12]))))) ? (((((/* implicit */_Bool) (short)32766)) ? (arr_28 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_8] [i_8]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_12] [i_10] [i_9 - 1] [i_8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_11))))));
                            arr_40 [i_7] [i_7] [i_7] [i_10] [i_12] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_26 [i_7] [i_10] [i_10]))));
                        }
                        var_28 += ((/* implicit */short) arr_29 [i_7] [i_8] [i_9] [i_9] [i_9] [i_10]);
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65512)))))));
                        var_30 *= ((/* implicit */unsigned short) ((unsigned int) (-(2147483630))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_14 = 1; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            var_31 += ((/* implicit */short) arr_47 [i_7] [i_9] [i_9] [i_14] [i_7]);
                            arr_49 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_6)))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7] [i_8] [i_9] [i_14] [i_8]))) ^ (((((/* implicit */_Bool) -2147483636)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) : (arr_47 [i_7] [i_7] [i_9 + 4] [i_14] [i_16])))));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_52 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(((/* implicit */int) (short)24)))))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_27 [i_14] [i_14] [i_14])) : (2147483637)));
                            arr_55 [i_7] [i_7] [i_17] = ((/* implicit */long long int) (_Bool)1);
                        }
                        var_36 = ((/* implicit */unsigned long long int) arr_25 [i_7]);
                        arr_56 [i_7] [i_7] [i_14] = ((/* implicit */short) 2152558203U);
                    }
                    for (signed char i_18 = 1; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_58 [i_7] [i_18] [i_8] [i_18 + 2])) / (var_10)));
                        arr_59 [i_7] [i_7] [i_7] = ((/* implicit */short) (~(arr_28 [i_7])));
                    }
                    var_38 += ((/* implicit */unsigned char) arr_52 [i_7] [i_8] [i_9 - 1] [i_8] [i_8] [i_7] [i_9]);
                }
            } 
        } 
        arr_60 [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (2319707903U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17465))))))));
    }
    var_39 += ((/* implicit */unsigned char) min((-1416204079), (((/* implicit */int) var_0))));
    var_40 += ((/* implicit */unsigned long long int) (-(4047025304U)));
    var_41 += ((/* implicit */long long int) var_8);
}
