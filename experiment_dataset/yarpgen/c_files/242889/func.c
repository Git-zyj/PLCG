/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242889
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_11 = (_Bool)1;
                                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3] [i_3 - 2])) ? (((arr_11 [i_0] [12LL] [i_2] [10]) >> (((arr_6 [8ULL] [(unsigned short)4] [i_2] [i_3]) - (16880810030095116553ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (unsigned short)65535)) ? (-4050238646888141111LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (unsigned short)1008))));
                            }
                        } 
                    } 
                } 
                var_14 -= ((/* implicit */signed char) arr_9 [i_0] [6LL] [i_0] [i_1] [14]);
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [8])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) ^ ((-(((/* implicit */int) (unsigned char)20))))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_13 [(_Bool)1] [(_Bool)0] [(_Bool)0] [(_Bool)0] [(unsigned short)14] [i_1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (_Bool)1))))) ? (0U) : (arr_15 [i_5] [i_5])));
        var_16 = ((/* implicit */short) (-(-90049457)));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_6] [i_5] [i_5])) : (((((/* implicit */int) arr_18 [i_6] [i_5] [i_5])) + (((/* implicit */int) arr_18 [i_5] [i_5] [i_5]))))));
            var_18 = ((/* implicit */unsigned short) arr_17 [i_5] [i_5] [6U]);
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_21 [i_6] [i_5] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_7] [i_6] [i_5])) : (((/* implicit */int) arr_20 [i_7] [i_6] [i_5]))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_27 [(unsigned char)16] [i_7] [i_7] [i_8] [i_5] [i_8] [11] = (_Bool)1;
                            var_19 = arr_19 [i_5] [i_5] [i_5];
                            var_20 = ((/* implicit */unsigned char) -90049457);
                            arr_28 [i_9] [i_5] [i_8] [(unsigned char)2] [i_5] [i_5] = ((/* implicit */short) arr_18 [i_5] [i_5] [20U]);
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */short) -90049457);
            }
            for (short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                var_22 -= ((/* implicit */unsigned long long int) arr_18 [i_5] [i_6] [i_10]);
                arr_32 [i_5] = ((/* implicit */unsigned char) arr_19 [i_6] [(unsigned short)16] [i_10]);
                arr_33 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != ((~(((/* implicit */int) arr_17 [i_10] [i_10 + 3] [i_10]))))));
                var_23 = ((/* implicit */unsigned short) arr_17 [i_10] [i_6] [12ULL]);
            }
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    var_24 = ((/* implicit */signed char) (unsigned short)255);
                    var_25 = ((/* implicit */short) (unsigned char)0);
                    /* LoopSeq 3 */
                    for (signed char i_13 = 2; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (signed char)63))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5] [9U] [9U]))))) ? (((((/* implicit */_Bool) 7)) ? (491520U) : (4294475760U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9276)))));
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_13] [i_12] [i_5] [i_6] [i_5]))));
                        arr_41 [(signed char)15] [i_5] [i_13] = ((/* implicit */unsigned char) arr_22 [1LL] [(signed char)15] [(signed char)15] [i_12] [i_5]);
                    }
                    for (signed char i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) (short)255);
                        var_30 = ((3U) - (((((/* implicit */_Bool) arr_29 [i_6] [i_5] [i_12])) ? (((/* implicit */unsigned int) 6)) : (4294967290U))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_30 [i_14 - 2]))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_5] [i_6] [i_5] [3])) ? (arr_43 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14] [i_14 - 1] [i_14 + 1])))));
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (signed char)115);
                        var_34 = ((/* implicit */unsigned short) 3333870050U);
                    }
                    arr_47 [i_11] [i_5] [(unsigned char)18] [i_5] = ((/* implicit */short) ((((3333870050U) >> (((((/* implicit */int) arr_22 [i_5] [i_11] [i_11] [i_6] [i_5])) + (71))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [20U] [(_Bool)0] [i_5] [14LL] [(short)16])) ? (((/* implicit */int) arr_31 [i_12] [i_11] [5LL])) : (((/* implicit */int) arr_24 [6] [8] [i_11] [(_Bool)1] [(unsigned short)20] [i_11])))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-123)) & ((-2147483647 - 1))));
                }
                var_36 = ((/* implicit */unsigned int) arr_19 [(_Bool)1] [(_Bool)1] [i_11]);
            }
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                var_37 = ((((/* implicit */_Bool) arr_34 [i_16] [i_6] [i_5] [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_5]))) : (((((/* implicit */_Bool) arr_30 [(short)5])) ? (((/* implicit */long long int) 502101686)) : (arr_43 [i_16] [i_5] [(signed char)6]))));
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 1) 
                    {
                        {
                            arr_56 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (short)-290)) ^ (((/* implicit */int) arr_38 [i_18] [i_17] [i_17] [i_16] [(short)9] [i_6] [i_5]))));
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_20 [i_6] [i_6] [i_5]))));
                            var_39 = ((/* implicit */signed char) arr_30 [i_16]);
                            var_40 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) ? ((~(((/* implicit */int) arr_22 [i_17] [(short)4] [16ULL] [i_17] [i_6])))) : (((/* implicit */int) arr_54 [i_16] [0] [i_16] [i_6] [(unsigned char)16] [i_16]))));
                            var_41 = ((/* implicit */unsigned short) arr_29 [i_5] [i_5] [i_17]);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                for (unsigned short i_20 = 2; i_20 < 17; i_20 += 2) 
                {
                    for (signed char i_21 = 4; i_21 < 19; i_21 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [(short)6] [(unsigned char)10] [i_19] [(short)6] [i_20 + 2] [i_20] [i_21 + 2])) ? (arr_58 [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (((((/* implicit */_Bool) (signed char)127)) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_21] [6] [7LL])) : (((/* implicit */int) arr_62 [(unsigned short)7] [(unsigned char)1] [i_19] [i_20] [i_21]))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)172)) ? (arr_46 [8ULL] [i_6] [(_Bool)1] [14U] [8ULL]) : (((/* implicit */int) arr_54 [i_5] [i_20 + 2] [(unsigned char)8] [i_19] [i_5] [i_5])))))))));
                            arr_64 [i_21] [i_21] [i_5] = ((/* implicit */int) (_Bool)1);
                            arr_65 [i_5] [i_5] [i_20] = ((/* implicit */unsigned int) arr_59 [i_5] [i_6] [i_21 - 4] [i_21] [i_20 + 2]);
                            arr_66 [i_5] [16LL] [i_6] [i_19] [i_19] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 2147483645)) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_19] [13ULL] [i_19] [i_19] [i_19])) & (2147483645)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */long long int) ((/* implicit */int) (short)7))) ^ (853763487626220762LL)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_22 = 0; i_22 < 21; i_22 += 1) 
        {
            var_43 = ((/* implicit */int) (signed char)-105);
            /* LoopSeq 2 */
            for (unsigned short i_23 = 0; i_23 < 21; i_23 += 1) 
            {
                arr_74 [i_5] [i_5] [i_23] = ((/* implicit */unsigned long long int) arr_59 [i_5] [i_5] [i_5] [i_5] [i_5]);
                /* LoopSeq 1 */
                for (unsigned short i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_23] [i_23])) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) arr_36 [i_22] [i_5]))))) ? (((((/* implicit */int) arr_36 [1U] [i_22])) % (((/* implicit */int) arr_36 [i_22] [i_24])))) : (((/* implicit */int) arr_36 [2U] [i_5]))));
                    arr_77 [5U] [i_5] [i_23] = arr_39 [(_Bool)1] [(unsigned short)9] [(_Bool)1] [i_22] [i_22] [i_23] [i_22];
                    var_45 ^= ((((/* implicit */_Bool) arr_25 [(unsigned char)9] [i_22] [(unsigned char)15] [i_22] [i_22])) ? ((~(((/* implicit */int) (unsigned char)144)))) : (((/* implicit */int) (signed char)124)));
                }
                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [(unsigned short)6] [i_5] [i_23] [12ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_5] [i_22] [i_22] [i_22] [i_22] [i_5] [i_23]))))) : (((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
            {
                arr_81 [i_5] [i_5] [i_25] = ((/* implicit */signed char) (unsigned short)0);
                var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_5] [i_25 + 1] [i_25 + 1] [i_25 + 1] [(_Bool)1])) || (((/* implicit */_Bool) arr_59 [i_5] [i_25 + 1] [i_25 + 1] [9U] [i_25 + 1]))));
                var_48 = ((/* implicit */signed char) 3502619912U);
                arr_82 [i_5] [i_5] [(signed char)13] [i_5] = (-2147483647 - 1);
            }
            var_49 = ((/* implicit */unsigned char) arr_67 [i_5] [i_22] [i_22]);
            /* LoopNest 3 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (int i_27 = 2; i_27 < 20; i_27 += 1) 
                {
                    for (unsigned int i_28 = 2; i_28 < 20; i_28 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_5] [i_22] [i_27] [(signed char)19]))))) ? ((-(((((/* implicit */_Bool) (unsigned char)252)) ? (2147483647) : (((/* implicit */int) (signed char)-110)))))) : (((/* implicit */int) arr_55 [i_5]))));
                            var_51 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) | (arr_52 [i_26] [(unsigned short)0] [i_26] [i_28])))) ? (((((/* implicit */_Bool) 9U)) ? (arr_30 [4U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))))) : (((/* implicit */unsigned long long int) -853763487626220763LL))))) ? (((/* implicit */int) arr_51 [i_5] [i_22] [i_26] [i_27] [i_28] [i_26])) : (((/* implicit */int) (unsigned char)5))));
                            var_52 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_26] [i_27] [i_28 + 1]))))) ? (2108357373U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)121)))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
