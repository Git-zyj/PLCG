/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219847
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_3 [i_0 - 1]))));
            var_14 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_15 += ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_1] [i_3] [i_1]);
                        var_16 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0] [i_3 + 2] [i_2] [(unsigned char)1]);
                        var_17 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_0] [i_0 + 1] [i_3 + 2] [i_3]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_13 [i_4] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]);
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_18 += ((/* implicit */signed char) arr_0 [7U] [7U]);
                var_19 = ((/* implicit */int) arr_0 [(unsigned short)4] [i_4]);
                var_20 ^= ((/* implicit */unsigned int) arr_7 [i_4] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0] [4U]);
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_7] [i_5] = ((/* implicit */unsigned short) arr_0 [i_0 - 2] [i_0 - 2]);
                            var_21 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7]);
                            var_22 -= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0 - 2] [(unsigned short)7] [i_0 + 1] [i_0 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0 + 2]))));
                            var_24 = ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_5]);
                            arr_27 [(unsigned char)0] [6U] [6U] [i_8] [8] = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                var_26 ^= ((/* implicit */short) (-((-(arr_23 [i_0 - 2] [2U] [i_0 - 2] [i_0 + 2])))));
                var_27 -= ((/* implicit */short) arr_16 [7LL] [i_0 - 2] [i_10] [i_0]);
            }
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                arr_34 [i_0 - 1] [i_0 - 1] [i_11] = ((/* implicit */short) arr_6 [i_11] [i_4] [(unsigned char)2] [i_0 + 2] [(unsigned short)3]);
                arr_35 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0 + 2]);
                var_28 += ((/* implicit */unsigned char) arr_5 [i_0] [i_0 - 2]);
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (unsigned int i_13 = 1; i_13 < 7; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) arr_16 [i_13] [i_13] [i_13 + 4] [i_13 + 1]);
                            arr_41 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) arr_0 [i_13] [i_13]);
                            arr_42 [i_0] [i_0] [i_0] [i_12] [i_13] [i_0] = var_2;
                        }
                    } 
                } 
            }
            var_30 |= ((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0] [(unsigned short)10]);
        }
        var_31 ^= ((/* implicit */int) arr_24 [i_0 - 2]);
    }
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) arr_45 [i_14]))))));
        /* LoopNest 3 */
        for (unsigned short i_15 = 4; i_15 < 19; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) arr_49 [i_15] [i_15 + 3] [i_15 - 3]);
                        var_34 = ((/* implicit */signed char) arr_47 [i_17]);
                        var_35 -= ((/* implicit */unsigned char) arr_50 [i_16] [i_16] [i_16]);
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */long long int) var_12);
        /* LoopSeq 4 */
        for (short i_18 = 1; i_18 < 21; i_18 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */signed char) arr_46 [i_14] [i_18 + 1]);
                arr_61 [i_14] = ((/* implicit */unsigned long long int) arr_46 [i_18 - 1] [i_19 - 1]);
            }
            for (unsigned long long int i_20 = 2; i_20 < 21; i_20 += 4) /* same iter space */
            {
                arr_64 [i_14] [i_14] = ((/* implicit */signed char) var_5);
                arr_65 [i_14] [i_14] = ((/* implicit */int) arr_48 [i_14]);
                var_38 = var_12;
                arr_66 [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_62 [i_20] [i_20 - 2] [i_20 - 2] [i_20]))));
            }
            var_39 = ((/* implicit */int) max((var_39), ((~(arr_47 [i_18 - 1])))));
            arr_67 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) arr_45 [i_14]);
        }
        for (signed char i_21 = 1; i_21 < 20; i_21 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_22 = 1; i_22 < 21; i_22 += 1) 
            {
                arr_73 [i_14] [i_14] [i_22] = ((/* implicit */unsigned long long int) (~(arr_49 [i_21 + 2] [i_22 + 1] [i_22 - 1])));
                /* LoopNest 2 */
                for (signed char i_23 = 1; i_23 < 18; i_23 += 4) 
                {
                    for (int i_24 = 0; i_24 < 22; i_24 += 1) 
                    {
                        {
                            arr_79 [(unsigned short)5] [i_21] [(unsigned char)6] [i_24] [i_24] [i_24] = (~(((/* implicit */int) arr_76 [i_14] [i_21] [i_22 - 1] [i_22 - 1] [(signed char)17])));
                            var_40 &= ((/* implicit */unsigned char) arr_69 [i_22 + 1]);
                            var_41 = ((/* implicit */int) var_6);
                        }
                    } 
                } 
            }
            for (unsigned int i_25 = 0; i_25 < 22; i_25 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_26 = 2; i_26 < 21; i_26 += 4) 
                {
                    arr_84 [i_26] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29437))));
                    var_42 = ((/* implicit */unsigned int) arr_44 [i_14]);
                }
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 22; i_27 += 1) 
                {
                    for (int i_28 = 2; i_28 < 21; i_28 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */int) var_4);
                            arr_92 [i_14] [i_14] [i_28] [i_27] [i_28] = ((/* implicit */short) arr_83 [1] [i_28 - 2] [i_21 + 1] [9U]);
                        }
                    } 
                } 
            }
            for (unsigned int i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_75 [i_29] [(unsigned char)21] [i_29] [i_21 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_30 = 2; i_30 < 18; i_30 += 1) 
                {
                    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) arr_63 [i_30 + 1] [i_21] [i_21 + 2]))));
                    var_46 = ((/* implicit */short) var_6);
                }
            }
            var_47 |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_21 + 1] [i_21])))))));
            var_48 = ((/* implicit */int) arr_94 [i_14] [i_21] [i_21 - 1]);
            arr_98 [4] [4] = (-(arr_51 [i_14] [i_21 - 1] [i_21 + 1] [0]));
        }
        /* vectorizable */
        for (unsigned int i_31 = 0; i_31 < 22; i_31 += 1) /* same iter space */
        {
            var_49 -= ((/* implicit */unsigned int) var_7);
            /* LoopNest 3 */
            for (unsigned long long int i_32 = 2; i_32 < 21; i_32 += 4) 
            {
                for (unsigned short i_33 = 0; i_33 < 22; i_33 += 4) 
                {
                    for (int i_34 = 0; i_34 < 22; i_34 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */short) (+(arr_105 [i_14] [i_14] [i_14] [i_32 - 2])));
                            var_51 = ((/* implicit */unsigned int) arr_76 [i_32] [i_31] [16U] [i_33] [i_31]);
                            var_52 -= ((/* implicit */unsigned char) (~(arr_108 [i_14] [i_14])));
                            var_53 ^= ((/* implicit */int) arr_104 [i_32] [i_32 + 1] [i_32 - 1] [i_32 - 2]);
                        }
                    } 
                } 
            } 
            arr_109 [i_31] [i_31] [i_31] = ((/* implicit */long long int) var_5);
        }
        /* vectorizable */
        for (unsigned int i_35 = 0; i_35 < 22; i_35 += 1) /* same iter space */
        {
            arr_113 [i_35] [i_35] = ((/* implicit */unsigned int) (~(arr_102 [(signed char)18] [i_35])));
            var_54 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_35]))));
            var_55 -= (~(((/* implicit */int) arr_52 [i_14] [i_35] [i_14] [i_14])));
        }
        var_56 = ((/* implicit */int) var_4);
    }
    var_57 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
}
