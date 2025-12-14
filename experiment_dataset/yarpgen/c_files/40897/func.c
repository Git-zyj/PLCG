/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40897
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0] [i_0]));
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1]))));
                        arr_10 [i_0] [i_0] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((int) arr_6 [i_0] [(short)3] [i_0] [(_Bool)1]));
                        arr_11 [i_3] [i_3] [i_2] [i_3 - 3] [i_0] [i_0 + 1] = ((/* implicit */int) (+(((arr_6 [(signed char)1] [(unsigned char)6] [i_2] [6LL]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_5] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)5] [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_6 [i_0] [i_4] [i_5] [4])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_4])) : (arr_14 [i_5] [i_5] [i_0] [i_1] [i_0 + 2])))));
                            arr_19 [i_0] [i_6] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)65535));
                            arr_20 [i_0] [i_5] [4] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((int) arr_12 [i_1] [i_4] [i_1]));
                        }
                    } 
                } 
                arr_21 [i_0] [8LL] [i_0] [i_0] = ((/* implicit */int) (+(((long long int) arr_14 [i_0] [i_0] [i_0] [5] [(short)4]))));
                var_20 = (((+(((/* implicit */int) var_5)))) + (((arr_2 [i_0] [i_4] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_4] [i_4])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) arr_2 [i_0 + 2] [i_1 - 2] [i_7 - 1]);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_1 - 1] [i_7 - 1]))) / (var_6)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((int) arr_23 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]));
                            var_24 ^= ((/* implicit */long long int) arr_15 [i_0] [0LL] [i_7]);
                            arr_34 [i_0] [i_1] [i_1] [i_1] [1ULL] = arr_3 [i_0] [i_1];
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) / (9223372036854775807LL)));
                arr_35 [i_0] [(short)7] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_7] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) arr_25 [i_0 + 2] [i_1 - 2] [i_7 - 1] [i_7 - 1])) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [(signed char)0] [i_7 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [6] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_7]))))));
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_0 [2] [i_1]))));
                    var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [(_Bool)1] [i_0 + 2] [i_0 + 1] [i_0] [i_0]))));
                    arr_40 [(unsigned short)8] [i_0 + 1] [i_0] [i_0] = arr_6 [i_0] [i_0] [i_0] [(_Bool)1];
                    var_28 = ((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_7 - 1]);
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    arr_45 [(short)2] [i_0] [i_7 - 1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)48221))))) * (((((/* implicit */_Bool) arr_43 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_1] [(_Bool)1])) ? (arr_30 [i_0] [2ULL] [(_Bool)1] [(signed char)6] [(short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                    arr_46 [i_7] [i_0] [i_7 - 1] = ((/* implicit */unsigned short) arr_43 [i_0] [(unsigned short)1] [i_7 - 1] [i_7 - 1] [i_0] [(unsigned char)7]);
                    var_29 = ((/* implicit */unsigned char) ((arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? (((/* implicit */int) arr_25 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_25 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))));
                }
            }
            var_30 = ((/* implicit */short) (-(((arr_13 [i_0] [i_0] [i_1] [i_0]) + (((/* implicit */int) arr_39 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
        }
        for (signed char i_14 = 2; i_14 < 9; i_14 += 3) /* same iter space */
        {
            var_31 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [4] [i_14])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [8ULL] [i_14 - 1] [i_14 + 1])) : (arr_32 [(unsigned char)4] [i_0 - 1] [i_14] [i_14 + 1] [i_14 + 1])))) * (arr_30 [2LL] [2LL] [i_0] [i_0] [(unsigned char)6])));
            arr_50 [i_0] = ((/* implicit */short) arr_29 [i_0 - 1] [i_0] [i_0 - 1] [i_14 - 2]);
        }
        for (signed char i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                var_32 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) arr_14 [i_0] [i_15] [6] [i_16] [6]))) * (arr_30 [2LL] [2LL] [i_16] [(unsigned char)8] [i_16])));
                arr_56 [i_0] [i_16] = ((/* implicit */short) arr_44 [(unsigned char)7] [(unsigned char)7] [i_16]);
                var_33 = ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_17 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned short)7]))))) ? (((/* implicit */int) arr_5 [i_15] [i_15 - 2] [(signed char)8] [i_0 + 1])) : ((~(((/* implicit */int) arr_7 [i_16] [i_16] [i_0] [i_0] [i_0])))));
            }
            for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                arr_60 [i_0] [i_15] [i_15] [i_0] = ((/* implicit */unsigned char) var_7);
                var_34 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_35 += ((/* implicit */long long int) ((short) arr_3 [6LL] [i_15 + 1]));
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                {
                    arr_65 [i_0] [3] [i_17] [(short)6] = ((/* implicit */short) ((arr_63 [i_0 + 2] [i_15 + 1] [i_15 - 2] [i_0]) / (arr_63 [i_0 + 2] [i_15 + 1] [i_15 - 2] [i_0])));
                    arr_66 [i_0] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_4)) * (arr_29 [i_15 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 1])));
                }
                for (long long int i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
                {
                    arr_69 [i_0] [9] [i_0] [i_19] = ((/* implicit */unsigned char) arr_14 [i_0] [(_Bool)1] [i_0] [i_19] [i_19]);
                    arr_70 [i_0] [i_0] [i_17] = ((/* implicit */_Bool) arr_54 [(_Bool)1] [i_0]);
                    arr_71 [i_0] = ((/* implicit */unsigned short) (~(arr_48 [i_19] [i_19] [i_19])));
                }
                for (long long int i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
                {
                    arr_75 [i_0] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_17])) ? (((/* implicit */int) arr_51 [i_0] [i_0])) : (arr_74 [i_0] [i_0] [(unsigned char)6] [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)30)) ? (4319420460427306356ULL) : (((/* implicit */unsigned long long int) -1523571045)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_15 - 2] [i_17] [i_0])))));
                    arr_76 [i_0] [i_0] [(short)9] [i_17] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) var_1)))));
                    var_36 ^= ((/* implicit */signed char) arr_59 [i_0] [i_0] [2]);
                    var_37 *= ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) (unsigned short)65521)))));
                }
            }
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        }
        for (signed char i_21 = 2; i_21 < 9; i_21 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_4))) ? ((+(arr_29 [i_0] [i_21 - 2] [i_0] [i_21]))) : (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0 + 1] [i_21 - 2] [i_0] [i_21]))));
            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_21] [i_21] [i_0 + 2] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_74 [i_0] [i_0] [i_0] [(unsigned char)1])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_36 [i_21] [5] [i_21] [(_Bool)1])))));
            arr_79 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_77 [i_21]) ? (((/* implicit */int) var_8)) : (arr_48 [i_21] [i_0] [i_0])))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_3))))));
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 10; i_22 += 1) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-10194)))) ? (((arr_67 [(_Bool)1] [1] [(_Bool)1] [1] [i_24]) ? (arr_15 [i_0 - 1] [(_Bool)1] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)6] [0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_0 - 1] [8]))))))));
                            arr_89 [i_0] [(unsigned char)2] [8] [i_23] [i_24] = ((/* implicit */_Bool) ((signed char) arr_25 [i_24] [i_21 + 1] [i_0 + 1] [8]));
                            arr_90 [(unsigned char)5] [i_0] [i_22] [i_22] [(short)7] = ((/* implicit */int) arr_5 [i_24] [i_22] [i_21] [i_0]);
                            var_42 *= ((/* implicit */unsigned char) (!(arr_0 [(unsigned char)4] [(unsigned char)4])));
                            var_43 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_0] [i_0] [i_0 - 1] [4]))))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)19)))) : (((((/* implicit */_Bool) arr_47 [i_0] [(signed char)4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_39 [i_0] [(unsigned char)4] [(signed char)7]))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_25 = 4; i_25 < 6; i_25 += 3) 
        {
            for (long long int i_26 = 3; i_26 < 7; i_26 += 3) 
            {
                {
                    var_44 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_25 + 4])) * (((/* implicit */int) arr_31 [i_0] [i_0 + 2] [i_25 - 3] [i_25 - 4] [i_26 - 2] [i_0]))));
                    var_45 = ((/* implicit */unsigned char) arr_78 [i_25 - 3] [i_25] [i_0]);
                    var_46 = ((short) (unsigned short)17296);
                }
            } 
        } 
        var_47 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_49 [i_0] [i_0] [i_0])) : ((~(var_11)))));
        var_48 += ((/* implicit */long long int) (~(var_13)));
    }
    for (unsigned char i_27 = 1; i_27 < 8; i_27 += 4) /* same iter space */
    {
        var_49 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_54 [i_27 + 2] [0LL]))))));
        arr_98 [i_27] = var_8;
        arr_99 [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_63 [i_27] [i_27 + 2] [i_27 + 1] [(_Bool)1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_64 [i_27] [(short)6] [i_27] [i_27])) * (((/* implicit */int) var_16))))) ? ((~(((/* implicit */int) arr_59 [(short)0] [i_27] [0LL])))) : (((/* implicit */int) arr_12 [i_27] [i_27] [(short)8])))) : (((/* implicit */int) ((arr_57 [i_27 + 1]) != (((/* implicit */int) arr_8 [i_27 - 1] [i_27 - 1] [i_27 + 1] [i_27 - 1])))))));
        var_50 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_91 [i_27 + 2] [i_27 + 2] [i_27 + 2])) : (((/* implicit */int) ((arr_22 [(signed char)0] [(short)9] [i_27] [(unsigned short)0]) != (((/* implicit */long long int) arr_53 [i_27] [i_27] [i_27])))))))) ? (var_15) : (min((((/* implicit */int) ((short) var_6))), (((((/* implicit */_Bool) arr_55 [i_27])) ? (((/* implicit */int) arr_38 [i_27] [i_27] [i_27] [i_27])) : (((/* implicit */int) var_7))))))));
        arr_100 [i_27] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(short)6] [(unsigned char)4])) ? (((/* implicit */int) var_3)) : (min((((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_27] [(_Bool)0] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (arr_72 [(short)4] [i_27] [(_Bool)0] [i_27]))), (((/* implicit */int) arr_81 [i_27] [8] [2] [4LL]))))));
    }
    var_51 &= ((/* implicit */unsigned char) var_0);
}
