/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198831
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned long long int) var_11);
        var_21 = ((/* implicit */int) (!(((((/* implicit */int) (signed char)49)) >= (((/* implicit */int) (signed char)29))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) & (max((var_15), (((/* implicit */int) (signed char)31))))))) ? (max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_17) : (max((arr_0 [13ULL]), (((/* implicit */unsigned int) arr_2 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (arr_8 [i_1] [i_1] [i_2] [0LL])))));
                    arr_11 [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 3050831999U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 1]))) : (min((arr_0 [i_2]), (arr_7 [i_1] [(short)14])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [12ULL])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) (signed char)3))))) ? (var_16) : (((/* implicit */unsigned long long int) 4140721565U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1]), (arr_9 [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)45)) | (((/* implicit */int) (unsigned char)255))))) : (arr_0 [i_1])));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] |= ((/* implicit */long long int) ((int) arr_14 [i_4] [i_4]));
        var_26 += ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4])) >= (arr_1 [i_4] [i_4])));
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (1953770249197067828ULL))))) ? (arr_19 [i_5]) : (((/* implicit */int) arr_18 [2] [i_5]))));
        var_28 *= ((/* implicit */signed char) (~((~(max((((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])), (11ULL)))))));
        var_29 += ((/* implicit */signed char) arr_19 [i_5]);
    }
    var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned int) var_14))))) ? (((unsigned long long int) min((((/* implicit */unsigned short) (signed char)31)), (var_2)))) : (var_1)));
    var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (var_18) : (((/* implicit */unsigned int) var_14))))))) : (var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */int) ((unsigned int) (-9223372036854775807LL - 1LL)));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 3; i_7 < 20; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        {
                            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) + (((/* implicit */int) (signed char)-42))));
                            var_34 += ((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_10 - 2] [i_7 + 1]));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) arr_17 [i_6] [i_10 - 1]))))))));
                        }
                    } 
                } 
            } 
            var_36 |= ((/* implicit */unsigned long long int) arr_30 [i_7 + 1] [i_6] [i_7] [i_7]);
            var_37 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) / (-4562834681019682191LL)));
            var_38 = ((/* implicit */unsigned short) (+(((int) var_13))));
            var_39 = ((/* implicit */_Bool) arr_28 [i_6] [i_6]);
        }
        for (signed char i_11 = 1; i_11 < 20; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                for (int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_40 = ((/* implicit */int) arr_34 [i_6] [i_6]);
                        var_41 = ((/* implicit */unsigned short) arr_27 [i_11] [i_11 + 1]);
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned char) 576460752303423487LL);
                            var_43 = ((((/* implicit */_Bool) var_17)) ? (((int) (signed char)-108)) : (((/* implicit */int) arr_37 [(_Bool)1] [i_13 + 2] [2ULL] [(short)3])));
                            arr_45 [i_13] [i_11] [i_12] [i_13 + 2] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) << (((/* implicit */int) (signed char)15))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            var_44 |= ((/* implicit */long long int) var_3);
                            var_45 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                            arr_48 [i_13] [i_13] [i_12] [i_13] [13LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_6] [i_11 - 1])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) var_8)))));
                            arr_49 [i_11 + 1] [i_11 + 1] [i_13] [(signed char)4] [i_11] [i_11] = ((/* implicit */short) arr_33 [(signed char)1] [i_15]);
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 15475126028388433533ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (arr_28 [i_11 + 1] [i_11 + 1]))))));
                        }
                    }
                } 
            } 
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11])) ? (arr_35 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11] [i_6] [i_11 + 1] [i_11 + 1])))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
    {
        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) arr_27 [i_16] [i_16]))));
        var_49 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) 3196764312U)) : (var_16))) + (((/* implicit */unsigned long long int) var_15))));
        arr_54 [i_16] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_40 [i_16])), (var_0)))));
        var_50 = max((((arr_19 [(signed char)11]) | (arr_33 [i_16] [i_16]))), (((((/* implicit */_Bool) arr_18 [i_16] [i_16])) ? (((/* implicit */int) arr_18 [9] [i_16])) : (((/* implicit */int) arr_18 [i_16] [i_16])))));
    }
    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 4) /* same iter space */
    {
        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30899))) : (var_11))), (((((/* implicit */_Bool) arr_23 [i_17] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_30 [i_17] [i_17] [i_17] [i_17])))))) ? (arr_30 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(_Bool)1])))));
        var_52 = arr_36 [i_17] [i_17] [i_17];
    }
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 14; i_20 += 1) 
                {
                    for (unsigned short i_21 = 2; i_21 < 13; i_21 += 2) 
                    {
                        {
                            var_53 = ((/* implicit */long long int) (((~(arr_57 [i_19]))) & (((((/* implicit */_Bool) arr_43 [i_20] [(signed char)14] [i_20] [i_20] [i_20 - 1] [i_20] [i_20 + 1])) ? (((/* implicit */int) arr_43 [i_20] [0] [i_20] [i_20 + 1] [i_20] [i_20] [i_20 + 2])) : (((/* implicit */int) arr_43 [i_20] [i_20] [15] [i_20] [i_20] [i_20] [i_20 - 1]))))));
                            var_54 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_44 [i_21] [i_18])) ? (3666323780U) : (((/* implicit */unsigned int) arr_66 [i_21])))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_25 [i_18])), (var_2)))))))));
                            arr_67 [i_19] [i_18] [i_19] [10LL] [i_21 + 3] &= ((/* implicit */signed char) arr_3 [i_19] [i_18]);
                            var_55 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) * (((((/* implicit */_Bool) arr_19 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10]))) : (var_11))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (short)-4106))))))));
                        }
                    } 
                } 
                var_56 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_56 [i_19])), (var_17))) << (((((((/* implicit */_Bool) var_10)) ? (arr_41 [i_18] [(unsigned char)2] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_19] [i_19] [i_19] [i_18]))))) - (1956294238U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7467628606572040164ULL)) ? (14644283605119079149ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_18] [(unsigned char)5] [i_19])))))) ? (((/* implicit */long long int) (+(4194303)))) : (var_5)))));
                var_57 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_19] [i_19] [i_19] [i_18]))))), (var_14)));
                var_58 += ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_18] [i_18] [i_18] [i_19] [i_19] [18ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_26 [i_18] [(signed char)18] [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_65 [i_18] [i_19] [i_19] [i_19]))))) : (9079088859876966506LL)))));
                var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_10), (((/* implicit */short) (signed char)96))))))))));
            }
        } 
    } 
}
