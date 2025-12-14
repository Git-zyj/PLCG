/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224858
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) 2147483647))))))) ? (((/* implicit */long long int) var_7)) : (var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (signed char i_4 = 3; i_4 < 9; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) arr_8 [i_3] [10LL]);
                            var_14 = ((/* implicit */short) arr_9 [i_2] [i_3]);
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_8 [i_4] [i_4])))) ? (((/* implicit */int) arr_13 [i_0] [i_4 - 1] [9ULL] [i_4 + 2] [i_4 - 3] [i_4 + 2] [0U])) : ((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */signed char) (+(arr_10 [i_0] [i_0])));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_18 [i_5 - 2] [i_1] [i_0] [i_0])) > (-2144250493))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))) % (arr_10 [i_0] [i_0])))) ? (((/* implicit */unsigned int) arr_1 [i_5 - 2])) : (arr_10 [i_1] [i_5 - 2])));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_5 + 1] [i_0] [i_1] [i_1] [i_0])) ? (arr_1 [i_6]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_5] [i_1])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_5] [i_0] [0U] [i_5])) : (2147483647)))));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                }
                for (int i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    var_21 = (signed char)-1;
                    var_22 = ((/* implicit */unsigned short) arr_3 [i_7] [i_7]);
                }
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5 - 3] [i_0])) ? (arr_7 [i_5] [i_5 + 1] [i_5 + 1] [i_5]) : (((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) (unsigned char)0)) : (2147483647)))));
            }
            for (int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        {
                            arr_31 [0LL] [i_9] = (+(2147483641));
                            var_24 = ((/* implicit */long long int) 8U);
                            arr_32 [i_0] [i_1] [i_0] [i_1] [i_10] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_7 [i_10 + 2] [(short)8] [i_10 - 1] [i_10 - 1])) != (8U)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_25 = ((/* implicit */int) (-(arr_16 [i_0] [i_0] [i_0])));
                    var_26 = ((/* implicit */short) var_6);
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_1]);
                        arr_42 [i_0] [i_0] [6LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(arr_1 [i_12])));
                        var_27 = ((/* implicit */unsigned int) arr_4 [i_0] [i_12] [i_13]);
                        var_28 = (((_Bool)1) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_12] [i_13])) : (((/* implicit */int) arr_28 [i_0] [i_0] [5ULL])));
                    }
                    var_29 = ((/* implicit */signed char) -1);
                }
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            arr_47 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_14] [i_1]))));
                            var_30 = ((((/* implicit */_Bool) arr_19 [10ULL] [i_0] [i_0] [i_8] [i_14] [i_15])) ? (((/* implicit */int) arr_19 [i_15] [(signed char)2] [i_14] [i_8] [i_1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_8] [(signed char)0] [i_8] [(signed char)0])));
                            arr_48 [i_0] [i_1] [i_1] [i_0] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [3LL] [3LL])) ? (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28933)))))));
                        }
                    } 
                } 
            }
            for (short i_16 = 1; i_16 < 9; i_16 += 2) 
            {
                arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_20 [i_0] [i_0] [i_0] [i_0] [i_16 - 1]) ^ (((/* implicit */unsigned long long int) arr_44 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1]))));
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(arr_45 [i_16] [i_16 + 2] [i_16] [(short)11] [i_16 + 3]))))));
                var_32 = ((/* implicit */long long int) ((((arr_33 [(_Bool)1] [i_16] [i_1] [i_0]) + (2147483647))) << (((6ULL) - (6ULL)))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)22)))) : (var_2)));
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (short i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_1] [i_1] [i_1]))));
                        arr_58 [i_18] [4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32742)) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [(signed char)6] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) (+(var_4))))));
                        var_34 = arr_24 [i_1] [i_1];
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_17] [(short)7]))))) : ((~(((/* implicit */int) arr_29 [i_0] [i_1] [i_17]))))));
                    }
                } 
            } 
        }
        for (int i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */long long int) arr_56 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 3 */
            for (unsigned char i_20 = 3; i_20 < 9; i_20 += 2) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned long long int) arr_50 [i_0] [i_19] [i_19] [i_20 - 1]);
                var_38 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_20 [i_0] [i_0] [i_0] [i_0] [(signed char)11]))));
                var_39 = ((/* implicit */unsigned int) arr_62 [i_0] [i_19] [i_20]);
            }
            for (unsigned char i_21 = 3; i_21 < 9; i_21 += 2) /* same iter space */
            {
                arr_68 [i_19] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_12 [i_19] [i_19] [i_19] [i_19] [i_0] [i_21 - 1])) ? (4294967287U) : (((/* implicit */unsigned int) -1))))));
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 12; i_22 += 2) 
                {
                    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        {
                            arr_73 [i_0] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) arr_63 [i_23] [i_0] [i_0] [i_0])) ^ (((((/* implicit */_Bool) arr_60 [i_21] [i_22] [i_22])) ? (((/* implicit */int) arr_52 [i_22] [i_19] [i_22] [i_22])) : (((/* implicit */int) arr_4 [i_0] [i_19] [i_0]))))));
                            arr_74 [i_0] [i_0] [i_0] [i_0] [i_19] [i_0] = ((/* implicit */unsigned int) var_5);
                            arr_75 [i_0] [i_19] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_11)) : (arr_30 [i_19] [i_21] [i_21] [i_19] [(signed char)11])))));
                            arr_76 [i_0] [i_19] [i_0] [(signed char)1] [i_22] [i_23] = ((/* implicit */_Bool) (~(-1)));
                        }
                    } 
                } 
                var_40 = ((/* implicit */long long int) (signed char)(-127 - 1));
                var_41 = ((((/* implicit */_Bool) (signed char)-1)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((-1) ^ (((/* implicit */int) arr_60 [i_0] [4U] [i_0]))))));
                var_42 = (~(((unsigned int) arr_25 [i_0] [i_19] [i_19] [i_21 - 3])));
            }
            for (unsigned char i_24 = 3; i_24 < 9; i_24 += 2) /* same iter space */
            {
                arr_80 [i_19] [i_19] [i_0] = ((/* implicit */_Bool) var_8);
                var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_24] [i_24 - 1] [i_24] [i_24 - 3]))));
                var_44 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_20 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 3] [i_24 + 3]));
            }
        }
        for (int i_25 = 1; i_25 < 10; i_25 += 3) 
        {
            var_45 = (!((!(((/* implicit */_Bool) var_6)))));
            var_46 = ((/* implicit */signed char) var_11);
        }
        var_47 = ((/* implicit */int) (signed char)(-127 - 1));
    }
    for (unsigned int i_26 = 0; i_26 < 18; i_26 += 1) 
    {
        arr_87 [i_26] [i_26] = -1;
        arr_88 [i_26] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (~(arr_85 [i_26])))), (arr_86 [i_26])))));
    }
}
