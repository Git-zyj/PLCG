/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242359
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
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((arr_3 [i_0]) - (((unsigned long long int) var_1))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967291U))));
                            var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_1 - 1])) : (arr_12 [i_1 + 1] [i_2] [i_4])));
                            arr_14 [i_4] [5ULL] [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                        for (signed char i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_3] = ((arr_10 [i_0] [i_0]) >> (((429851878U) - (429851878U))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_1 - 1])) && (((/* implicit */_Bool) var_4)))))));
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_17 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) >> (((16962976369192335704ULL) - (16962976369192335699ULL)))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 8; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 326486971085058650ULL)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 3233725205U))));
                            arr_23 [i_0] [i_0] [i_0] [i_3] [4U] = ((/* implicit */unsigned int) var_9);
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((unsigned int) (short)-3494)))));
                        }
                        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) 0)) > (8U))))));
                        var_19 &= ((/* implicit */unsigned int) (~(arr_5 [i_1 + 1])));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 + 3] [i_7]))) + ((-(12U))))))));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_17 [i_9 - 1] [i_8] [i_0] [i_0])))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */short) ((326486971085058679ULL) >> (((/* implicit */int) ((signed char) 24)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        var_23 = (!(((/* implicit */_Bool) arr_4 [i_10])));
        /* LoopSeq 1 */
        for (signed char i_11 = 3; i_11 < 8; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        arr_42 [i_11] [i_11 - 2] = (~(4294967288U));
                        /* LoopSeq 4 */
                        for (long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */long long int) var_0)) - (arr_11 [i_10])));
                            var_25 = ((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned long long int) -1158114760))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) 0ULL))));
                            arr_45 [i_14] [i_11] [i_11] [i_14] [i_14] [i_12] = ((/* implicit */unsigned short) (-((+(var_9)))));
                            var_27 = ((/* implicit */int) arr_31 [i_10]);
                        }
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_11 + 3] [i_10] [i_10] [i_11 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (697404548U))))));
                            arr_50 [i_10] [i_11] [i_10] [i_13] [i_15] [i_11] [i_10] = ((/* implicit */unsigned short) var_1);
                            arr_51 [i_10] [i_11 + 3] [i_11] [i_13] [i_15] = ((/* implicit */long long int) (-((~(arr_25 [i_10] [i_10])))));
                            var_29 = ((/* implicit */long long int) 3260781064U);
                        }
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (-((+(arr_8 [i_10] [i_10] [i_10]))))))));
                            arr_55 [i_10] [i_11 + 2] [i_11] [i_11] = ((/* implicit */unsigned short) arr_11 [i_11 - 1]);
                            arr_56 [i_10] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) 4294967295U)))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)3)))))));
                            arr_57 [i_10] [i_11] [i_12] [i_13] [i_11] = ((/* implicit */int) ((18120257102624492950ULL) >= (((/* implicit */unsigned long long int) 3714639741U))));
                        }
                        for (int i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) (-(((/* implicit */int) ((17U) >= (((/* implicit */unsigned int) -2147483640)))))));
                            arr_60 [i_17] [i_13] [i_11] [i_11] [i_10] [i_10] = ((/* implicit */int) ((arr_12 [i_11 + 3] [i_11 - 1] [i_11 - 1]) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        }
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) ((arr_29 [i_10] [i_11 - 1] [i_11 - 1] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                for (unsigned short i_19 = 1; i_19 < 8; i_19 += 4) 
                {
                    for (long long int i_20 = 3; i_20 < 8; i_20 += 3) 
                    {
                        {
                            arr_70 [i_11] [i_11] = ((((/* implicit */_Bool) arr_0 [i_11 - 1] [i_19 - 1])) ? (((/* implicit */int) arr_0 [i_11 + 1] [i_19 + 3])) : (((/* implicit */int) arr_0 [i_11 + 1] [i_19 + 3])));
                            var_34 -= ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)65517)))) != ((+(14680064U))));
                            var_35 = ((/* implicit */_Bool) ((unsigned short) arr_59 [i_11] [i_20 + 3] [i_20 - 2] [i_19] [i_20 - 2]));
                        }
                    } 
                } 
            } 
        }
        arr_71 [i_10] = ((((/* implicit */_Bool) (short)17)) ? (arr_17 [i_10] [i_10] [i_10] [i_10]) : (arr_4 [i_10]));
        /* LoopSeq 1 */
        for (short i_21 = 4; i_21 < 8; i_21 += 2) 
        {
            arr_74 [i_10] = ((/* implicit */unsigned long long int) -817606751);
            /* LoopNest 2 */
            for (int i_22 = 2; i_22 < 10; i_22 += 1) 
            {
                for (unsigned int i_23 = 0; i_23 < 11; i_23 += 2) 
                {
                    {
                        arr_83 [4U] [i_21] [i_10] [i_23] [i_22] [i_23] = ((long long int) arr_61 [i_21 + 3] [i_21]);
                        var_36 &= ((/* implicit */unsigned int) (unsigned short)0);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                for (unsigned int i_25 = 0; i_25 < 11; i_25 += 1) 
                {
                    {
                        arr_89 [0ULL] [i_10] [4ULL] [i_25] [i_25] = ((/* implicit */_Bool) (+(-3883744472114971068LL)));
                        var_37 += ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) 3644361235U))));
            var_39 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) 0ULL))) < (arr_20 [i_21 + 2] [i_21 - 3])));
        }
    }
}
