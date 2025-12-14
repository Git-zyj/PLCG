/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33749
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
            arr_6 [i_1] [3ULL] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [(unsigned char)8])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))) : (((/* implicit */int) arr_4 [(unsigned char)8] [(unsigned char)8]))));
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)44462)) ? (((/* implicit */int) (_Bool)0)) : (66387959)));
            arr_10 [i_0] |= ((/* implicit */short) ((int) arr_1 [i_0]));
            var_20 += ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_0] [i_0])));
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) arr_8 [i_2]);
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) arr_13 [i_3] [i_0]);
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_14 [i_3])));
        }
        var_21 = ((/* implicit */short) (-(arr_13 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        arr_26 [i_6] = ((/* implicit */unsigned int) arr_13 [i_0] [6U]);
                        var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_4] [7U])) ? (((/* implicit */int) arr_18 [i_0] [6LL] [i_5])) : (((/* implicit */int) arr_25 [i_0]))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_5] [i_4]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_1 [(unsigned short)10]))));
            arr_27 [i_4] &= ((/* implicit */int) arr_23 [i_0] [i_0] [(_Bool)1]);
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [9LL] [i_7])) ? (arr_28 [i_0] [i_0] [i_0]) : (arr_28 [(unsigned short)4] [(unsigned short)4] [i_0]))))));
            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [7U])) ? (((/* implicit */int) arr_20 [i_0] [i_7])) : (((/* implicit */int) arr_20 [5ULL] [i_7]))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(unsigned char)10])) ? (((/* implicit */int) arr_22 [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_7]))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            arr_35 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_8] [i_0])))))) : (((((/* implicit */_Bool) arr_31 [i_8] [i_0])) ? (arr_28 [(_Bool)1] [i_8] [i_8]) : (((/* implicit */unsigned int) arr_24 [i_0]))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239))) : (2575995147U)));
            var_28 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [5U])) ? (arr_32 [i_0] [i_8]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [(unsigned char)5] [(unsigned char)5])))))));
            /* LoopSeq 4 */
            for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_8 [i_8]))));
                            var_30 |= ((/* implicit */long long int) arr_38 [i_0] [i_8] [i_9] [i_10] [(_Bool)1]);
                            var_31 *= ((/* implicit */short) ((unsigned long long int) (-(66387960))));
                            var_32 -= ((/* implicit */unsigned char) arr_12 [i_9 + 1] [i_9] [i_9 - 1]);
                        }
                    } 
                } 
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_12 [(_Bool)1] [i_8] [(_Bool)1]))));
            }
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_34 -= ((/* implicit */unsigned char) arr_7 [i_0] [i_8] [i_12]);
                var_35 = ((/* implicit */int) ((short) (unsigned char)17));
            }
            for (unsigned int i_13 = 3; i_13 < 10; i_13 += 4) /* same iter space */
            {
                arr_47 [i_0] [i_0] [i_8] = ((/* implicit */short) ((unsigned char) arr_18 [i_0] [i_8] [i_13]));
                arr_48 [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_8] [i_13 - 2])) ? (arr_24 [9ULL]) : ((+(((/* implicit */int) arr_12 [10LL] [i_8] [9ULL]))))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    arr_51 [i_8] [i_0] = (-(arr_28 [(unsigned short)5] [i_8] [i_13 - 1]));
                    arr_52 [i_13] [i_13] [i_13] [(unsigned short)4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_38 [(unsigned short)7] [i_8] [i_8] [i_8] [i_8]))));
                }
            }
            for (unsigned int i_15 = 3; i_15 < 10; i_15 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_16 = 3; i_16 < 9; i_16 += 2) 
                {
                    var_36 = (+(((/* implicit */int) ((signed char) arr_28 [i_0] [i_8] [i_16 - 3]))));
                    var_37 *= ((/* implicit */short) arr_55 [i_0]);
                    var_38 += ((unsigned int) arr_40 [i_16] [i_0] [i_0] [i_0]);
                }
                var_39 *= ((/* implicit */short) (+(((long long int) arr_32 [(short)5] [(short)5]))));
                var_40 = ((/* implicit */long long int) (+(arr_28 [i_15 + 1] [i_15 + 1] [i_15 - 1])));
                var_41 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [2U] [i_8] [i_8]))));
            }
        }
    }
    /* vectorizable */
    for (short i_17 = 2; i_17 < 24; i_17 += 4) 
    {
        var_42 += ((/* implicit */long long int) (+(((/* implicit */int) arr_58 [i_17] [(unsigned char)6]))));
        arr_59 [i_17 - 1] = ((/* implicit */unsigned char) ((int) ((signed char) arr_58 [i_17] [i_17])));
        arr_60 [i_17] [(_Bool)1] = arr_57 [i_17] [i_17 - 2];
        /* LoopNest 3 */
        for (unsigned short i_18 = 4; i_18 < 24; i_18 += 4) 
        {
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    {
                        var_43 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_17 - 2] [i_17 - 2] [i_18 - 4] [i_18 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_17 - 1] [i_17 + 1] [i_18 - 2] [i_18 - 2]))) : (arr_66 [i_17 + 1] [i_17 + 1])));
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
                        {
                            var_44 &= ((/* implicit */short) ((_Bool) arr_57 [(unsigned char)11] [i_18]));
                            var_45 = (!(((/* implicit */_Bool) arr_63 [i_17] [i_17] [i_17 - 1] [i_20])));
                            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) arr_61 [(unsigned short)23]))));
                            var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_57 [i_18 - 2] [i_18 - 2]))));
                            arr_71 [i_21] [i_20] [i_19] [i_19] [i_17] [i_17] |= ((/* implicit */unsigned int) arr_68 [i_17] [i_18 - 1] [i_19]);
                        }
                        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_63 [i_17 + 1] [i_17 - 1] [i_17 + 1] [i_17 - 2])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 3; i_22 < 24; i_22 += 3) 
                        {
                            var_49 = ((/* implicit */unsigned int) ((signed char) arr_73 [i_17] [i_22 + 1] [i_19] [i_18 + 1]));
                            arr_75 [(unsigned short)7] [i_18 + 1] [i_22] [i_18 + 1] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_72 [i_22] [i_18] [i_19] [i_17 - 2] [i_18 - 2] [i_19] [i_20])) ? (((/* implicit */int) arr_72 [i_22] [i_18] [i_19] [i_17 - 2] [i_18 - 2] [i_20] [i_19])) : (((/* implicit */int) arr_72 [i_22] [i_18] [(unsigned short)13] [i_17 + 1] [i_18 + 1] [i_19] [i_18]))));
                        }
                        for (short i_23 = 1; i_23 < 24; i_23 += 3) 
                        {
                            arr_80 [6LL] [i_20] [i_19] [i_18] [(unsigned short)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_73 [i_17] [i_18] [i_20] [i_20]))));
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) arr_58 [i_17 + 1] [i_18 - 1]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_24 = 0; i_24 < 16; i_24 += 3) 
    {
        var_51 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) min((arr_58 [i_24] [i_24]), (((/* implicit */signed char) arr_82 [i_24]))))), (arr_73 [i_24] [i_24] [i_24] [i_24])));
        var_52 = min((((/* implicit */long long int) ((signed char) (unsigned char)229))), (min((4068870953632997788LL), (((/* implicit */long long int) (unsigned char)6)))));
    }
    var_53 *= ((/* implicit */short) min((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (var_16))))), (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_25 = 2; i_25 < 12; i_25 += 1) 
    {
        for (short i_26 = 4; i_26 < 11; i_26 += 2) 
        {
            {
                var_54 &= ((/* implicit */short) arr_64 [i_25]);
                var_55 = ((/* implicit */short) ((unsigned char) arr_87 [i_26]));
            }
        } 
    } 
    var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) (~(((/* implicit */int) var_9)))))));
}
