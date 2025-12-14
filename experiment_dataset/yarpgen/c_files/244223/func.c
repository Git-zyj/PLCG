/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244223
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_3))))), (min((var_0), (((/* implicit */long long int) var_2))))))) ? (min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (((var_0) % (((/* implicit */long long int) ((/* implicit */int) (short)-3197)))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            var_11 = ((/* implicit */long long int) min((min((arr_5 [i_0] [i_2] [i_2 - 2]), (arr_5 [i_2] [i_2 - 2] [i_2 - 2]))), (min((min((((/* implicit */unsigned short) arr_4 [7] [i_2] [7])), (arr_1 [i_0]))), (var_4)))));
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                var_12 ^= var_1;
                arr_12 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_3 - 2] [i_3 - 2])) ? (arr_3 [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_3])) <= (((/* implicit */int) var_6)))))))))));
            }
            var_13 = ((/* implicit */long long int) arr_0 [i_0]);
        }
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0] [i_0]), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0])))))) != (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])), (var_5))))) ? (arr_7 [i_0] [(unsigned char)1] [(unsigned char)15]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_15 = (+(((/* implicit */int) arr_11 [4ULL] [4ULL] [i_4] [i_4])));
        var_16 = ((/* implicit */unsigned int) arr_10 [i_4] [i_4]);
        arr_15 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4])))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (var_2) : (((/* implicit */int) max(((unsigned short)14), ((unsigned short)14)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_18 = arr_17 [i_5];
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)14)) || (((/* implicit */_Bool) (unsigned short)65531)))) ? (min((((/* implicit */int) min(((unsigned short)14), (((/* implicit */unsigned short) arr_16 [i_5]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_17 [i_8])))))) : ((~(((/* implicit */int) (unsigned short)15018))))));
                        arr_27 [i_8] = ((/* implicit */unsigned int) (+(((((((/* implicit */int) min((var_6), (var_6)))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_5])), ((unsigned short)17491)))) - (17491)))))));
                    }
                } 
            } 
            arr_28 [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)28)), (((((/* implicit */_Bool) arr_20 [i_5] [i_6] [0LL])) ? ((+(arr_24 [i_5]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
            var_20 = ((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [(unsigned char)2] [i_5]);
        }
        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 1) 
        {
            var_21 ^= ((/* implicit */_Bool) (+(min(((~(arr_24 [i_9]))), (((/* implicit */long long int) arr_21 [i_9 - 2] [i_9]))))));
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 21; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    {
                        arr_35 [i_5] [i_10] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_3)))))))));
                        var_22 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (12U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)14))) ? (((/* implicit */int) (unsigned short)50494)) : (381449444))))));
                        arr_36 [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_5]))))) + (arr_32 [i_9 - 3] [i_9] [i_9] [i_9]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_5] [i_10] [i_10 - 2])))))));
                        arr_37 [i_10] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_31 [i_10 - 2] [i_10] [(signed char)18])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10 - 1] [i_10] [i_10 + 2]))) : (min((12U), (((/* implicit */unsigned int) (unsigned short)8128))))));
                    }
                } 
            } 
        }
        for (int i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            arr_40 [i_5] [i_5] = ((/* implicit */unsigned char) arr_22 [i_5] [i_5] [i_5]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) max((arr_43 [i_5]), (((/* implicit */unsigned int) arr_33 [i_12] [i_15] [i_15]))))), (max((-6455086721529884955LL), (((/* implicit */long long int) arr_45 [i_5] [i_5] [i_5])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_17 [i_15])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_25 [i_12] [i_13] [i_14] [i_15])))))));
                            var_24 = ((/* implicit */int) var_9);
                        }
                        arr_49 [i_5] [i_14] = ((((12U) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((381449437) != (((/* implicit */int) (short)4065)))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((1486279419U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_12] [i_12] [i_12])))))) != ((+(((/* implicit */int) var_6)))))) ? ((+(((/* implicit */int) arr_33 [i_5] [i_12] [i_12])))) : ((~(((/* implicit */int) var_8))))));
            arr_50 [i_5] [i_5] [i_12] = min((((((/* implicit */_Bool) min(((unsigned short)0), (arr_31 [i_5] [i_12] [i_5])))) ? ((-(4591386523795364433ULL))) : (((/* implicit */unsigned long long int) arr_39 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5] [i_12]))))) ? (max((((/* implicit */long long int) 2142858414U)), (-9223372036854775778LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_5] [i_12] [i_12])) != (arr_45 [i_5] [(unsigned char)18] [i_5])))))))));
        }
    }
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
    {
        arr_53 [(short)4] |= ((/* implicit */signed char) arr_51 [i_16] [i_16]);
        var_26 = arr_22 [i_16] [i_16] [i_16];
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_21 = 1; i_21 < 22; i_21 += 2) 
                        {
                            arr_67 [i_17] [i_18] [i_18] [i_20] [i_20] [10U] = ((/* implicit */short) arr_65 [i_21 + 2] [(signed char)13] [i_21 + 2] [i_18] [i_21]);
                            arr_68 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_17] [i_18] [i_18] [i_17])) ? (((/* implicit */unsigned long long int) arr_57 [(signed char)14])) : (var_5)))) ? (((/* implicit */int) arr_61 [i_17] [i_17] [i_17] [i_17])) : (((((/* implicit */_Bool) (short)-3192)) ? (((/* implicit */int) (short)-3197)) : (((/* implicit */int) (unsigned char)249))))));
                        }
                        for (signed char i_22 = 2; i_22 < 22; i_22 += 1) 
                        {
                            arr_72 [i_17] [i_18] [i_19] [i_18] = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)40005));
                            arr_73 [i_17] [i_17] [i_18] [i_18] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_66 [i_17] [16U] [i_22 + 1] [(_Bool)1] [i_22 + 1] [i_22 + 2])) < (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_17] [i_19] [i_18] [i_22]))) : (344770770U)))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_63 [i_18] [i_19] [i_20] [i_22]))));
                            var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_70 [i_17] [i_18] [i_19] [15ULL] [i_19]))) ? (((/* implicit */int) arr_55 [i_22 - 1])) : (((/* implicit */int) arr_63 [i_17] [i_18] [i_20] [(unsigned short)10]))));
                        }
                        for (signed char i_23 = 2; i_23 < 20; i_23 += 4) 
                        {
                            arr_76 [i_17] [i_18] [i_19] [i_18] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_66 [i_23 + 1] [i_23 + 1] [i_23 + 4] [i_23 + 1] [i_23 + 4] [i_23 - 1]))));
                            var_29 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_55 [i_17]))));
                            var_30 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_58 [i_17] [i_17] [i_18] [i_18]))))));
                            var_31 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) 1U)) : (((((/* implicit */long long int) ((/* implicit */int) arr_71 [i_18] [i_19] [i_20]))) | (arr_75 [i_23] [i_23] [i_18] [i_19] [i_19] [i_20] [i_23])))));
                        }
                        arr_77 [i_18] [i_17] [i_18] [i_18] [i_19] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_19])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))))) ? (arr_66 [i_17] [i_17] [i_17] [i_17] [(unsigned short)16] [i_17]) : (((((/* implicit */_Bool) -2812250676772084756LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)40005))))));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_55 [i_17]))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_17] [i_17] [i_18] [i_17])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_19] [i_19] [i_19]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                } 
            } 
        } 
        var_34 = arr_60 [(unsigned short)14];
    }
    var_35 = ((/* implicit */unsigned short) (!(((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
}
