/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21524
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [7U] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_0] [(short)19] [7LL])))));
                    arr_8 [i_0] [i_2] [i_0] |= ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_19 += ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0]);
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_9 [i_0]);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((0ULL) < (((/* implicit */unsigned long long int) -822926398))));
                        arr_20 [5LL] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_12 [i_0 - 2] [i_0 - 2] [i_0])));
                        var_21 = (~(((unsigned int) -822926398)));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_1 [i_4] [(short)21])))))))));
            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_13 [i_4] [(short)10] [i_4]))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_18 [i_0 - 1] [i_0] [15LL]))));
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            arr_29 [i_0] [i_0 + 1] [i_0] [i_7] [(unsigned short)12] [i_8] [16ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_0] [i_4] [(short)12] [3LL])) ? (((/* implicit */unsigned int) -822926409)) : (arr_28 [(signed char)18] [11] [i_4] [i_0] [(signed char)18] [i_8] [4LL]))) % (arr_28 [i_9] [(signed char)17] [(unsigned char)1] [i_0] [(signed char)17] [(signed char)17] [i_0])));
                            var_24 = arr_1 [i_0] [i_4];
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) var_6);
                var_26 = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_4] [i_7]);
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    arr_33 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_2 [i_0 - 2] [i_7] [i_0 - 2])));
                    var_27 = ((/* implicit */long long int) ((unsigned char) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]));
                }
                var_28 = ((/* implicit */short) (+((-(-822926409)))));
            }
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_37 [i_0] = ((/* implicit */long long int) var_8);
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -822926398)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10744635113879607054ULL))))) : (((/* implicit */int) arr_22 [(signed char)13] [7] [i_0 - 1] [i_11])))))));
                var_30 = ((/* implicit */long long int) arr_36 [(short)9] [(short)12] [i_0 - 2]);
                var_31 ^= ((/* implicit */long long int) 33554368);
            }
        }
    }
    for (unsigned char i_12 = 2; i_12 < 21; i_12 += 3) /* same iter space */
    {
        var_32 = (short)-20783;
        var_33 = ((int) ((unsigned long long int) arr_5 [10] [i_12 + 1] [i_12]));
        arr_40 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-28505)) / (((/* implicit */int) (unsigned short)5524))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)0] [i_12] [(signed char)0]))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_12] [i_12] [4U] [i_12]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12 + 1] [i_12 + 1]))) : (((((/* implicit */_Bool) (short)32766)) ? (4115830677228253679LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28503)))))))));
        /* LoopSeq 2 */
        for (signed char i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    {
                        arr_48 [i_12] [(short)7] [i_12] [i_15] [i_12] = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_15 [i_14])), (min((((/* implicit */int) var_6)), (arr_30 [i_13])))))), (((unsigned int) min((arr_32 [(unsigned short)12] [(unsigned short)12] [i_13] [18LL]), (((/* implicit */long long int) var_12)))))));
                        arr_49 [7U] [i_15] [i_14] [i_12 + 1] [i_12 + 1] [(short)8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [20] [20] [20])) ? (((/* implicit */int) var_5)) : (arr_46 [9] [i_13])))))) >= (arr_41 [i_12] [i_12] [i_12])));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)32749))) ? ((+(arr_2 [i_15] [i_13 - 1] [i_13 - 1]))) : (((/* implicit */unsigned long long int) (-(arr_41 [21U] [7U] [i_15]))))));
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) (unsigned char)242);
            /* LoopSeq 3 */
            for (short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                var_36 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2911590624U)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (short)32758)))), (((/* implicit */int) (short)32751))));
                var_37 = (+(((((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-32750))))) : (min((((/* implicit */long long int) arr_18 [i_12] [i_12] [i_16])), (3233353694161546244LL))))));
            }
            for (int i_17 = 1; i_17 < 21; i_17 += 3) 
            {
                arr_56 [i_13] [i_13] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_52 [i_13])) ? (((/* implicit */int) arr_22 [11] [i_13 + 1] [11] [i_17])) : (33554365))), (((/* implicit */int) max((arr_55 [i_12] [(short)5] [(short)5] [i_17 + 1]), (((/* implicit */short) (unsigned char)1))))))) % (((((/* implicit */int) (signed char)126)) ^ (((/* implicit */int) var_8))))));
                var_38 = ((/* implicit */long long int) min((var_38), (((((/* implicit */_Bool) (-(-1307357915740486891LL)))) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_24 [i_13] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52628)))))) | (max((arr_0 [i_12]), (((/* implicit */long long int) var_3))))))))));
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    arr_59 [11U] [i_13] [i_13 - 2] [i_17] [i_18] [i_13] = ((/* implicit */short) arr_10 [i_12] [i_12] [i_12]);
                    arr_60 [21LL] [i_18] [i_17] [i_17 - 1] [i_18] [i_18] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_46 [i_12] [i_12])) ? (((/* implicit */int) arr_1 [i_12] [i_12])) : (arr_6 [i_12] [i_12] [i_18] [i_12 + 1]))) + (((/* implicit */int) arr_18 [i_12 + 1] [i_13 - 1] [i_12 + 1])))) <= (((/* implicit */int) var_6))));
                }
                /* vectorizable */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_18 [i_13 - 2] [i_17 + 1] [i_17 + 1]))));
                    /* LoopSeq 2 */
                    for (int i_20 = 2; i_20 < 21; i_20 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_20 - 2] [i_19] [i_19] [i_12 - 1])) ? (arr_6 [i_20 - 2] [i_19] [i_19] [i_12 + 1]) : (((/* implicit */int) var_12))));
                        var_41 = ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_16 [i_19] [i_13] [i_13 + 1] [i_19])) : (((/* implicit */int) var_12)));
                        var_42 ^= ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (short)32747)))));
                        var_43 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 14819089120710609820ULL)))));
                    }
                    for (int i_21 = 2; i_21 < 21; i_21 += 2) /* same iter space */
                    {
                        var_44 -= ((short) (!(((/* implicit */_Bool) var_5))));
                        arr_72 [i_12] [i_12] [i_12] [i_19] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_19] [i_12] [i_19]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [9LL])) >= (((/* implicit */int) var_1)))))) : (arr_28 [i_21 - 2] [i_21 - 2] [13U] [i_19] [i_21 + 1] [i_17] [i_17])));
                    }
                    var_45 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_19] [i_12] [i_12])) / (((/* implicit */int) arr_5 [i_19] [i_19] [i_19]))));
                    var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((unsigned char) ((33554366) ^ (((/* implicit */int) arr_57 [12] [12] [i_13 - 1] [(unsigned short)1] [i_13 - 1] [i_12]))))))));
                }
                for (short i_22 = 0; i_22 < 22; i_22 += 2) 
                {
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_65 [i_22] [i_13])) != (((int) arr_25 [i_13] [i_17] [i_17] [i_13]))));
                    arr_76 [(short)3] [i_17 - 1] [i_13 - 2] [i_12] [i_12] = ((/* implicit */long long int) min((((int) (-(((/* implicit */int) (short)-7225))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_12 - 2] [i_12 - 2] [i_22]))))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_13])))))))));
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (+(max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) -5762472887718819675LL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))))));
                    var_49 = ((/* implicit */short) (((-(1440528717U))) | (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */int) arr_64 [i_17 + 1] [i_13 - 2] [16LL] [i_22] [(short)6])) <= (((/* implicit */int) arr_14 [5LL] [6U] [i_12 + 1]))))) : (((/* implicit */int) ((unsigned char) var_10))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_12] [i_13] [i_12])) ? ((-(9007190664806400LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12 + 1] [(signed char)14] [14LL] [i_13] [i_17 + 1]))))))));
                    arr_81 [i_12] [16ULL] [i_12] [2LL] [i_12] = ((/* implicit */int) ((((unsigned int) var_7)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)3366)) < (((/* implicit */int) (short)20528))))))));
                }
                for (short i_24 = 1; i_24 < 20; i_24 += 3) 
                {
                    arr_85 [i_12] [i_12] [i_12] [i_13] [i_17 + 1] [i_24] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_79 [i_13] [i_17 - 1] [i_17 + 1] [i_24 + 2])) ? (((/* implicit */int) arr_13 [i_13 - 2] [i_13] [i_13 + 1])) : (((/* implicit */int) arr_13 [i_13 - 1] [i_13] [i_13 - 2])))) != (((((/* implicit */_Bool) arr_79 [i_17] [i_17 + 1] [i_17] [i_24 - 1])) ? (((/* implicit */int) arr_13 [i_13 + 1] [i_13] [i_13 - 2])) : (((/* implicit */int) arr_79 [i_12] [i_17 + 1] [(short)16] [i_24 + 2]))))));
                    arr_86 [14LL] [14LL] |= ((/* implicit */long long int) ((short) (short)-29182));
                    var_51 = ((/* implicit */long long int) (+(((18446744073709551608ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1337574738)) ? (((/* implicit */int) (short)-3366)) : (arr_58 [i_13] [i_13 - 1] [i_17 + 1] [i_24 + 1]))))))));
                }
            }
            for (long long int i_25 = 0; i_25 < 22; i_25 += 3) 
            {
                var_52 = max((((/* implicit */int) ((arr_27 [i_13 - 2] [(short)5] [i_13 + 1] [i_25] [i_13 - 1]) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_89 [i_12] [i_12 - 1] [i_12])) ? (((/* implicit */int) arr_15 [i_13])) : (1125549616))))))), (max((min((-33554375), (822926407))), (arr_23 [i_12] [i_13] [i_12]))));
                var_53 = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)4))))));
            }
            var_54 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)9385)), (1125549623)))) / (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (-1LL)))))));
        }
        for (long long int i_26 = 0; i_26 < 22; i_26 += 4) 
        {
            var_55 = ((/* implicit */short) (+((+(((((/* implicit */_Bool) arr_24 [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */long long int) var_17)) : (var_14)))))));
            var_56 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_57 [i_12 - 1] [i_12] [12LL] [i_12 + 1] [i_12] [i_12 + 1])), (arr_54 [i_12] [i_12] [i_26] [i_12])))) ? (((var_13) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_12] [i_26]))))) : (((/* implicit */long long int) max((541957288U), (((/* implicit */unsigned int) (unsigned char)216))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_27 = 2; i_27 < 21; i_27 += 3) /* same iter space */
    {
        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-27043)) : (((/* implicit */int) (short)32759))))) : ((~(var_2)))));
        arr_94 [i_27] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_87 [i_27 + 1] [4LL] [i_27 + 1])) ? (((/* implicit */int) arr_87 [i_27 + 1] [10LL] [i_27])) : (((/* implicit */int) (short)-32755))));
    }
    /* LoopNest 3 */
    for (unsigned char i_28 = 0; i_28 < 20; i_28 += 2) 
    {
        for (unsigned int i_29 = 2; i_29 < 17; i_29 += 3) 
        {
            for (signed char i_30 = 0; i_30 < 20; i_30 += 3) 
            {
                {
                    var_58 = ((/* implicit */unsigned long long int) ((short) arr_30 [i_30]));
                    var_59 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    } 
    var_60 = ((/* implicit */unsigned int) ((558446353793941504LL) >> (((((/* implicit */int) (short)32762)) - (32735)))));
}
