/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22241
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
    var_10 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)29038)) + (((/* implicit */int) (unsigned char)219))))));
                    var_12 = ((/* implicit */unsigned short) ((signed char) (short)(-32767 - 1)));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned long long int) (unsigned char)34);
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((arr_3 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (unsigned char)37)) : ((-(((((/* implicit */int) (short)-32767)) % (((/* implicit */int) (short)-32766))))))));
        var_15 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned int) (-(6389224101817385125ULL)));
        var_17 = ((/* implicit */long long int) (unsigned short)45863);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 12; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-32764))) ? (arr_10 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) var_0))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_8] [(unsigned short)2] [i_8] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [i_8] [i_8 - 1] [i_4] [i_8 + 1]))) : (arr_19 [i_8] [i_8] [i_8] [i_8 + 1] [i_8])));
                                arr_26 [i_8] [i_4] [i_6] [i_5] [i_5 - 1] [i_4] [6ULL] = ((unsigned int) ((unsigned int) var_4));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32748)) ? (arr_24 [1U] [i_4] [i_7 + 2] [10LL] [i_7 + 2] [i_4] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_5 + 1] [i_7] [i_8 - 1] [i_8 - 1])))));
                                arr_27 [i_4] [(short)12] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)23);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_9 = 3; i_9 < 9; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) arr_21 [i_4] [i_4])) : (((/* implicit */int) (unsigned char)22)))));
                        var_22 ^= ((/* implicit */unsigned int) var_1);
                        arr_30 [(short)8] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) var_7));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) 16934829167334817829ULL)))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) 1619479826444986710LL))));
                    }
                    for (long long int i_11 = 3; i_11 < 12; i_11 += 1) 
                    {
                        arr_36 [i_4] [i_4] [i_4] [i_11] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_5 + 1] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (arr_31 [i_4] [i_5] [i_6] [i_11] [i_4])))) : ((~(1511914906374733814ULL)))));
                        arr_37 [10U] [11LL] [11LL] [i_4] = ((/* implicit */unsigned char) ((long long int) var_5));
                        var_26 = ((/* implicit */unsigned char) ((short) ((arr_31 [i_4] [5LL] [5LL] [5LL] [i_4]) / (var_4))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_24 [i_4] [i_4] [(unsigned char)4] [i_4] [i_4] [8ULL] [6LL]))));
    }
    for (long long int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((unsigned int) arr_35 [i_12] [i_12] [(signed char)2] [i_12] [i_12] [i_12])))) - ((-(((/* implicit */int) (signed char)10))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 1) 
            {
                {
                    var_29 = ((/* implicit */long long int) arr_10 [i_12]);
                    arr_47 [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_12])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) & (-7302012726964894065LL))) : (((/* implicit */long long int) 1097039938U))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            {
                                arr_54 [i_12] [i_13] [i_14 - 3] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 58720256U)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_24 [i_16] [i_12] [i_16] [(unsigned char)3] [i_13 - 2] [i_12] [i_13 - 2])))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_14] [i_14 - 2] [i_13 - 1] [i_13 - 1]))) : (arr_24 [i_16] [i_12] [i_15] [i_15] [i_14 - 2] [i_12] [i_13 + 2]))) : (((/* implicit */unsigned long long int) arr_52 [i_13 - 1] [9U] [9U]))));
                                var_30 = ((/* implicit */unsigned short) var_1);
                                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */unsigned long long int) (~(13510798882111488LL)))) ^ (((unsigned long long int) (signed char)-31))))));
                            }
                        } 
                    } 
                    arr_55 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_6);
                    var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_35 [i_13] [(unsigned short)0] [i_13] [i_13] [(unsigned short)0] [i_12]) & (arr_35 [i_12] [i_12] [i_13] [i_13 - 2] [2U] [i_12])))) / (((((/* implicit */_Bool) arr_35 [i_12] [i_12] [i_12] [i_12] [2U] [i_12])) ? (var_6) : (var_4)))));
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32760))));
    }
}
