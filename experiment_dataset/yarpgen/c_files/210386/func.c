/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210386
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */signed char) (-(((/* implicit */int) min((var_0), (((/* implicit */signed char) var_13)))))));
        var_18 = (_Bool)0;
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((_Bool) max((9223372036854775807LL), (arr_0 [i_0])))))));
        var_20 = ((/* implicit */signed char) var_3);
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */long long int) var_13);
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1)))));
                var_23 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_5)))))));
            }
            for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_1 + 1] [(signed char)3])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)9])))))));
                var_25 = ((/* implicit */unsigned long long int) var_12);
                var_26 = ((/* implicit */signed char) ((unsigned int) (-9223372036854775807LL - 1LL)));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
            }
            for (long long int i_5 = 4; i_5 < 14; i_5 += 2) 
            {
                var_28 = ((/* implicit */short) min((var_28), (var_12)));
                arr_21 [i_1] [i_2] [i_5] = ((/* implicit */_Bool) ((int) arr_5 [i_1 - 1]));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)58)))))));
            }
            arr_22 [i_1] [i_2] = ((/* implicit */long long int) arr_20 [4LL] [i_2] [i_1] [8U]);
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_30 = (_Bool)0;
                    var_31 = ((/* implicit */_Bool) min((var_31), (((min((var_2), (var_13))) || (((/* implicit */_Bool) ((260134804200740655ULL) ^ (((/* implicit */unsigned long long int) arr_28 [(short)12] [i_6] [i_7] [i_1])))))))));
                }
            } 
        } 
    }
    for (short i_8 = 4; i_8 < 21; i_8 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_9 = 2; i_9 < 22; i_9 += 2) 
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (-(((/* implicit */int) ((arr_30 [i_8] [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
            var_33 = ((/* implicit */unsigned short) arr_31 [(short)7] [i_9]);
            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_29 [17U]))));
            var_35 = ((/* implicit */short) arr_30 [(_Bool)0] [7ULL]);
            arr_35 [(signed char)13] = ((/* implicit */unsigned char) (+(arr_31 [i_9 + 2] [i_8 - 4])));
        }
        for (short i_10 = 1; i_10 < 22; i_10 += 1) 
        {
            arr_40 [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_33 [i_8 - 1])))) - (((/* implicit */int) arr_33 [i_8 - 1]))));
            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((var_3) % (((/* implicit */int) arr_34 [i_8 - 4] [i_10 - 1])))) < (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_3))))))))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_8] [i_10])) | (((/* implicit */int) ((unsigned char) arr_37 [i_10 - 1] [i_8 - 2])))));
            /* LoopSeq 4 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            arr_49 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [(signed char)16] [i_8 + 3] [i_10 + 2])) % (((/* implicit */int) ((((/* implicit */int) arr_36 [i_8] [i_8 + 1] [i_10 + 1])) != (((/* implicit */int) arr_42 [i_8 - 1] [(short)20] [i_10])))))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)41)) > (((/* implicit */int) (unsigned char)86))));
                        }
                    } 
                } 
                arr_50 [(unsigned short)13] [i_10] [i_10] = ((/* implicit */short) max((((((/* implicit */int) var_14)) << (((((/* implicit */int) arr_46 [(unsigned short)20] [i_11] [i_10 + 2] [11LL] [i_8 - 2])) - (220))))), (((((/* implicit */int) (unsigned short)26311)) | (arr_29 [(_Bool)1])))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    var_39 ^= ((/* implicit */int) ((((((/* implicit */int) var_12)) * (((/* implicit */int) var_1)))) > (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_34 [i_8] [(_Bool)1]))))));
                    arr_54 [i_10] [(unsigned char)17] [i_11] [i_10] [i_11] [i_14] = ((/* implicit */unsigned char) max(((unsigned short)2782), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_10]))))))))));
                }
            }
            for (signed char i_15 = 1; i_15 < 23; i_15 += 2) 
            {
                arr_57 [i_8] [(short)19] [(short)19] [i_10] = ((/* implicit */signed char) arr_56 [i_8] [i_10] [i_15] [i_10]);
                var_40 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_51 [i_10 + 1] [i_8 - 2])) * (((/* implicit */int) var_2)))) >= (((/* implicit */int) var_15))));
                arr_58 [i_10] = ((/* implicit */unsigned short) var_9);
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_17] [i_10 - 1] [i_10] [i_10] [i_8] [i_8])) && (((9223372036854775779LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))))));
                            var_42 = ((/* implicit */unsigned char) ((var_15) || (((/* implicit */_Bool) ((arr_48 [i_10 - 1] [i_15 - 1] [i_17] [i_17]) ^ (arr_48 [i_10 - 1] [i_15 - 1] [i_15 - 1] [(unsigned short)13]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_18 = 1; i_18 < 21; i_18 += 2) 
            {
                arr_67 [i_8] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                /* LoopSeq 3 */
                for (int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    arr_71 [i_8] [i_10] [i_18 + 2] [(unsigned short)15] = ((/* implicit */_Bool) arr_60 [i_8] [i_10] [i_10] [i_10] [i_8 - 3] [i_18 + 3]);
                    arr_72 [i_10] [8ULL] [i_10] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                }
                for (unsigned short i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    var_43 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)125)) <= (((/* implicit */int) arr_74 [i_8]))))) + (((/* implicit */int) arr_64 [i_10 + 1] [i_8 + 3] [(unsigned short)18] [i_8]))));
                    var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_29 [i_8 - 3])))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_79 [i_18] [i_10] [i_10] [i_10] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) | (((/* implicit */int) arr_63 [i_8 + 2]))));
                    arr_80 [i_8 + 3] [i_10] [i_10] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_12)) - (22351)))));
                }
            }
            for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 2) 
            {
                var_45 = ((/* implicit */signed char) (+(var_11)));
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) min((((unsigned int) 4294967276U)), (((/* implicit */unsigned int) arr_68 [i_22 + 1] [i_10] [i_10 + 1] [i_8 - 2])))))));
            }
        }
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8] [i_8 - 4])))))) ^ (((/* implicit */int) (((-(((/* implicit */int) arr_47 [(signed char)11] [i_8] [i_8 + 3] [i_8] [i_8])))) == (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (short)15519))))))))))))));
        arr_85 [i_8] = ((/* implicit */unsigned char) arr_51 [i_8 - 2] [i_8 + 3]);
    }
    for (int i_23 = 0; i_23 < 13; i_23 += 3) 
    {
        arr_89 [i_23] = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
        var_48 &= ((/* implicit */unsigned short) var_1);
        var_49 = ((_Bool) var_12);
    }
}
