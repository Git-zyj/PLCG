/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190169
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
    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((unsigned short) var_18))) : (((/* implicit */int) (signed char)-126))));
    var_21 = var_1;
    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) var_2)) ? (((21LL) - (((/* implicit */long long int) var_5)))) : (var_3)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        arr_2 [(unsigned short)3] [(unsigned short)3] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) - (7285985573218332133LL))) : (((((/* implicit */_Bool) 2781241529314841791LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5541413613824992579LL))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((signed char) min((arr_4 [i_0 - 1] [i_0] [i_0]), (((/* implicit */signed char) arr_3 [0])))));
            arr_5 [i_1] [i_1] [1LL] = ((/* implicit */short) arr_1 [i_1]);
        }
        for (signed char i_2 = 1; i_2 < 8; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    arr_14 [i_0] [i_2 + 1] [8] [i_4 - 1] = ((/* implicit */long long int) arr_13 [i_0] [i_0 - 2] [(short)6] [i_0] [8U]);
                    arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = ((long long int) (signed char)125);
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) arr_0 [i_2 + 1]);
                            var_25 = ((/* implicit */long long int) (signed char)(-127 - 1));
                            arr_20 [i_6] [i_5] [i_3] [i_2 + 1] [9LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_11 [i_5] [(signed char)0] [i_3 - 1] [i_2 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [4] [i_6] [8U] [i_3 - 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_11 [(signed char)7] [i_6] [i_3 - 1] [i_2 - 1]))))) : (((/* implicit */int) ((short) arr_13 [6LL] [i_6] [i_6] [i_3 - 1] [i_2 - 1])))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)126)), (arr_10 [i_3 - 1] [i_3] [(short)4]))))));
            }
            var_26 = ((/* implicit */int) (_Bool)0);
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                arr_26 [i_0] [i_2 - 1] [0LL] = ((/* implicit */short) arr_11 [i_7] [i_2] [i_2] [i_0 + 1]);
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [i_2 + 2] [i_2 - 1] [7LL] [i_0 + 1]) % (arr_22 [i_7] [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? (((/* implicit */long long int) arr_24 [i_7])) : (var_3)));
                arr_27 [i_0 - 1] [9LL] [i_2] [i_7] = ((/* implicit */signed char) (short)14215);
            }
        }
        var_28 ^= ((/* implicit */long long int) (short)3714);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_8] [(unsigned short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 2])) ? (arr_13 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1]) : (arr_13 [(short)8] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 2])));
            var_29 = ((/* implicit */unsigned short) var_4);
        }
        for (short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) arr_16 [i_9] [i_9] [i_9] [i_0] [(signed char)8] [i_9])) ? (((/* implicit */int) arr_30 [i_9])) : (((((/* implicit */int) arr_1 [i_0 - 2])) & (arr_13 [(short)7] [i_9] [i_9] [i_9] [i_9])))))) ? (arr_22 [i_0] [i_0] [(_Bool)1] [i_0 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0 - 1] [5])))) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_9])))))));
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 8; i_10 += 4) 
            {
                arr_40 [i_10 - 1] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_9] [7LL])) ? (((/* implicit */int) arr_7 [i_0 + 2] [(_Bool)1])) : (((((/* implicit */_Bool) arr_38 [i_0 + 1] [i_0] [i_0 + 1] [i_10 + 2])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [(short)3] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_9] [(signed char)5])))))))));
                arr_41 [i_0] [i_0] [i_0] = max((((/* implicit */long long int) var_7)), (min((arr_11 [i_10] [i_10] [i_10 - 2] [i_10 - 2]), (arr_11 [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 - 2]))));
                var_30 = arr_12 [i_10 + 2] [i_10] [i_9] [i_0];
            }
        }
    }
    for (short i_11 = 1; i_11 < 20; i_11 += 3) 
    {
        var_31 = arr_42 [i_11] [i_11];
        var_32 = (~(arr_42 [i_11] [i_11]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            var_33 = arr_50 [i_11] [i_11] [i_11] [i_11];
                            var_34 *= ((/* implicit */signed char) arr_44 [i_13] [(short)15]);
                            arr_56 [i_13] [i_13] = ((/* implicit */_Bool) (-(arr_50 [i_12 - 1] [i_14 + 1] [i_14 + 1] [i_14])));
                            var_35 = ((/* implicit */long long int) arr_43 [2U]);
                        }
                    } 
                } 
            } 
            arr_57 [i_11 - 1] [i_12 - 1] = ((/* implicit */short) (+(arr_55 [i_11 - 1] [i_12 - 1])));
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 20; i_16 += 4) 
            {
                for (int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    for (long long int i_18 = 4; i_18 < 19; i_18 += 4) 
                    {
                        {
                            arr_67 [i_16] [i_16] [i_17] = arr_55 [i_11 + 1] [i_11 + 1];
                            arr_68 [i_11 - 1] [i_11 - 1] [i_16] [i_17] [i_18 - 1] = ((/* implicit */short) arr_49 [i_16] [i_11]);
                        }
                    } 
                } 
            } 
        }
        var_36 = ((/* implicit */int) arr_64 [i_11] [i_11 + 1] [i_11 - 1] [20LL] [i_11] [i_11 + 1]);
    }
    for (short i_19 = 0; i_19 < 15; i_19 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            for (long long int i_21 = 1; i_21 < 11; i_21 += 3) 
            {
                {
                    arr_75 [i_19] [i_19] [i_19] = ((/* implicit */short) (-(max((1655578487), (((/* implicit */int) arr_72 [4U]))))));
                    arr_76 [i_19] [9] [9] [i_19] = ((/* implicit */unsigned int) arr_65 [i_21 + 4] [i_21] [i_19] [i_19] [i_19]);
                }
            } 
        } 
        arr_77 [i_19] [i_19] = ((/* implicit */_Bool) 1318646525U);
        arr_78 [i_19] = ((/* implicit */unsigned int) arr_58 [i_19] [i_19] [i_19] [i_19]);
        var_37 = arr_63 [i_19] [i_19] [(short)19];
    }
}
