/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28504
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
    var_11 *= (~(var_8));
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) (-(min((var_8), (((/* implicit */unsigned long long int) (~(var_5))))))));
        var_14 = ((/* implicit */unsigned long long int) ((int) 0LL));
        var_15 += ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) min((((unsigned short) arr_0 [i_0] [i_0])), (((/* implicit */unsigned short) arr_0 [7] [i_0]))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((long long int) var_6)))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_1])), (((var_5) - (((/* implicit */int) (signed char)20))))))), ((+(var_9)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(2LL)));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) var_5);
                            arr_13 [i_1] [0LL] [i_1] [i_4] [0LL] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_3]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((min((arr_10 [12] [i_2 - 3] [i_2 - 3]), (((/* implicit */unsigned long long int) 4294967278U)))) << (((((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_1] [i_2 - 3] [(signed char)3]))) - (65ULL))))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-70))))), (((((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6]))) : (var_8))))))))));
                        }
                        arr_17 [i_1] [i_2 + 2] [(signed char)8] [i_4] [(signed char)8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_7 [i_2] [6] [i_4])))))))), (min((((unsigned int) arr_3 [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7844670803891947684ULL)) ? (((/* implicit */int) (short)8800)) : (((/* implicit */int) (unsigned char)72)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) (short)9047))) <= (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (12082058572026477516ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                            var_22 ^= var_6;
                            var_23 ^= ((/* implicit */int) ((unsigned char) arr_10 [i_7 + 1] [i_8] [i_8]));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 9223372036854775807LL))));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_3]);
                        arr_23 [10ULL] [11ULL] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -67108864)) ? (((/* implicit */long long int) arr_3 [i_7 - 2])) : (((var_2) - (((/* implicit */long long int) ((/* implicit */int) (short)-30698)))))));
                        arr_24 [i_2] = ((/* implicit */long long int) (!(arr_18 [i_2 - 1])));
                    }
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), ((~(-4250537973669090103LL)))))) ? (min((((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17475))) : (arr_25 [i_9] [i_2] [12LL]))), (((/* implicit */unsigned long long int) ((long long int) var_3))))) : (((unsigned long long int) (unsigned short)10921))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) arr_7 [0ULL] [i_10] [i_10]);
                            var_27 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_9 - 1] [i_2])) - (((/* implicit */int) var_4)))))) - ((+(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3]))))));
                            var_28 = ((/* implicit */unsigned char) (-(max((var_9), (((/* implicit */long long int) (_Bool)1))))));
                        }
                        arr_29 [i_1] [i_9] [i_9 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) (~(-1382207670)))) : ((+(3878630388U)))));
                        var_29 = ((/* implicit */int) var_4);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_0))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_31 [i_12 + 1] [i_2 - 1] [10ULL] [i_2 - 1] [i_1]) : (((/* implicit */long long int) var_5))));
                            var_32 ^= ((/* implicit */int) arr_3 [i_12]);
                            arr_37 [i_1] [i_1] [i_1] [i_12] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (arr_34 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]) : (arr_34 [i_12] [i_3] [i_12] [i_3] [i_12 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_31 [i_11] [i_11] [i_11] [i_12] [i_12 + 1])) != (arr_34 [i_12] [i_3] [i_11] [i_11] [i_12 - 1]))))));
                        }
                        var_33 -= ((/* implicit */unsigned long long int) (~(arr_35 [i_1] [i_2] [i_2])));
                    }
                }
            } 
        } 
        arr_38 [i_1] = min((min((((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (((3961191962210403275LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37055))))))), (((((/* implicit */_Bool) (~(4294967295U)))) ? (var_2) : (((long long int) var_7)))));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 23; i_13 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) (unsigned short)61645);
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            for (signed char i_15 = 3; i_15 < 20; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 1; i_16 < 22; i_16 += 2) 
                    {
                        arr_48 [i_16] = ((/* implicit */short) var_5);
                        var_35 = ((/* implicit */signed char) (-(arr_43 [i_16])));
                        var_36 *= ((/* implicit */_Bool) var_4);
                        /* LoopSeq 3 */
                        for (unsigned int i_17 = 2; i_17 < 19; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned char) arr_46 [i_16] [i_16] [i_16]);
                            var_38 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                            var_39 = ((/* implicit */unsigned int) ((arr_47 [i_13]) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_17] [i_16] [i_16] [i_16] [i_14] [i_13]))) : (arr_47 [(short)2])))));
                            arr_52 [i_13] [i_16] [19LL] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8969620584383722677LL)) ? (((((/* implicit */_Bool) arr_51 [i_16] [i_15] [(unsigned short)0])) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_16] [i_15] [i_16]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_0)))))));
                            arr_53 [i_13] [i_16] [i_15] [i_16] [i_15] [i_13] [i_15] = ((/* implicit */int) var_3);
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            arr_58 [(_Bool)1] [i_16] = ((/* implicit */unsigned long long int) arr_54 [i_13] [i_14] [i_15 - 3] [i_16 - 1] [i_15 - 3]);
                            var_40 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (5813108162527250164ULL))) / ((-(8384483760596744268ULL)))));
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (+(arr_39 [i_13] [i_13]))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            arr_62 [10] &= ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_59 [i_15] [i_16])))) : (var_10));
                            var_42 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (short)-726)) : (((/* implicit */int) (short)(-32767 - 1)))))) >= (((long long int) arr_44 [22LL] [(_Bool)1] [(short)16] [i_16]))));
                            var_43 = ((/* implicit */long long int) (+(((/* implicit */int) arr_50 [14LL] [i_14] [i_15 - 2] [i_16 + 1] [i_19]))));
                            arr_63 [15LL] [i_14] [i_16] [i_16] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_15] [i_15 + 3] [i_16 - 1])) && (((/* implicit */_Bool) arr_42 [i_13] [i_15 - 1] [i_16 - 1]))));
                        }
                    }
                    var_44 = ((/* implicit */_Bool) 14925834927653303786ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_20 = 0; i_20 < 21; i_20 += 3) 
    {
        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((unsigned long long int) ((long long int) arr_59 [i_20] [i_20]))))));
        arr_67 [i_20] [i_20] = ((/* implicit */unsigned char) var_1);
        /* LoopSeq 1 */
        for (unsigned short i_21 = 1; i_21 < 20; i_21 += 2) 
        {
            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_40 [i_20] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_41 [i_20] [i_20] [i_21])) != (-1LL)))))));
            var_47 = ((/* implicit */unsigned char) (~(((unsigned int) 9498898597800117209ULL))));
            var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_21])) ? (((/* implicit */unsigned long long int) arr_40 [i_20] [i_20])) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_71 [i_20] [(unsigned short)13]))))))));
        }
    }
    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)17)) >= (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */long long int) (-(1451776681)))) + ((+(var_2)))))));
}
