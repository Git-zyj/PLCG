/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241125
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
    var_10 = (unsigned char)148;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (var_0)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4))))) ? (3ULL) : (((/* implicit */unsigned long long int) var_8))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] |= ((/* implicit */unsigned char) arr_1 [i_1]);
            var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 12LL))))))) : (((/* implicit */int) min((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))))))));
            arr_6 [i_0] [(signed char)15] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) (short)549)) : (((((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [(_Bool)1] [i_0]) : (((/* implicit */int) (unsigned char)128)))) - (((/* implicit */int) (signed char)-17))))));
            arr_7 [10] &= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14784))) : (8388607LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_6)))))) : (10395491278261487174ULL))));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_14 [i_0] [i_2] [(signed char)7] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                        var_13 = ((/* implicit */int) arr_1 [i_3 + 2]);
                    }
                } 
            } 
            arr_15 [i_0] [i_2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) min((669250898U), (((/* implicit */unsigned int) var_0))))) ? (min((arr_8 [i_2] [i_2] [15LL]), (8746289017934192332ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))))));
            arr_16 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((-536870912) + (536870930)))))), (-4809166526339801404LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [20] [i_2] [i_2]))))) << (((4228329672U) - (4228329647U)))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_2]))))), (arr_8 [15LL] [13ULL] [(signed char)6]))));
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) (unsigned short)65535)) / ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned char)89))));
        }
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) (~((-((~(((/* implicit */int) var_4))))))));
                            arr_26 [(_Bool)1] [i_7] [i_7] [i_5] [i_6] [i_5] [i_0] = ((((/* implicit */_Bool) arr_20 [i_8] [6ULL] [i_6] [2ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_23 [i_7] [(_Bool)1] [i_5] [(_Bool)1])))))))) : (max((max((((/* implicit */unsigned long long int) arr_13 [i_5])), (13ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14784)) >= (((/* implicit */int) arr_9 [i_0] [i_0]))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            arr_29 [i_5] [i_5] [i_5] [(unsigned short)11] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_5] [15U]))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((max((((/* implicit */int) arr_12 [i_7] [i_6] [i_5] [i_0])), (max((((/* implicit */int) (unsigned short)7)), (-712702332))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned short)7] [i_5] [i_6] [i_7])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517))))))))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_17 &= ((/* implicit */unsigned char) arr_18 [(short)6] [18LL]);
                            arr_33 [i_0] [i_5] [i_6] [i_6] [i_10] [i_5] = ((/* implicit */_Bool) var_0);
                        }
                        var_18 = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(short)18] [(short)3] [i_5])) ? (var_3) : (((/* implicit */long long int) arr_25 [i_0] [i_6] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_5] [i_5] [i_6] [(short)21] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [6ULL]))) : (arr_23 [i_0] [i_0] [i_5] [(signed char)11])))) < (((var_2) >> (((((/* implicit */int) arr_19 [i_5])) - (64))))))))) : ((-((-(var_2)))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(short)18] [(short)3] [i_5])) ? (var_3) : (((/* implicit */long long int) arr_25 [i_0] [i_6] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_5] [i_5] [i_6] [(short)21] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [6ULL]))) : (arr_23 [i_0] [i_0] [i_5] [(signed char)11])))) < (((var_2) >> (((((((/* implicit */int) arr_19 [i_5])) - (64))) + (56))))))))) : ((-((-(var_2))))))));
                    }
                } 
            } 
            var_19 += ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)13]))))));
        }
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_11 [17ULL] [i_0] [(signed char)3] [i_0]), (((/* implicit */long long int) arr_9 [i_0] [i_0]))))) ? (((long long int) 983535043329251033ULL)) : (arr_11 [i_0] [i_0] [i_0] [0ULL])));
    }
    for (long long int i_11 = 2; i_11 < 10; i_11 += 3) 
    {
        arr_37 [6ULL] = ((/* implicit */unsigned char) max((arr_21 [(unsigned char)20] [i_11 - 1] [i_11 + 1] [i_11 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) arr_10 [i_11] [i_11 + 1] [i_11 - 2] [i_11 - 1])))))));
        arr_38 [(unsigned char)0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_35 [i_11 - 2])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */int) (_Bool)1)) >> (0ULL))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) var_1))))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_11 - 2] [i_11 - 1] [i_11 - 1])), (arr_21 [i_11 + 1] [21] [(unsigned char)2] [i_11 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) (unsigned char)177))))) ? (var_5) : (2219428939U)))));
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(unsigned char)8])) ? (((/* implicit */int) arr_18 [(_Bool)0] [i_13])) : (((/* implicit */int) arr_18 [i_11] [i_13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((short) arr_9 [i_11 - 1] [17]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_14])) < (((/* implicit */int) var_6)))))) : (arr_8 [i_11 - 1] [i_11 - 2] [i_11 - 2])))));
                        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_28 [i_11 + 1] [i_12])) > (((/* implicit */int) arr_28 [i_11 + 1] [i_11 + 1])))))));
                        arr_46 [i_11 + 1] |= ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11 - 2] [10ULL] [i_13] [i_13]))) - (arr_27 [(unsigned short)4] [i_11 - 1] [i_12] [i_12] [i_13] [(signed char)3])))), (((((/* implicit */unsigned long long int) var_3)) - (var_2))))) >> (((((2219428955U) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) 3682546091U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_11] [i_12]))))))));
                    }
                } 
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 13; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                {
                    arr_57 [i_15] [i_17] [(unsigned char)2] [(_Bool)1] &= ((/* implicit */signed char) var_2);
                    arr_58 [(unsigned char)7] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [i_15]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_15] [3ULL] [i_15])) ? (((/* implicit */int) max((var_6), (var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (min((arr_8 [i_15] [i_15] [i_17]), (((/* implicit */unsigned long long int) ((int) 243453467257674306ULL)))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((arr_51 [i_15] [i_15]), (((((/* implicit */_Bool) var_3)) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_16 - 3] [6ULL])) ? (((/* implicit */int) arr_3 [i_15] [i_16 - 2] [i_17])) : (((/* implicit */int) (signed char)118))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 15; i_19 += 1) 
            {
                {
                    arr_65 [(short)2] [i_15] [i_18] [i_19] &= var_5;
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((arr_2 [i_15]), (((/* implicit */unsigned int) ((int) arr_28 [i_15] [i_18]))))))));
                    arr_66 [(_Bool)1] [i_18] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) -844877245267368094LL)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(signed char)14] [(signed char)14] [i_15] [8ULL] [i_18]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)223)))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_60 [i_18] [i_19])), (arr_23 [i_19] [i_18] [i_18] [i_19])))) != (((unsigned long long int) 243453467257674306ULL))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? ((+(((/* implicit */int) arr_22 [i_15])))) : ((~(((/* implicit */int) arr_60 [i_15] [i_18]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_20 = 2; i_20 < 22; i_20 += 1) 
    {
        arr_69 [1ULL] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (((+(var_0))) >= ((-(((/* implicit */int) var_9)))))))));
        arr_70 [i_20 - 2] [i_20] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) min((arr_2 [i_20 - 2]), (arr_2 [(unsigned char)14])))) : ((+(((long long int) (unsigned char)16))))));
    }
    var_27 = ((/* implicit */unsigned int) ((signed char) var_6));
    var_28 = ((/* implicit */long long int) var_1);
}
