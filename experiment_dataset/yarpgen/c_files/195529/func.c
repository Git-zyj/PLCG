/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195529
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_0]))))) && (((/* implicit */_Bool) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min(((+(arr_4 [16ULL] [i_1 - 2] [i_2]))), (max((((/* implicit */unsigned int) -2035085388)), (arr_4 [i_0] [i_0] [i_0])))))) % (min((((/* implicit */unsigned long long int) var_5)), (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (short)30747))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_1 - 2] [i_2 + 1] [i_3 - 3])) && (((/* implicit */_Bool) arr_0 [12ULL])))) ? (4137232409021691267ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) -9LL)) && (((/* implicit */_Bool) (short)0)))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_3]))) >> (((((/* implicit */int) var_2)) - (45)))));
                        var_14 = ((/* implicit */long long int) (short)-1);
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((short) var_5));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            arr_18 [i_0] [(unsigned short)15] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
                            var_16 = (+(2832188607474364660ULL));
                            arr_19 [i_0] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_2] [i_5])) ? (arr_10 [i_1] [i_2 - 1] [i_2 - 1] [i_4] [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) 8LL))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (short)-22))))) - (((/* implicit */int) (short)0))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_18 *= arr_4 [i_0] [i_0] [(signed char)1];
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) (~(arr_9 [11ULL] [11ULL] [i_2] [i_2] [i_2]))))), ((~(((((/* implicit */int) (short)21)) | (arr_9 [i_0] [i_1] [i_0] [i_4] [3LL])))))));
                            arr_23 [i_0] [i_1] [i_2 + 2] [i_4] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_1 - 3] [i_1] [i_2 + 1])), (((arr_21 [i_4] [i_4] [i_4] [8U] [8U] [8U]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55407)))))))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((arr_9 [i_1 - 3] [i_1 - 1] [i_1 - 3] [12ULL] [i_2 - 1]) | (((/* implicit */int) arr_25 [i_1 - 2] [i_2 + 1] [i_2 + 2] [i_2] [i_2] [i_2])))) != ((~(arr_9 [i_2] [i_1 - 1] [i_2] [i_2] [i_2 - 1]))))))));
                        var_20 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)10129)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (short)0))))));
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) arr_6 [i_7] [i_1 - 2] [i_2 + 1])) / (min((((/* implicit */unsigned long long int) arr_6 [8U] [8U] [8U])), (arr_3 [16U] [16U] [i_2])))))));
                        var_22 = 2147483647;
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_30 [i_8] [i_8] [i_8] [i_0] = 4125916588U;
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) 
                    {
                        for (signed char i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_24 = (short)36;
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((-2035085388) + (arr_5 [i_9 - 2] [i_9] [i_9 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 4) 
    {
        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_26 = ((/* implicit */signed char) 2156885386725385483LL);
                    var_27 = (-(max((2147483647), (2147483647))));
                    /* LoopSeq 1 */
                    for (short i_14 = 4; i_14 < 19; i_14 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((min((1592242144), (((/* implicit */int) (short)11)))), (((/* implicit */int) min(((short)0), (min((((/* implicit */short) arr_43 [i_12] [i_13] [i_12])), ((short)38))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            var_29 ^= ((/* implicit */unsigned long long int) min(((((-(((/* implicit */int) arr_41 [i_11])))) * (((/* implicit */int) (unsigned char)0)))), (arr_45 [i_11 - 2] [i_11])));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_11]))))) & (arr_45 [i_13] [i_13])))) == (((((9ULL) + (7018771627806714205ULL))) >> ((-(((/* implicit */int) (short)-42))))))));
                        }
                        for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) 7018771627806714205ULL);
                            var_32 = ((/* implicit */unsigned long long int) min(((~(-288230376151711744LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((133955584ULL) << (((((/* implicit */int) arr_53 [i_11])) + (44)))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (arr_36 [i_11]))))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_40 [i_11]), (arr_40 [i_11 + 1])))) & (((/* implicit */int) arr_40 [i_12]))));
                        }
                        for (int i_17 = 3; i_17 < 17; i_17 += 2) 
                        {
                            arr_56 [i_11] [i_12] [i_11] [i_13] [i_14] [i_14] [i_17 + 1] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) (short)-12)) : (((((/* implicit */int) arr_53 [i_17])) / (arr_55 [i_11] [(_Bool)1] [i_13] [i_13] [15] [(_Bool)1])))))));
                            var_34 = ((/* implicit */unsigned int) arr_47 [i_12] [i_12] [i_13]);
                            var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-4)), ((short)-42)));
                        }
                        for (int i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            arr_60 [i_13] [i_12] [i_13] [15U] [i_18] [i_18] = (((((+(288230376151711744LL))) >> (((arr_36 [i_11 + 2]) + (810879569))))) >> (6ULL));
                            arr_61 [i_11] [i_18] = ((/* implicit */long long int) (short)0);
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)2)), (11427972445902837410ULL))))))))))));
                        }
                        var_37 = ((/* implicit */long long int) min((((unsigned int) ((int) arr_53 [i_11]))), (((/* implicit */unsigned int) (signed char)-4))));
                    }
                }
                /* vectorizable */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_64 [i_19] = ((/* implicit */long long int) ((signed char) arr_48 [i_11 + 1] [i_11 - 1]));
                    var_38 = ((2560812968U) <= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [i_11] [i_12] [i_19]))))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-49)) ? (-1) : (442327745)));
                }
                arr_65 [i_12] [(_Bool)1] [i_11] = ((/* implicit */long long int) ((unsigned long long int) ((arr_54 [i_11] [i_11] [i_11] [i_12]) / (((((/* implicit */_Bool) arr_50 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) : (arr_54 [i_11] [i_11] [i_11] [i_11]))))));
                arr_66 [3LL] |= ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
}
