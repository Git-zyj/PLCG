/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222604
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) + ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(max(((-(((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((short) arr_4 [i_1] [i_1]));
        arr_8 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)64906)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (var_11)))));
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)(-32767 - 1)))) && (((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_15)), (886615668641150083ULL))))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            var_17 = ((int) (short)-16948);
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_22 [i_2] [(signed char)14] [i_2] [i_6] |= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)0)) < (max((arr_13 [i_3]), (((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) (short)21865)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26552))) : (3LL)))));
                            var_18 = ((/* implicit */signed char) (-(min((((/* implicit */int) max(((unsigned short)25538), (((/* implicit */unsigned short) var_1))))), (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [4ULL]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_32 [i_2] [i_3] [(signed char)7] [i_3] [i_2] [1ULL] [9ULL] = (-(16301878682467651347ULL));
                            arr_33 [i_2] [i_3] [i_7] [i_8] [i_9] = ((/* implicit */unsigned long long int) (short)960);
                        }
                        var_19 &= ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_2] [i_8 + 2] [i_3 + 2] [i_2]))))) & (((((((/* implicit */_Bool) -1426324699)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12831))) : ((-9223372036854775807LL - 1LL)))) % (((/* implicit */long long int) (-(((/* implicit */int) (short)-22802)))))))));
                        arr_34 [i_2] [i_3] = min((((/* implicit */unsigned long long int) -1738900772)), (0ULL));
                        var_20 *= ((/* implicit */short) (+(arr_19 [i_2] [i_2] [i_2] [i_7] [i_7] [i_7] [i_7])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_10 = 3; i_10 < 18; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (arr_13 [i_3 + 2]) : (((((/* implicit */_Bool) arr_24 [i_2] [i_3] [i_10] [i_11])) ? (1830185197) : (((/* implicit */int) (unsigned char)134))))))) ? (max((((((/* implicit */_Bool) 140737488338944ULL)) ? (((/* implicit */int) var_12)) : (arr_13 [(short)5]))), (((((/* implicit */int) var_2)) - (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-21681)), (5570112103389106525ULL)))) && (((((/* implicit */int) arr_1 [i_3])) == (((/* implicit */int) (short)(-32767 - 1))))))))));
                        arr_41 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) max(((+(max((((/* implicit */int) arr_11 [i_3] [i_2])), (-1977988900))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 205892830183669422LL))))))));
                    }
                } 
            } 
        }
        for (short i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            arr_45 [i_12] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_31 [i_12] [i_12] [(short)7] [i_2] [i_12] [i_2])) : (((/* implicit */int) arr_31 [i_2] [i_12] [i_2] [i_12] [7ULL] [i_12])))) + (((((/* implicit */_Bool) arr_16 [i_12])) ? (((/* implicit */int) arr_16 [i_12])) : (((/* implicit */int) arr_31 [i_2] [i_12] [i_12] [i_12] [i_12] [i_12]))))));
            arr_46 [i_12] [11] [i_12] = var_15;
        }
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 2) 
    {
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (arr_47 [8ULL] [8ULL])));
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_48 [18]))));
        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) arr_48 [(signed char)10]))));
        /* LoopNest 2 */
        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 1) 
        {
            for (int i_15 = 4; i_15 < 18; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 19; i_16 += 4) 
                    {
                        for (short i_17 = 3; i_17 < 18; i_17 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_16 + 2] [i_16] [i_16 + 3] [i_13])) ? (((/* implicit */unsigned long long int) arr_59 [i_16 + 1] [19] [i_16 + 3] [i_16 - 1] [i_16] [i_16 + 3] [i_16])) : (arr_57 [i_16 + 3] [i_16] [i_16 + 2] [i_13])));
                                var_26 = ((/* implicit */long long int) (short)-17135);
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_13] [i_16] [i_15] [i_13]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3864))) > (arr_59 [i_13] [(unsigned short)14] [i_16] [i_13] [i_13] [i_13] [i_13]))))));
                                arr_60 [i_13] [i_15 + 3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    arr_61 [i_13] [i_14 - 1] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((50331648) != (((/* implicit */int) var_13)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [i_15] [i_15] [i_15] [i_15 + 3] [(unsigned short)10] [i_15] [i_15 + 2])) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (signed char)52))));
                                arr_68 [i_13] [i_13] [i_15] [i_15 + 3] [i_13] [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_13 + 2] [i_14 - 1] [i_14] [(unsigned short)5] [i_18] [i_13] [i_13])) ? (arr_66 [i_13 + 2] [i_13] [i_13] [i_13] [(unsigned char)5] [i_13] [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)19394)))))) || (((/* implicit */_Bool) arr_66 [i_15 - 1] [i_15 + 4] [i_14 + 1] [i_18] [i_19] [i_13] [i_13 - 1]))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_19] [i_13] [i_15] [(signed char)3] [i_14 - 1] [i_13] [(signed char)13])) ? (((/* implicit */int) (unsigned short)60992)) : ((-(((/* implicit */int) (unsigned short)65535))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_69 [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_62 [(unsigned short)13] [i_13] [(unsigned short)13] [i_13]))))));
    }
}
