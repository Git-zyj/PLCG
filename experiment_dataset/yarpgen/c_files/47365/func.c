/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47365
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
    var_17 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((int) arr_1 [i_0]));
        arr_3 [i_0] = ((/* implicit */int) var_9);
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-27222)) >= (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_4)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = arr_5 [i_0];
            arr_7 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_2)), (arr_2 [i_0 + 2])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_3)))))));
                    arr_14 [i_0] [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) var_13);
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0]))));
                    arr_15 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [(signed char)2])), (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_22 &= ((/* implicit */short) arr_9 [i_0] [i_0]);
                                arr_20 [i_5] [i_0] [18U] [i_0] [18U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                                var_23 = min((min((min((18446744073709551597ULL), (arr_12 [i_0] [i_0] [i_4] [i_5]))), (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4 + 1] [i_0] [i_0] [i_3] [i_3])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_8 [i_0] [i_2] [i_5]), (((/* implicit */unsigned int) var_15)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        arr_24 [i_6] = ((unsigned long long int) arr_13 [i_6] [i_6]);
        var_24 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        arr_27 [i_7] = ((/* implicit */short) var_1);
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_25 = ((/* implicit */int) arr_28 [i_7] [i_7] [(short)2]);
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_8]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7])))))))) : (arr_29 [i_7] [i_7] [i_7])));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_9 = 4; i_9 < 12; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 12; i_10 += 2) 
        {
            for (signed char i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_17 [i_11 + 1] [i_11] [i_11] [i_11 + 1])))), (18446744073709551580ULL)));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 2; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) arr_26 [i_10 - 3] [i_12]);
                                arr_43 [i_13] [i_10] [i_10] = (-(((/* implicit */int) (unsigned short)124)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_44 [i_9] [12LL] = ((/* implicit */unsigned short) 18446744073709551614ULL);
    }
    /* LoopSeq 1 */
    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (4294967281U)));
            arr_50 [i_14] |= ((/* implicit */unsigned long long int) min((arr_18 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_45 [i_14] [i_15])))))));
            var_30 = ((/* implicit */int) var_0);
        }
        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    {
                        arr_60 [i_18] [i_17] [0ULL] [i_16] [0ULL] [i_14] = min((((/* implicit */unsigned int) arr_28 [i_14] [i_14] [i_18])), (min((4294967267U), (arr_34 [i_14]))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            arr_64 [i_19] = ((/* implicit */signed char) ((((/* implicit */int) min((var_7), (var_7)))) + (((/* implicit */int) var_4))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((short)32752), (((/* implicit */short) arr_33 [i_16] [i_16])))))))) + (((/* implicit */int) arr_51 [i_14] [i_16] [i_14])))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_20 = 1; i_20 < 7; i_20 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) -9205483688495264092LL))));
                var_33 = ((/* implicit */unsigned long long int) (short)19926);
            }
            /* vectorizable */
            for (signed char i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
            {
                arr_73 [i_14] [i_14] [i_16] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))) ? (var_1) : (((arr_62 [i_14] [i_16] [i_21] [i_16] [i_21] [i_16]) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
            }
            for (signed char i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned char) ((var_2) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (!(arr_33 [i_14] [(unsigned short)8])))))))));
                var_36 = ((/* implicit */unsigned int) var_10);
            }
            var_37 = ((/* implicit */unsigned short) -9205483688495264107LL);
        }
        /* vectorizable */
        for (unsigned int i_23 = 1; i_23 < 8; i_23 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
            arr_78 [4U] [i_23] = ((/* implicit */unsigned int) ((arr_54 [i_14] [i_14] [8U]) / (arr_12 [i_23] [i_14] [(unsigned char)4] [i_23 + 1])));
            var_39 = ((/* implicit */_Bool) var_5);
        }
        for (unsigned int i_24 = 1; i_24 < 8; i_24 += 1) /* same iter space */
        {
            var_40 = min((2039538647U), (((/* implicit */unsigned int) (_Bool)1)));
            var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)104))));
            arr_83 [i_14] [i_24] [i_24] = ((/* implicit */long long int) var_3);
            arr_84 [i_14] [i_24] [i_24] = ((/* implicit */short) ((unsigned long long int) ((_Bool) var_10)));
        }
        arr_85 [i_14] = ((/* implicit */int) var_13);
        arr_86 [i_14] = ((/* implicit */unsigned int) 1063460798);
        arr_87 [(short)3] = ((/* implicit */unsigned int) var_11);
    }
    var_42 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43459))))) ? (max((var_1), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */short) var_9)), (var_4)))), (min((((/* implicit */int) var_6)), (var_8))))))));
}
