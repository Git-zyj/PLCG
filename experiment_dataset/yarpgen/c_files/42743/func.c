/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42743
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) arr_1 [(unsigned short)12] [i_0 - 2]);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_18 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_3 [i_2]);
                var_19 = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1]);
            }
            for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                arr_10 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1] [i_0 - 2]))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1 - 1] [i_3 - 1] [i_3])))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_0 [i_3])))))));
            }
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_5 = 4; i_5 < 11; i_5 += 2) 
                {
                    var_22 = ((/* implicit */long long int) arr_16 [i_5 - 3] [i_4 + 1] [i_1 + 1] [i_0]);
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_5 - 2] [i_4] [i_1] [i_0])))))));
                    var_24 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)2]);
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                    {
                        var_25 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0 + 2]))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0 + 2] [i_4]))))))))));
                        arr_23 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) (~(arr_21 [i_0] [(short)1] [i_1] [(unsigned char)7] [i_4 + 2] [i_6] [5U])));
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_7] [i_6] [i_0]);
                        arr_24 [(short)3] [(_Bool)1] [i_4] [i_6] [i_7] = ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]))));
                    }
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) arr_22 [i_0] [i_1 - 1] [i_4] [(_Bool)1] [i_8]);
                        arr_29 [i_0 + 1] [i_1] [i_8] [4] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_18 [i_1 + 1] [i_8] [5] [i_8]);
                        var_29 = ((/* implicit */unsigned int) arr_11 [i_4 - 2] [i_1 + 1] [i_0 - 1] [i_0]);
                    }
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_17 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0 + 2]))));
                    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_0 - 2] [i_1] [i_1 - 1] [i_4 + 2]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 1) 
                    {
                        var_32 ^= ((/* implicit */short) (+(((/* implicit */int) arr_22 [i_4] [i_6] [i_9 - 2] [i_9 - 4] [(short)2]))));
                        var_33 = ((/* implicit */long long int) arr_2 [i_1 + 1] [5LL] [5LL]);
                        var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_0 - 2] [i_0]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_35 ^= ((/* implicit */unsigned char) (~((~(arr_20 [i_10] [i_6] [(short)11] [i_1] [i_1 + 1] [i_0])))));
                        arr_34 [i_0] [i_10] [i_0 + 2] [i_1] [i_0 + 2] [i_6] [i_10] = ((/* implicit */short) (~(arr_13 [i_4 + 2] [i_1 + 1] [i_4])));
                        arr_35 [(unsigned char)4] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_6] [i_1] [i_0 - 1] [i_6] [i_1 + 1]))));
                        var_36 = ((/* implicit */_Bool) arr_32 [i_0 + 2] [i_4 + 1] [i_6] [i_10] [i_10]);
                        arr_36 [i_0] [i_1] [8ULL] [0U] [i_10] [i_6] [i_10] = ((/* implicit */short) (-(arr_33 [10U] [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 2] [i_4])));
                    }
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_0 + 2]))));
                        var_38 = (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 1] [i_6] [i_11])));
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) arr_22 [i_0] [i_1 - 1] [i_4 + 2] [i_6] [i_0]))));
                    }
                }
                for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    var_40 |= arr_16 [i_1] [i_1 - 1] [i_1] [i_1 + 1];
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0] [i_0 + 1]);
                        arr_44 [i_0] [12ULL] [i_4 - 1] [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_43 [i_0 + 3] [i_1 + 1] [i_1 - 1] [i_4 - 1] [i_4]);
                        var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_13]))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_4 - 1]))));
                        var_44 = ((/* implicit */unsigned long long int) (~(arr_31 [i_12] [i_0 + 2] [i_1 + 1] [(unsigned char)0] [(signed char)9])));
                    }
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_15] [i_4 + 2] [i_0 + 2] [i_0 + 2])))))));
                        var_46 = (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1])));
                    }
                    var_47 = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_4 - 1] [i_12] [i_12]))));
                }
                for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_19 [i_4 - 2] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 1) 
                    {
                        var_49 = ((/* implicit */short) arr_43 [(signed char)12] [i_0 + 2] [i_0 + 3] [i_0 + 1] [1LL]);
                        var_50 *= ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_0 + 1] [i_1 - 1] [i_4 - 2] [i_4] [i_17]))));
                    }
                    var_51 = ((/* implicit */signed char) arr_28 [i_0] [i_1] [i_1] [i_16] [i_4]);
                    /* LoopSeq 4 */
                    for (short i_18 = 3; i_18 < 13; i_18 += 1) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned short) arr_0 [i_18 - 2]);
                        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) arr_42 [i_1 + 1]))));
                        arr_55 [13ULL] [i_16] [i_4] [(short)0] [i_4 - 2] = ((/* implicit */short) (+((-(((/* implicit */int) arr_53 [i_0] [i_1] [i_4 + 2] [i_16] [i_18]))))));
                    }
                    for (short i_19 = 3; i_19 < 13; i_19 += 1) /* same iter space */
                    {
                        arr_60 [i_4] [i_4] |= ((/* implicit */unsigned short) arr_12 [i_0 + 3] [i_4] [(_Bool)1]);
                        var_54 = ((/* implicit */short) arr_43 [i_19] [i_16] [i_4 - 1] [i_1 + 1] [i_0]);
                    }
                    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_0 + 3] [i_4 + 1] [i_4 + 1] [i_20])))))));
                        var_56 = ((/* implicit */unsigned short) arr_37 [i_0 - 1] [i_1] [i_4] [i_16] [i_20]);
                        arr_63 [i_0] [i_16] [i_16] = ((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_1] [i_4] [i_4] [i_16] [i_20]);
                        var_57 = ((/* implicit */long long int) arr_49 [i_16] [i_16] [i_16]);
                    }
                    for (unsigned char i_21 = 1; i_21 < 13; i_21 += 3) 
                    {
                        var_58 = (!(((/* implicit */_Bool) arr_50 [i_0 - 2] [i_1 + 1] [i_16] [i_16])));
                        arr_66 [i_16] [8ULL] [i_16] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_4 + 2]))));
                        arr_67 [(unsigned char)7] [(unsigned char)7] [i_4] [i_16] [i_16] [i_21] = ((/* implicit */unsigned short) arr_20 [i_0] [i_1] [i_4] [i_4 - 1] [i_16] [i_21]);
                    }
                }
                /* LoopSeq 2 */
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    var_59 += ((/* implicit */unsigned long long int) (~(arr_19 [i_0] [i_0 + 2] [i_22 - 1] [i_22] [i_22])));
                    var_60 = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_1 - 1] [11ULL] [i_1 - 1]))));
                }
                for (int i_23 = 0; i_23 < 14; i_23 += 1) 
                {
                    var_61 = ((/* implicit */signed char) arr_14 [i_0 - 1] [i_0] [i_1 + 1]);
                    var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) arr_33 [i_0] [i_0 + 3] [(unsigned char)6] [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_4 + 1]))));
                    var_63 ^= arr_30 [i_1] [i_23];
                }
                var_64 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_38 [i_4] [(_Bool)1] [i_0] [i_1 + 1] [i_0]))));
                var_65 = ((/* implicit */unsigned int) (-(arr_33 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0 - 2] [(signed char)2] [i_4 + 2])));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_25 = 0; i_25 < 14; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_26 = 0; i_26 < 14; i_26 += 1) 
                    {
                        var_66 = ((/* implicit */unsigned short) arr_12 [i_0 - 2] [i_0] [i_1 - 1]);
                        var_67 = ((/* implicit */long long int) arr_9 [i_1 + 1] [i_24] [i_26]);
                        var_68 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0 + 3] [13ULL] [(signed char)3] [i_0 - 1])))))));
                        var_69 = ((/* implicit */long long int) arr_4 [i_1] [i_24]);
                    }
                    var_70 &= ((/* implicit */unsigned int) arr_51 [i_0] [i_0 + 1] [i_25] [i_25] [i_25]);
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_82 [i_24] = ((/* implicit */short) (~(((/* implicit */int) arr_43 [i_0 - 2] [i_1 + 1] [i_1 - 1] [i_24] [i_24]))));
                    var_71 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_51 [i_27] [i_24] [i_1 - 1] [i_1] [i_0 + 1]))));
                }
                arr_83 [i_0] [(unsigned short)2] [(unsigned short)12] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_1 + 1] [i_1 - 1] [i_1 - 1] [(unsigned short)6] [i_1 - 1]))));
                arr_84 [i_24] [i_0] [i_1 + 1] [i_24] = arr_1 [i_0 - 1] [i_1 - 1];
            }
        }
        for (unsigned char i_28 = 1; i_28 < 13; i_28 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_29 = 0; i_29 < 14; i_29 += 1) 
            {
                for (short i_30 = 0; i_30 < 14; i_30 += 4) 
                {
                    {
                        arr_94 [i_30] [i_29] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_69 [i_30] [i_30] [i_28] [i_28] [i_30]))));
                        var_72 = ((/* implicit */unsigned long long int) arr_61 [i_30] [i_28] [i_0 + 2] [i_0] [i_0]);
                        var_73 &= arr_80 [i_0 - 1] [i_30] [i_29];
                    }
                } 
            } 
            arr_95 [i_28 - 1] |= ((/* implicit */short) (-(arr_19 [i_28] [i_0 + 2] [(unsigned char)10] [i_28 - 1] [i_28 - 1])));
            var_74 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_28 - 1] [i_28 - 1]))));
            arr_96 [(signed char)11] [i_0] = ((/* implicit */long long int) (~(arr_52 [i_0] [i_0] [(unsigned char)6] [0U] [i_28])));
        }
        arr_97 [i_0] = arr_89 [i_0];
        var_75 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0]);
        var_76 -= ((/* implicit */signed char) (-(arr_57 [i_0] [i_0 + 2] [i_0] [i_0] [4ULL])));
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        var_77 = ((/* implicit */unsigned char) arr_56 [(unsigned char)6] [(_Bool)0] [i_31] [i_31] [i_31]);
        var_78 = ((/* implicit */signed char) (~(arr_41 [i_31] [i_31] [i_31] [i_31] [i_31])));
    }
    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
    {
        arr_103 [3LL] [i_32] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_102 [i_32])))))));
        var_79 = ((/* implicit */long long int) (+(((/* implicit */int) arr_102 [i_32]))));
        var_80 = ((/* implicit */short) arr_101 [i_32]);
        arr_104 [i_32] = ((/* implicit */unsigned long long int) arr_102 [i_32]);
    }
    var_81 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    var_82 = ((/* implicit */unsigned int) var_2);
}
