/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27571
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */int) ((unsigned char) ((var_12) ^ (((/* implicit */int) (unsigned char)92))))))));
    var_20 = ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */short) (unsigned char)120);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : ((((_Bool)1) ? (6463842318524794756ULL) : (((/* implicit */unsigned long long int) 3726651722122636269LL))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_18)), (arr_5 [i_0] [i_0] [i_2])))) ? ((-(18446744073709551599ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108)))))) ? (min((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_1]))), (arr_6 [i_1 - 2] [i_1 - 1] [i_1 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [7LL] [i_1 - 2] [i_1 + 1]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (~(max((11522473681463617155ULL), (((/* implicit */unsigned long long int) arr_13 [i_4] [(unsigned char)3] [i_4] [i_1 - 2] [i_4]))))));
                                var_25 = ((/* implicit */unsigned char) (~(16ULL)));
                                arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_26 = ((/* implicit */unsigned char) arr_18 [i_5] [i_5]);
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)175)) ? (((((/* implicit */_Bool) (unsigned short)2931)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)27)))) : (((/* implicit */int) (short)28578))));
        arr_19 [i_5] [(unsigned short)7] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_18 [(unsigned short)19] [(unsigned short)19])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (unsigned char)134)))));
        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_5]))));
    }
    for (short i_6 = 1; i_6 < 12; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    arr_27 [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_6 + 2] [i_8] [i_6 + 2])) ? (max((((/* implicit */unsigned long long int) arr_18 [i_6 + 1] [i_6 + 1])), (13573541954107793415ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_6 + 1])) < (((/* implicit */int) arr_22 [i_6 + 1]))))))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-23212), (arr_17 [i_6 + 1]))))) / (((((/* implicit */_Bool) (short)-27659)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30894)))))));
                    var_30 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_6]))))) ? (((/* implicit */long long int) var_2)) : (arr_23 [i_6]))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) max((arr_17 [i_6 + 1]), (arr_17 [i_6 + 2])))) : (((((((/* implicit */int) arr_17 [i_6 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_17 [i_6 - 1])) + (26833)))))));
                    var_32 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_17 [i_6 - 1])), (((((((/* implicit */_Bool) 10393574482307327099ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) : (2068242923U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -1328306883)) != (1831114552U)))))))));
                }
            } 
        } 
        arr_28 [i_6 + 1] = ((/* implicit */short) var_3);
        arr_29 [3ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_20 [i_6 - 1]), ((signed char)-16)))) ^ (((((/* implicit */int) var_15)) >> (((arr_26 [i_6] [(unsigned short)2] [(unsigned short)2]) - (404156011)))))))) ? (((/* implicit */int) arr_20 [i_6 + 2])) : (((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 2]))));
        var_33 = ((/* implicit */signed char) var_12);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_10 = 3; i_10 < 9; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 1; i_11 < 10; i_11 += 2) 
            {
                for (int i_12 = 2; i_12 < 11; i_12 += 1) 
                {
                    {
                        arr_38 [11ULL] [i_10] [i_10] [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_10 - 1] [i_12 - 2] [i_10] [i_11 + 2])) <= (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_17 [i_10])))))));
                        arr_39 [i_9] [i_10 + 2] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_10 + 3] [i_10 + 1] [i_10 + 3] [i_12 + 1])) ? (((/* implicit */int) arr_36 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 + 1])) : (((/* implicit */int) (short)-21996))));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_10 + 3] [i_10 - 1])) ? (arr_30 [i_10 - 2] [i_10 + 2]) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_35 [i_10] [i_10 + 1] [i_10]) : (arr_35 [i_10] [i_10 - 3] [i_10 - 2])));
            arr_40 [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (2463852720U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52806)))))) ? (((var_16) | (((/* implicit */unsigned int) ((/* implicit */int) (short)18009))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_37 [i_10 + 3] [i_10 - 1] [i_9] [i_9]))))))));
        }
        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            arr_44 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_13])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_13]))) ^ (2595846011U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_13])))));
            arr_45 [i_13] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13]))) : (1831114552U))));
            arr_46 [5LL] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */int) arr_41 [i_13])) : (((/* implicit */int) arr_41 [i_13]))));
            arr_47 [i_9] [i_13] = ((/* implicit */_Bool) arr_22 [i_13]);
        }
        for (short i_14 = 1; i_14 < 11; i_14 += 2) 
        {
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [0U] [i_14]))))) ? (arr_26 [i_14 - 1] [6ULL] [(_Bool)1]) : (((/* implicit */int) arr_25 [i_14 + 1] [(signed char)6] [(signed char)6] [i_14 + 1]))));
            /* LoopNest 2 */
            for (signed char i_15 = 2; i_15 < 8; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    {
                        arr_55 [i_9] [i_9] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_42 [i_15 + 1] [i_14])))) < (3698078149U)));
                        arr_56 [i_15] [11ULL] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))) : (765678653088204795ULL)))) ? (arr_51 [i_14 + 1] [i_14 + 1] [i_15 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1661433479)) ? (7297381582157651939LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [i_15] [i_15]))));
                        arr_57 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(unsigned char)4])) ? (((/* implicit */int) (short)20524)) : (((/* implicit */int) arr_18 [i_16] [(signed char)5]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_15])) ? (((/* implicit */int) arr_34 [i_15] [(unsigned char)4])) : (((/* implicit */int) var_15)))))));
                    }
                } 
            } 
        }
        arr_58 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [4LL] [i_9])) ? (((/* implicit */long long int) var_10)) : (arr_23 [i_9])));
        /* LoopSeq 1 */
        for (int i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            var_38 = ((/* implicit */short) arr_43 [i_17]);
            var_39 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)18028)) ? (18311225796700412531ULL) : (((/* implicit */unsigned long long int) 7005077181084239240LL)))) * (((((/* implicit */_Bool) -901220611)) ? (18388178244577100304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 1; i_18 < 11; i_18 += 2) 
            {
                arr_65 [i_17] = ((/* implicit */short) arr_22 [i_18]);
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    for (int i_20 = 2; i_20 < 10; i_20 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_9])) ? (9167046692244260642LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_17] [i_18] [i_20 - 2])) / (((/* implicit */int) (short)-3070)))))));
                            arr_70 [i_20] [i_19] [i_18] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_9] [i_17] [i_20 - 1])) ? (((/* implicit */int) arr_41 [i_19])) : (((/* implicit */int) arr_25 [i_18] [i_18] [i_19] [i_18 - 1]))));
                            arr_71 [i_9] [i_17] [i_18] [i_17] [i_20 - 1] = ((/* implicit */short) ((unsigned int) arr_64 [i_9] [i_17] [i_18 - 1] [i_19]));
                        }
                    } 
                } 
            }
            for (long long int i_21 = 0; i_21 < 12; i_21 += 2) 
            {
                arr_75 [i_9] [i_17] [i_17] [4U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [(unsigned char)8])) ? (var_8) : (arr_66 [i_21] [i_9] [i_9] [i_9] [i_9]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_17] [i_17])))));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_21]))) - (arr_60 [i_9] [(short)5] [(short)5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_17]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) / (-9186761120189543375LL)))));
            }
        }
        /* LoopSeq 3 */
        for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) (unsigned char)51);
            var_43 = arr_60 [(short)7] [i_22] [3U];
            arr_80 [8U] [8U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [2ULL] [2ULL])) ? (((unsigned long long int) arr_72 [i_22] [i_22] [i_9])) : (18388178244577100304ULL)));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            arr_83 [i_23] = ((/* implicit */_Bool) arr_36 [i_9] [i_23] [i_9] [i_9]);
            var_44 = ((/* implicit */_Bool) arr_26 [i_9] [(short)6] [i_23]);
        }
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 1) 
        {
            arr_88 [i_24] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)99));
            arr_89 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-986492764147707819LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (arr_60 [i_9] [i_9] [(short)3]) : (3515740747U))))));
            /* LoopNest 3 */
            for (unsigned char i_25 = 2; i_25 < 11; i_25 += 3) 
            {
                for (unsigned int i_26 = 0; i_26 < 12; i_26 += 4) 
                {
                    for (unsigned long long int i_27 = 3; i_27 < 11; i_27 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_66 [i_9] [i_24] [i_25] [i_26] [(signed char)7])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_41 [i_27])))));
                            arr_100 [i_24] [i_24] [i_25 + 1] [i_26] [i_24] = ((/* implicit */unsigned short) (_Bool)0);
                            var_46 = ((((unsigned int) var_1)) == (((/* implicit */unsigned int) ((/* implicit */int) arr_95 [i_27 - 1] [(unsigned char)5] [i_27] [i_27 - 1] [i_25]))));
                            arr_101 [(unsigned short)1] [i_24] [i_9] [i_24] [i_9] = ((/* implicit */unsigned char) 316646328U);
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_28 = 3; i_28 < 24; i_28 += 1) 
    {
        var_47 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_102 [i_28 - 2])) + (((/* implicit */int) arr_102 [i_28 - 2]))))));
        var_48 = ((/* implicit */unsigned int) 10219363104830708383ULL);
    }
}
