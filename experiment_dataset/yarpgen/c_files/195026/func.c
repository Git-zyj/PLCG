/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195026
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_12 = min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [(_Bool)1])), (arr_1 [i_0])))) / (((unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (max(((-2147483647 - 1)), (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((min((((638583952) ^ (((/* implicit */int) arr_2 [i_0] [i_1] [(signed char)0])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2] [i_2])), (arr_3 [0])))))) + (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) ^ (5062861866648286937LL)));
                    var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) 2147483647)) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52771))) & (arr_1 [(unsigned char)8]))))));
                    var_16 ^= ((/* implicit */unsigned long long int) 3136735098U);
                    var_17 *= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
                }
            }
            for (short i_4 = 3; i_4 < 7; i_4 += 4) 
            {
                var_18 *= ((/* implicit */short) max((((((/* implicit */int) (short)11622)) * (((/* implicit */int) arr_6 [(signed char)9] [i_0] [(signed char)9] [i_4])))), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                var_19 = ((14661936417163797763ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_1 - 1] [i_1] [i_4 - 1])))));
            }
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
            {
                var_20 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_13 [i_5])) == (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_1] [i_1 + 1])) ? (((arr_14 [i_0] [i_0]) * (((/* implicit */unsigned long long int) 1158232194U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1])))))));
                var_21 = ((/* implicit */int) 123145302310912ULL);
                var_22 = ((/* implicit */_Bool) ((max((max((((/* implicit */unsigned long long int) arr_10 [i_0])), (arr_9 [i_0] [i_1] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0])) ? (3136735080U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5])))))))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_1 [i_0]))), (arr_12 [i_0] [i_0] [i_5]))))));
            }
            var_23 = ((/* implicit */unsigned long long int) ((((unsigned int) ((signed char) arr_3 [i_0]))) == (arr_13 [i_0])));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_24 = min((((unsigned int) arr_6 [i_6] [i_6 + 3] [i_6] [i_6 + 3])), (((/* implicit */unsigned int) (short)-20799)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        for (short i_9 = 3; i_9 < 8; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_0]) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])), (((((/* implicit */_Bool) arr_26 [i_6] [i_8] [(unsigned char)8] [i_6] [i_0] [(unsigned char)8] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [(short)4] [i_6] [i_7])))))))));
                                var_26 = ((/* implicit */unsigned int) arr_18 [i_8]);
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2525033221U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_6] [i_9]))) : (arr_10 [i_8])))) ? (((/* implicit */int) arr_17 [i_8])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_6] [i_7])) == (((/* implicit */int) arr_11 [i_8] [(short)6] [i_6]))))))), (((/* implicit */int) (short)-17507)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_28 = ((short) min((max((((/* implicit */unsigned long long int) arr_23 [i_10] [i_10] [i_7] [(signed char)8] [i_0])), (18446620928407240711ULL))), (((unsigned long long int) arr_5 [i_7 + 1] [i_6] [i_7]))));
                        var_29 = ((/* implicit */_Bool) arr_24 [i_10] [i_7] [i_6] [i_6] [i_0]);
                        var_30 = arr_7 [i_0] [i_6 + 3] [i_7] [i_10];
                        var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_7] [i_10]))) * (((unsigned long long int) ((((/* implicit */_Bool) 6ULL)) ? (arr_23 [i_0] [i_6] [i_0] [i_10] [i_10]) : (((/* implicit */long long int) arr_8 [i_7 + 1] [i_0] [i_7])))))));
                    }
                    var_32 = arr_3 [i_0];
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
    {
        var_33 *= ((/* implicit */unsigned long long int) min((arr_32 [i_11]), (((/* implicit */long long int) min((((((/* implicit */int) arr_31 [i_11])) | (((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) arr_31 [3LL])))))))));
        var_34 = (short)-7276;
        var_35 = ((/* implicit */int) ((unsigned long long int) arr_31 [i_11]));
        var_36 = ((/* implicit */unsigned short) arr_31 [i_11]);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
    {
        var_37 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_33 [i_12 - 1])), (arr_34 [i_12] [i_12])))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            for (short i_14 = 4; i_14 < 12; i_14 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_13] [i_12 + 1])) ? (arr_34 [i_14] [i_14 + 1]) : (arr_34 [i_12 - 1] [i_12]))))));
                    var_39 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) arr_38 [8ULL] [i_12 - 1]))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_13]))) + (16ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20791)))))));
                }
            } 
        } 
    }
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        var_40 = ((/* implicit */long long int) min((var_40), (((((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)21884)))) + (min((arr_42 [i_15] [i_15]), (((/* implicit */long long int) arr_41 [i_15]))))))));
        var_41 = ((/* implicit */unsigned char) (+(123145302310912ULL)));
        var_42 |= ((/* implicit */short) arr_42 [i_15] [i_15]);
    }
    var_43 = ((/* implicit */unsigned long long int) var_3);
}
