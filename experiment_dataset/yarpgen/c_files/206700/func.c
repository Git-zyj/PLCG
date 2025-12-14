/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206700
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((short) arr_8 [i_0] [i_0] [(signed char)6] [i_3] [i_4] [i_4]));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)12)) >> (((/* implicit */int) (unsigned char)10))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [(unsigned char)2] [i_1] [i_2] [i_3])) <= (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                            var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned char)230)) == (var_2))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_1] [i_1] [i_0] [i_0] [(signed char)10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0] [i_0]))) : (var_3)));
            arr_13 [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) / (1102372102)));
            var_23 = ((/* implicit */_Bool) ((long long int) arr_10 [i_0]));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((long long int) arr_14 [i_0]));
            /* LoopSeq 1 */
            for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_22 [i_5] [i_6 - 1] [i_6] [i_6] [i_8] [i_6 - 1] [i_5])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) var_0)))))))));
                        var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_6 + 1]))));
                        var_27 += ((/* implicit */signed char) (unsigned char)246);
                    }
                    arr_23 [i_5] [i_6 + 1] [8] = ((int) arr_9 [i_0] [i_5] [i_6] [i_6 + 2] [i_6] [i_6 - 2]);
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        var_28 = var_10;
                        arr_27 [i_0] [i_5] [i_5] [i_0] [i_9 + 1] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_5] [i_7])) ? (((/* implicit */long long int) (~(2147483647)))) : (-8235973197850098982LL)));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_32 [i_0] [i_5] = ((((/* implicit */int) arr_26 [i_10] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_10] [i_6 + 2])) - (((/* implicit */int) arr_29 [i_6] [i_6 + 2] [i_6] [i_7] [i_10])));
                        arr_33 [i_0] = ((/* implicit */signed char) ((short) var_14));
                        arr_34 [i_6] [i_7] [i_6] [i_5] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_7] [i_6 + 2] [i_10]))));
                        var_29 = (-(((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */int) arr_11 [i_0])) : (-2054154720))));
                    }
                }
                for (short i_11 = 1; i_11 < 8; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_30 = arr_3 [i_0] [i_5];
                        var_31 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_20 [i_0] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6 + 2]))))))));
                        var_32 = (((+(((/* implicit */int) arr_31 [(signed char)7] [(signed char)7] [i_6] [(signed char)7] [(signed char)7])))) & (((/* implicit */int) arr_8 [i_12] [i_12] [i_11 + 3] [i_11] [i_11 + 2] [i_6])));
                        arr_39 [i_12] [i_0] [i_11 - 1] [i_5] [i_6] [i_5] [i_0] = ((/* implicit */long long int) (~(arr_15 [(unsigned char)3])));
                    }
                    for (short i_13 = 3; i_13 < 10; i_13 += 4) 
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) > (arr_15 [i_6 - 2]))))));
                        var_34 = arr_25 [i_0] [i_13] [0] [i_11] [i_11];
                    }
                    arr_43 [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)12)) && (arr_8 [i_6] [i_6] [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 1])));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */int) arr_29 [i_6 - 2] [i_11 + 2] [i_11] [i_11 + 3] [(signed char)7])) : (((/* implicit */int) arr_29 [i_6 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 4] [i_11]))));
                        var_36 = (!(((/* implicit */_Bool) (-(var_16)))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((unsigned char) arr_28 [i_0] [i_11 + 4] [i_11 + 3] [i_11] [i_6 + 1])))));
                    }
                }
                for (short i_15 = 1; i_15 < 8; i_15 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) var_6);
                    var_39 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_46 [i_0] [(_Bool)1])) - (94))))) > (((/* implicit */int) arr_28 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_15 + 3] [i_15]))));
                    var_40 = ((signed char) ((((/* implicit */int) arr_26 [i_15] [i_5] [(_Bool)0] [i_5] [(_Bool)1] [i_5])) * (((/* implicit */int) arr_31 [i_6 - 1] [i_6 - 1] [i_5] [7LL] [i_0]))));
                    var_41 |= -1735746620113070884LL;
                    /* LoopSeq 3 */
                    for (int i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -1121078350)) ? (arr_50 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                        var_43 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */int) var_5))))));
                        arr_53 [i_0] [i_15] [i_15] [i_15 + 3] [(unsigned char)8] [i_16] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6 + 2])) ? (((/* implicit */int) arr_16 [i_16 - 1] [i_15 + 3] [i_6 - 2] [i_6 - 1])) : (((/* implicit */int) var_8))));
                    }
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((arr_5 [i_5] [i_6 + 1] [i_6 + 1] [i_15 + 3]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_36 [i_6 - 2])) ? (-1806575679) : (((/* implicit */int) var_13)))) + (1806575689))))))));
                        arr_56 [i_15] [i_15] [i_6] [i_6] [i_17] [i_17] [i_15] = ((/* implicit */signed char) var_7);
                        arr_57 [i_0] [i_0] [i_6] [i_15] [i_15] = ((/* implicit */long long int) ((short) var_15));
                        var_45 = ((/* implicit */int) ((((/* implicit */int) arr_49 [i_15 + 2] [i_15 + 2] [i_15] [i_15 + 4])) >= (((/* implicit */int) arr_49 [i_15 + 2] [i_15 + 2] [i_15 + 2] [i_15]))));
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((var_3) + (((/* implicit */long long int) arr_37 [(unsigned char)4] [i_5] [(unsigned char)4] [i_15 + 2])))) != (((/* implicit */long long int) 2147483647)))))));
                    }
                    for (int i_18 = 4; i_18 < 11; i_18 += 4) 
                    {
                        var_47 = ((/* implicit */signed char) arr_30 [0LL] [i_5] [i_18 - 4]);
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (+(((((/* implicit */_Bool) arr_37 [i_0] [i_0] [(unsigned char)7] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : ((-9223372036854775807LL - 1LL)))))))));
                        var_49 = ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_6] [i_6 - 1] [i_6 - 1] [(signed char)10] [i_6 - 1]))));
                        var_50 = ((/* implicit */unsigned char) (signed char)-108);
                    }
                }
                for (short i_19 = 1; i_19 < 8; i_19 += 4) /* same iter space */
                {
                    var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 2; i_20 < 11; i_20 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned char) (+(((int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_19] [i_20]))));
                        var_53 = ((/* implicit */_Bool) var_18);
                        arr_65 [i_0] [i_0] [i_0] [i_6 + 1] [i_19 + 4] [i_6 + 1] = ((/* implicit */int) (!(arr_35 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_19 + 4])));
                    }
                    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) arr_63 [i_19] [i_19] [i_6 + 1] [i_19 + 3]))));
                }
                var_55 *= ((/* implicit */short) arr_6 [i_0] [i_5] [(_Bool)1] [4]);
            }
            /* LoopSeq 1 */
            for (long long int i_21 = 0; i_21 < 12; i_21 += 4) 
            {
                var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [(_Bool)1] [i_5] [i_5] [i_5] [i_5])) ? (arr_45 [i_0] [i_5] [i_0] [i_5] [i_0]) : (arr_45 [(_Bool)1] [(_Bool)1] [i_5] [i_21] [(unsigned char)8]))))));
                var_57 = ((/* implicit */_Bool) var_10);
                var_58 = ((/* implicit */int) arr_20 [i_5] [i_21]);
            }
        }
        for (int i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
        {
            var_59 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_71 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) | (((/* implicit */int) ((_Bool) var_14)))));
            var_60 = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_22] [i_22] [i_0]))));
            var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [8] [8] [i_22] [i_22])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)245))));
        }
        for (int i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
        {
            var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_0]))));
            var_63 |= ((/* implicit */short) ((arr_67 [i_0] [i_0] [i_0]) - (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
            var_64 = ((/* implicit */long long int) arr_11 [i_0]);
        }
        var_65 = ((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [4] [i_0] [i_0] [i_0])) < (((/* implicit */int) var_15))));
        arr_76 [(short)11] = ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))))));
        var_66 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned char)255))) >> (((((/* implicit */int) arr_30 [i_0] [i_0] [i_0])) - (26)))));
    }
    /* LoopNest 2 */
    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
    {
        for (long long int i_25 = 1; i_25 < 20; i_25 += 4) 
        {
            {
                arr_83 [i_24] [i_24] = ((/* implicit */short) min((((((/* implicit */int) arr_77 [i_25 + 1] [i_24])) * (((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_78 [i_24] [i_24]))))));
                arr_84 [i_24 - 1] [i_24] [(_Bool)1] = ((/* implicit */long long int) arr_77 [i_24 - 1] [i_24]);
                var_67 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_79 [i_24] [i_25]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_80 [i_24])))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_80 [i_24])))))));
                arr_85 [i_24] [i_25 + 2] [i_24] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_82 [i_24 - 1] [i_25 - 1] [i_25 + 1])) ? (arr_82 [i_24 - 1] [i_25 - 1] [i_25 + 3]) : (arr_82 [i_24 - 1] [i_25 + 1] [i_25 - 1]))) ^ (((((/* implicit */_Bool) var_16)) ? (arr_82 [i_24 - 1] [i_25 + 2] [i_25 - 1]) : (arr_82 [i_24 - 1] [i_25 + 2] [i_25 + 2])))));
            }
        } 
    } 
    var_68 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (long long int i_26 = 0; i_26 < 18; i_26 += 4) 
    {
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            {
                var_69 = arr_78 [i_27] [i_27];
                var_70 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_26] [17])) ? (((/* implicit */int) arr_79 [i_27] [i_27])) : (((((/* implicit */int) (unsigned char)25)) % (((/* implicit */int) arr_89 [i_26])))))))));
                var_71 = ((/* implicit */int) ((short) ((short) (-(arr_92 [i_26] [i_27])))));
                arr_93 [i_27] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_78 [i_27] [i_27]))));
            }
        } 
    } 
}
