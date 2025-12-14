/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20981
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) 11377871392668380337ULL);
        var_17 ^= ((/* implicit */signed char) (_Bool)0);
        var_18 = 7068872681041171278ULL;
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8116167394091280937LL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 11377871392668380337ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (arr_5 [i_3 + 1]) : (arr_5 [i_3 + 1])));
                    var_22 = ((/* implicit */signed char) (_Bool)1);
                    var_23 = ((/* implicit */long long int) arr_8 [i_3] [i_3 + 1] [(short)11]);
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_3] [i_3] [i_3 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_24 = var_0;
                                arr_18 [i_5] [i_5] [i_4] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (15382955459754938758ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [16U] [16U]) <= (var_0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1]))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_26 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (11377871392668380337ULL)))) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) (short)-21363)) : (((/* implicit */int) arr_20 [i_6] [i_6 + 1])))) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_19 [i_6 + 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [i_6])))))))));
        var_27 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_6 + 1])) : (((/* implicit */int) arr_19 [i_6 + 1]))))));
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_6] [i_6 + 1]))))) ? (((/* implicit */int) (signed char)-64)) : ((-((-(((/* implicit */int) arr_20 [i_6] [i_6]))))))));
    }
    var_29 = max(((!(((/* implicit */_Bool) (unsigned char)0)))), ((_Bool)1));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) (unsigned char)0);
                            var_31 = ((/* implicit */_Bool) var_9);
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-110)) ? (arr_12 [i_7] [i_7]) : (arr_5 [i_8]))))))))));
                        }
                    } 
                } 
                arr_33 [i_7] [i_7] [i_7] = ((/* implicit */short) 7068872681041171281ULL);
                var_33 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_31 [i_7] [i_8] [i_7])) ? (((long long int) var_2)) : (arr_4 [i_7])))));
                arr_34 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_9 [i_7])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775792LL)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
        var_35 = ((/* implicit */signed char) arr_36 [i_11]);
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) 511))));
        var_37 = ((/* implicit */long long int) (-((-(((int) -1861278879))))));
    }
    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        var_38 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)32662)))), (((((/* implicit */_Bool) arr_35 [i_12] [i_12])) ? (((/* implicit */int) arr_24 [i_12])) : (((/* implicit */int) arr_24 [(signed char)1]))))));
        var_39 |= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10))))))), (((((/* implicit */int) min((arr_2 [i_12]), (((/* implicit */unsigned short) (signed char)-36))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        arr_39 [(unsigned char)0] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_4 [i_12])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_15))))) : (((((/* implicit */long long int) var_7)) & (arr_9 [i_12]))))));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_35 [i_13] [i_13])) : (((((/* implicit */_Bool) 305622445)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (short)-16776))))));
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            arr_47 [i_13] [i_14] [i_14] = ((int) (_Bool)1);
            arr_48 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [(signed char)2] [(signed char)2] [i_14] [(short)0])) ? (((/* implicit */int) arr_14 [i_14] [i_14] [i_13] [14LL])) : (((/* implicit */int) arr_14 [i_13] [i_13] [i_14] [i_14]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 3; i_15 < 10; i_15 += 2) 
            {
                arr_51 [i_15] [(unsigned char)7] [(unsigned char)3] = ((/* implicit */signed char) -1080275863);
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    for (unsigned short i_17 = 2; i_17 < 12; i_17 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((long long int) arr_7 [i_13] [i_13])))));
                            arr_58 [i_13] [i_13] [i_14] [i_15 + 2] [i_17] [i_13] [i_14] = ((/* implicit */signed char) -4678916971319326281LL);
                            arr_59 [i_13] [5LL] [i_14] [5LL] [i_16] [i_17] [9ULL] = ((((/* implicit */long long int) ((/* implicit */int) arr_17 [15ULL] [i_14] [i_15 + 3] [i_17 - 1]))) - ((-(var_12))));
                            arr_60 [i_13] [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_15 - 3] [13U] [13U]))));
                            arr_61 [i_13] [i_13] [i_17] [i_16] [i_17] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_15] [i_15 + 3] [i_15 - 1] [i_16] [i_16] [3U] [i_17]))) <= (var_12)));
                        }
                    } 
                } 
                var_42 = ((/* implicit */signed char) (~(((var_7) / (((/* implicit */int) var_14))))));
                var_43 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_15 - 2])) ? (((/* implicit */int) arr_52 [i_15 - 2])) : (((/* implicit */int) arr_52 [i_15 + 3]))));
            }
            for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
            {
                arr_65 [i_18] |= ((/* implicit */short) (!(((/* implicit */_Bool) -1080275863))));
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    for (long long int i_20 = 3; i_20 < 11; i_20 += 1) 
                    {
                        {
                            arr_71 [i_18] [i_14] [(unsigned char)9] [i_18] [i_20] [i_18] = ((/* implicit */unsigned long long int) (!((!((_Bool)1)))));
                            arr_72 [i_13] [i_13] [i_18] [i_19] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) 1080275862)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned short i_22 = 1; i_22 < 12; i_22 += 1) 
                {
                    for (signed char i_23 = 3; i_23 < 11; i_23 += 4) 
                    {
                        {
                            arr_81 [i_14] [i_14] [i_21] [(unsigned short)7] [5ULL] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_22] [i_22 - 1] [i_22 - 1] [i_22]))) & ((-(-9223372036854775807LL)))));
                            arr_82 [i_22] [i_22] [i_22] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_75 [(_Bool)1] [i_22 + 1] [i_23 - 2] [i_23 - 3]))));
                            arr_83 [i_13] [i_14] [i_22] [i_22] [i_22] = ((unsigned short) arr_22 [i_21] [i_22]);
                            arr_84 [6] [i_22] [i_14] [i_14] [i_22] [(unsigned char)5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_35 [i_13] [i_13])) ? (((/* implicit */int) (unsigned char)0)) : (arr_69 [i_13] [i_22] [i_22])))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (arr_4 [(short)7])))) == (arr_57 [i_23] [(short)1] [i_23] [i_23] [i_22 - 1])));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_24 = 0; i_24 < 13; i_24 += 1) 
        {
            for (long long int i_25 = 0; i_25 < 13; i_25 += 4) 
            {
                for (short i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_27 = 2; i_27 < 12; i_27 += 4) 
                        {
                            arr_94 [i_13] [i_13] [i_13] [i_26] [i_27] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_93 [i_27] [i_27] [i_27] [i_27] [i_27 - 1])) : (((1080275863) / (((/* implicit */int) (signed char)-101))))));
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */unsigned long long int) arr_12 [i_27 + 1] [i_27 - 2])) : (arr_63 [i_27 - 1])));
                            var_46 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)62))));
                            arr_95 [i_26] [5] [(unsigned short)1] [i_24] [i_24] = ((/* implicit */signed char) var_11);
                        }
                        for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 1) 
                        {
                            var_47 -= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) var_9)))));
                            arr_100 [(unsigned short)2] [i_24] [i_25] = ((/* implicit */_Bool) ((arr_4 [i_13]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35771)))));
                        }
                        for (long long int i_29 = 0; i_29 < 13; i_29 += 2) 
                        {
                            var_48 |= ((/* implicit */unsigned int) arr_54 [i_13] [(_Bool)1] [i_25] [i_26] [i_29]);
                            var_49 = ((/* implicit */long long int) ((unsigned short) arr_43 [i_26]));
                            var_50 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)234))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_30 = 3; i_30 < 12; i_30 += 3) 
                        {
                            var_51 -= ((/* implicit */short) (+((-(var_6)))));
                            var_52 = ((/* implicit */signed char) ((arr_101 [i_30 - 3] [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 + 1] [i_30] [(signed char)11]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_101 [i_30 - 3] [i_30 - 1] [i_30 - 1] [11U] [i_30 + 1] [i_30] [i_30])))));
                            arr_106 [(short)11] [i_24] [1LL] [1] [1LL] [1LL] = ((/* implicit */unsigned char) ((signed char) arr_55 [i_30] [i_26] [i_25] [1ULL] [i_24] [i_13]));
                            arr_107 [i_13] [i_24] [i_13] [i_13] [i_13] [i_25] = ((/* implicit */unsigned short) arr_28 [(signed char)14]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_31 = 0; i_31 < 13; i_31 += 2) /* same iter space */
    {
        var_53 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_43 [i_31]) : (((/* implicit */int) (short)-28064))))) && (((/* implicit */_Bool) (unsigned short)35771)));
        var_54 = ((/* implicit */long long int) arr_50 [(short)10] [(short)4]);
    }
}
