/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203994
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                            {
                                var_11 = ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_9 [i_4] [i_2] [i_1] [1ULL])));
                                var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */int) var_0)) != (1295383737)))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_13 |= arr_8 [i_5] [i_2] [i_2] [i_1];
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_5 - 1] [i_3] [i_3 + 1])) && (((/* implicit */_Bool) arr_12 [4ULL] [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                                arr_16 [i_1] [i_3 + 1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (-(((-2281547831246682319LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                                var_15 *= ((/* implicit */short) (((+(var_8))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)10] [i_5 - 1] [i_3 - 2] [i_3 - 2])))));
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 1347380445)) ? (((/* implicit */int) max((arr_17 [i_6] [i_6 - 1] [13] [i_6 - 1] [i_6]), (arr_17 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) : (-1347380445)));
                                var_17 = ((/* implicit */unsigned short) var_8);
                            }
                            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            /* LoopSeq 2 */
                            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_10))), (((/* implicit */unsigned long long int) (_Bool)1)))) | ((~(452252971754929078ULL)))));
                                var_19 ^= ((/* implicit */long long int) max(((-(arr_19 [i_0] [i_3 - 2] [i_3 + 1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((-1347380445), (((/* implicit */int) (unsigned char)61)))))));
                                var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)1] [(signed char)9])) - (((arr_14 [i_3 - 1] [i_0] [i_3 - 1] [i_0] [i_3 - 1]) - (((/* implicit */int) arr_10 [i_2]))))));
                            }
                            for (long long int i_8 = 3; i_8 < 13; i_8 += 2) 
                            {
                                var_21 = ((/* implicit */_Bool) (-(17994491101954622539ULL)));
                                arr_26 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) (unsigned short)8))))) ? (((-8945070383212772012LL) & (((/* implicit */long long int) arr_8 [i_3 - 2] [i_3 - 2] [i_1] [i_3 - 1])))) : (((/* implicit */long long int) max((((/* implicit */int) arr_11 [i_8] [i_0] [i_0] [i_0])), (arr_1 [i_3 - 2]))))));
                                var_22 ^= ((/* implicit */long long int) max(((~(arr_14 [i_8 - 2] [i_2] [i_0] [i_2] [i_0]))), (((((/* implicit */_Bool) arr_14 [i_8 + 2] [i_0] [i_2] [i_0] [i_2])) ? (arr_14 [i_8 - 3] [i_2] [(unsigned char)8] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */int) max((var_23), (((int) ((17994491101954622537ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_3]))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned short i_10 = 4; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_9])) && (((/* implicit */_Bool) var_3))))) : ((-(-1168309013))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_0] [12]))))))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (-(((((/* implicit */int) arr_9 [i_10 - 1] [i_0] [i_1] [i_0])) >> (((3936606034U) - (3936606017U))))))))));
                        }
                    } 
                } 
                var_26 ^= ((/* implicit */unsigned short) var_9);
                var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_1] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) max((-1168308995), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? (9828627897500104787ULL) : (452252971754929077ULL)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        var_28 = ((/* implicit */int) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (var_2))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)28016))))), ((-(var_4))))))));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (int i_13 = 1; i_13 < 10; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        for (signed char i_15 = 3; i_15 < 10; i_15 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) (short)-7045);
                                var_30 *= ((/* implicit */signed char) arr_20 [i_12] [i_12] [i_12] [i_12] [i_11]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) (-(((max((-6727335853971011719LL), (((/* implicit */long long int) arr_25 [i_11] [5] [i_12] [i_11])))) & (max((((/* implicit */long long int) var_4)), (var_7)))))));
                        arr_47 [i_11] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */long long int) ((signed char) (_Bool)1));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned char i_18 = 3; i_18 < 10; i_18 += 2) 
            {
                for (int i_19 = 2; i_19 < 9; i_19 += 1) 
                {
                    {
                        var_32 *= ((/* implicit */short) ((long long int) max((arr_50 [i_18] [i_18 - 1] [i_18 + 1]), (arr_50 [i_18] [i_18 - 1] [i_18 + 1]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 1; i_20 < 11; i_20 += 4) 
                        {
                            arr_59 [i_11] [i_11] [(_Bool)1] [i_11] [i_11] [i_11] [(_Bool)1] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (signed char)0)), (var_3)))));
                            arr_60 [i_18 - 1] [i_18 - 1] [i_11] = (((+(arr_51 [i_19 + 1] [i_19 - 1] [i_11] [i_19 - 2]))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) arr_51 [5ULL] [i_19 - 2] [i_11] [i_19 - 2]))))));
                        }
                        for (short i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            var_33 |= ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)11536)));
                            arr_63 [i_21] [i_21] [i_18 - 2] [i_17] [i_21] [i_11] |= ((/* implicit */signed char) var_9);
                            arr_64 [i_11] [i_11] [i_11] [i_19] = ((/* implicit */signed char) max((max((arr_56 [i_11] [i_21] [0U] [i_18 + 2] [i_17] [i_11]), (max((((/* implicit */int) (_Bool)1)), (var_4))))), (((/* implicit */int) ((short) arr_5 [i_19 - 1])))));
                        }
                    }
                } 
            } 
        } 
    }
}
