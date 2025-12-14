/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228610
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
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) min((var_2), (((/* implicit */int) var_4))))))));
    var_14 = ((/* implicit */signed char) ((unsigned char) ((min((((/* implicit */unsigned int) var_1)), (var_7))) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((min((var_2), (((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6)))) + (1792))) - (10)))))));
    var_16 = ((/* implicit */short) ((signed char) ((int) var_12)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) min(((~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_18 = ((unsigned short) arr_0 [i_1 - 1]);
            var_19 = ((/* implicit */unsigned char) ((short) var_9));
        }
        /* vectorizable */
        for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((unsigned int) var_1));
            var_21 = ((/* implicit */signed char) ((int) ((unsigned short) arr_4 [i_0] [i_0] [20ULL])));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_22 = ((/* implicit */_Bool) arr_8 [(unsigned char)0] [i_3]);
                arr_9 [16U] [16U] [i_3] |= ((/* implicit */unsigned int) ((unsigned short) var_0));
            }
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                arr_13 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1] = var_6;
                var_24 = ((((_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0 + 1])) ? (arr_12 [i_2 + 1] [7ULL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)18] [i_0 + 2] [8]))))))));
                var_26 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_11 [i_0] [i_0] [i_0]))));
            }
        }
        for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                var_27 = ((/* implicit */int) var_7);
                /* LoopSeq 1 */
                for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), ((_Bool)1)));
                    var_29 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) && (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_6)))))))));
                }
            }
            for (short i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                arr_25 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */_Bool) arr_1 [i_0]);
            }
            for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                arr_28 [i_0] [i_5] [(signed char)13] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_10 = 2; i_10 < 21; i_10 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) var_0);
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1)))))))));
                    arr_32 [i_5] [i_9] = (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_9 - 1])));
                    arr_33 [i_0] [i_0] [(signed char)16] [i_0] [i_5] = ((/* implicit */unsigned short) ((((unsigned int) arr_2 [1LL])) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 20; i_11 += 3) 
                {
                    arr_37 [i_5] [10ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_9 - 1] [i_11 - 2])) && (((/* implicit */_Bool) var_8))));
                    var_33 *= ((/* implicit */unsigned char) ((short) arr_22 [i_9 - 1] [i_11 - 1]));
                    arr_38 [i_0 - 1] [i_5] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                }
            }
            for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_42 [i_0 + 1] [i_0 + 1] [12] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_12] [i_0] [i_0])) ? (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [11U] [0LL] [i_12]))) == (arr_22 [(unsigned char)9] [i_5])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5]))))))));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((long long int) arr_22 [i_12] [i_5 - 3])))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) 
            {
                arr_45 [i_5] [i_5] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 3; i_14 < 21; i_14 += 4) 
                {
                    for (int i_15 = 4; i_15 < 20; i_15 += 4) 
                    {
                        {
                            arr_52 [i_5] [i_14] [i_13] [i_13] [i_0] [i_0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [i_13 - 1] [i_13 - 1] [i_0 - 1]))));
                            arr_53 [i_15 + 2] [i_14] [(unsigned short)19] [i_5] [i_0] [i_13 - 1] [2LL] = ((/* implicit */_Bool) (+((+(var_2)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                var_35 ^= (((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0 + 1] [i_0 + 1] [i_5 - 1] [i_5] [i_5 - 1]))));
                var_36 &= ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    for (unsigned short i_18 = 2; i_18 < 21; i_18 += 3) 
                    {
                        {
                            var_37 = ((((/* implicit */int) ((arr_55 [i_5] [21] [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) <= (((((/* implicit */int) arr_7 [i_0] [2LL])) * (((/* implicit */int) (_Bool)1)))));
                            arr_61 [i_0 + 2] [i_5] [i_16] [9ULL] [i_18 + 1] [i_0] [i_5] = ((arr_11 [i_0] [i_17] [i_16]) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [5] [i_5 - 2]) == (((/* implicit */unsigned int) var_8)))))));
                            var_38 = ((/* implicit */short) (~(arr_30 [20] [i_17])));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                var_40 -= ((/* implicit */short) ((int) (~(((/* implicit */int) (_Bool)1)))));
            }
            arr_62 [i_0] [i_5] = ((/* implicit */unsigned char) ((((unsigned int) (_Bool)1)) ^ (((/* implicit */unsigned int) min((arr_39 [i_5] [i_5 - 3] [i_5 - 1]), (arr_39 [i_5] [i_5 + 1] [i_5 + 3]))))));
        }
        /* vectorizable */
        for (long long int i_19 = 2; i_19 < 19; i_19 += 4) 
        {
            arr_66 [i_0] [(short)12] &= ((/* implicit */short) var_3);
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 1; i_21 < 21; i_21 += 4) 
                {
                    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
                    {
                        {
                            var_41 -= ((/* implicit */short) arr_16 [(unsigned short)20] [i_22]);
                            var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(short)0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [(unsigned short)18] [(unsigned short)18] [(_Bool)1] [i_20] [i_21 + 1])) ? (((/* implicit */int) var_3)) : (var_8)));
                            arr_74 [i_21] [15LL] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_68 [20] [i_21 + 1] [i_19 - 1])) % (((/* implicit */int) arr_68 [i_22] [i_21 + 1] [i_19 - 1]))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_4))) != (((/* implicit */int) ((unsigned short) arr_69 [i_0] [i_0] [(unsigned char)3] [i_0 - 1])))));
                arr_75 [i_20] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                arr_76 [i_0] [i_0] = ((/* implicit */unsigned short) (!((!((_Bool)1)))));
                var_45 = ((/* implicit */long long int) ((signed char) var_12));
            }
            var_46 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_48 [i_0] [i_0] [i_19])))));
            arr_77 [i_0] [14] = ((/* implicit */short) arr_11 [i_0 - 1] [i_19] [18ULL]);
            var_47 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
        }
        var_48 = ((/* implicit */_Bool) ((unsigned char) var_8));
    }
    for (unsigned char i_23 = 2; i_23 < 8; i_23 += 3) 
    {
        arr_81 [i_23] = ((/* implicit */short) ((((min((var_8), (((/* implicit */int) var_6)))) * (((/* implicit */int) arr_35 [i_23 - 2])))) * (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) arr_7 [i_23 + 1] [i_23 + 1]))));
        var_50 = ((/* implicit */int) ((long long int) (((+(((/* implicit */int) var_9)))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4)))))));
        var_51 |= ((/* implicit */int) var_1);
        var_52 = ((/* implicit */_Bool) max((var_52), ((((+(min((((/* implicit */int) (_Bool)1)), (var_2))))) != (((/* implicit */int) arr_14 [i_23 + 2] [i_23 + 2] [i_23 + 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_24 = 3; i_24 < 21; i_24 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_25 = 1; i_25 < 21; i_25 += 4) 
        {
            arr_86 [i_25] = ((/* implicit */signed char) ((unsigned char) ((arr_83 [i_24]) - (var_7))));
            /* LoopSeq 2 */
            for (short i_26 = 2; i_26 < 21; i_26 += 3) /* same iter space */
            {
                var_53 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                var_54 = ((/* implicit */short) var_8);
            }
            for (short i_27 = 2; i_27 < 21; i_27 += 3) /* same iter space */
            {
                arr_91 [i_24] [i_25] [i_27 - 2] [i_25 + 2] = ((/* implicit */unsigned short) ((long long int) arr_83 [i_24 + 1]));
                var_55 = ((/* implicit */signed char) (_Bool)1);
            }
            var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) var_0))));
        }
        for (short i_28 = 1; i_28 < 22; i_28 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_29 = 1; i_29 < 21; i_29 += 3) 
            {
                for (int i_30 = 3; i_30 < 21; i_30 += 3) 
                {
                    {
                        var_57 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        arr_102 [i_29] [i_29] [i_29] [(unsigned char)19] [i_29] [i_29] = ((/* implicit */int) ((unsigned short) arr_89 [i_30 - 1] [i_30 - 1] [i_30 - 1] [i_30 - 1]));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_31 = 2; i_31 < 20; i_31 += 4) 
            {
                var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_5))))) * (((/* implicit */int) ((signed char) arr_104 [i_24] [i_28] [i_31 - 2])))));
                var_59 += ((/* implicit */_Bool) ((unsigned char) arr_85 [(short)22] [i_28 + 1] [i_31]));
            }
            for (unsigned long long int i_32 = 3; i_32 < 22; i_32 += 3) 
            {
                arr_109 [i_32] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))));
                var_60 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_61 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_90 [i_32 - 2] [i_24 - 2] [i_28 - 1]))));
                var_62 = ((/* implicit */unsigned short) (((((_Bool)1) ? (arr_92 [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_104 [i_24] [i_28] [(_Bool)1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
            for (int i_33 = 1; i_33 < 20; i_33 += 4) 
            {
                arr_112 [i_28] [6] [i_28] [i_28] |= ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                var_63 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_100 [i_33 + 1] [(unsigned short)18] [i_33]))));
                /* LoopNest 2 */
                for (long long int i_34 = 1; i_34 < 20; i_34 += 3) 
                {
                    for (unsigned char i_35 = 0; i_35 < 23; i_35 += 3) 
                    {
                        {
                            arr_120 [i_24] [i_33] [16] [i_33] [i_35] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((long long int) (_Bool)1))));
                            arr_121 [11] [21ULL] [i_33] [i_33] [i_35] [i_33] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_10))) * (((unsigned long long int) arr_115 [5LL] [i_28 + 1] [i_28] [15U] [18ULL] [18ULL]))));
                        }
                    } 
                } 
            }
            arr_122 [14ULL] [i_28] [i_28 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) var_5)))));
            var_64 = ((short) arr_96 [i_24] [i_28] [20] [i_24]);
        }
        arr_123 [15LL] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_116 [i_24] [(unsigned char)8] [(unsigned char)8] [i_24] [(unsigned char)8] [(short)0])) <= (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) ((_Bool) arr_95 [(unsigned char)2])))));
    }
}
