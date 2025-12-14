/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30602
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
    var_13 = ((/* implicit */unsigned short) var_0);
    var_14 = var_9;
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) << ((((-(((/* implicit */int) var_1)))) - (27988)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 601585595051461311LL)) || (((/* implicit */_Bool) 2788015343U))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) arr_8 [(signed char)8] [i_0] [i_1] [i_2 + 1]);
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (_Bool)1))));
                        var_17 = ((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((((/* implicit */int) arr_8 [8ULL] [i_0] [(_Bool)1] [i_3])) & (((/* implicit */int) var_8)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_5)))));
                        var_19 = ((/* implicit */signed char) var_11);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] = ((/* implicit */signed char) (((+(var_4))) == (((/* implicit */unsigned long long int) arr_9 [i_5 - 1] [i_5 - 1] [i_2] [i_2] [i_2 - 1] [i_1]))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) arr_19 [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) ((unsigned short) var_3))))))));
                            arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((3519986460U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153))))))));
                            var_21 = ((/* implicit */unsigned long long int) var_6);
                            var_22 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)9574)) ? (((/* implicit */long long int) -1)) : (2453859371853887029LL))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_24 [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_10) >> (((((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_2 - 1] [i_0])) - (95)))));
                            arr_25 [i_0] [i_1] [6U] [i_4] [i_0] = ((/* implicit */signed char) ((var_10) - (((/* implicit */long long int) var_6))));
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-118)) % (((/* implicit */int) (signed char)-103)))) != (((/* implicit */int) arr_10 [i_0] [i_2 - 2] [i_2] [i_0]))));
                            var_24 = ((/* implicit */short) arr_19 [i_0] [(signed char)5] [i_0] [(signed char)11] [i_4] [i_4] [i_6]);
                        }
                    }
                    for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned int) 2910434247406323272ULL));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 - 2]))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_7 - 1] [i_7 - 2] [i_1] [i_7])) && (((/* implicit */_Bool) var_10))));
                        var_28 = ((/* implicit */long long int) (~(var_6)));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_8])) <= (((/* implicit */int) arr_30 [i_8]))));
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)112)))))));
        var_30 = ((unsigned int) arr_31 [i_8]);
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (int i_11 = 2; i_11 < 23; i_11 += 2) 
                {
                    {
                        var_31 = ((/* implicit */short) (+(((/* implicit */int) arr_37 [i_8]))));
                        arr_42 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? ((((_Bool)0) ? (2910434247406323272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (2910434247406323272ULL) : (2910434247406323272ULL)))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_41 [i_8] [i_9] [i_10] [i_11 - 1] [i_11 + 1]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) 1821748377)) ? (2910434247406323272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)216))));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12] [i_13] [(unsigned short)16] [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_39 [(signed char)21] [i_13] [(signed char)21] [i_13] [(unsigned short)1] [i_12])))) ? (((/* implicit */int) ((signed char) arr_39 [i_13] [i_13] [i_13] [i_13] [i_13] [i_12]))) : ((+(((/* implicit */int) var_5))))));
            /* LoopSeq 4 */
            for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) (unsigned short)14479);
                            var_37 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) (_Bool)0))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_13]))))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_12)))))) + (min((arr_36 [i_12] [i_13]), (((/* implicit */unsigned int) (unsigned char)148))))))));
                            var_38 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_13])) ^ (((/* implicit */int) arr_47 [i_15]))))) ? (((unsigned long long int) arr_56 [(signed char)4] [i_13] [i_13] [(signed char)4] [i_15])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */signed char) ((min((arr_48 [i_12] [i_12] [i_14]), (arr_48 [i_14] [i_13] [i_12]))) >= (((arr_48 [i_14] [i_13] [i_14]) ^ (arr_48 [i_12] [i_13] [i_14])))));
            }
            /* vectorizable */
            for (signed char i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                arr_60 [i_12] [i_12] [i_17] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_37 [i_13]))));
                var_40 = ((/* implicit */unsigned short) ((short) arr_31 [i_13]));
                var_41 = ((/* implicit */unsigned char) arr_44 [i_12]);
                var_42 = ((/* implicit */unsigned short) arr_35 [i_12] [i_12] [i_12]);
                arr_61 [i_13] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-28872))));
            }
            for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
            {
                var_43 = min((((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_13] [i_13] [i_18] [i_12] [i_18])) ^ (((/* implicit */int) var_8))))), ((~(arr_48 [i_12] [i_13] [i_18]))));
                arr_64 [i_12] [(short)14] [(signed char)9] = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) ((((/* implicit */long long int) arr_44 [i_12])) - (9223372036854775807LL))))), (((((/* implicit */int) (unsigned short)56845)) ^ (((((/* implicit */int) arr_54 [i_12] [10U] [(signed char)6] [i_18] [i_18])) << (((((/* implicit */int) var_2)) + (98)))))))));
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_44 [i_12])))))));
                    arr_67 [i_13] [i_13] [i_19] [i_19] = ((/* implicit */signed char) ((long long int) var_4));
                }
                arr_68 [i_13] [i_13] [i_13] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_49 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (arr_39 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))) : (max((((/* implicit */long long int) arr_56 [i_12] [i_12] [i_18] [13U] [i_12])), (-9223372036854775807LL))))) << (((/* implicit */int) arr_30 [i_13]))));
            }
            for (signed char i_20 = 2; i_20 < 14; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((unsigned int) (signed char)99))) : (min((min((((/* implicit */long long int) arr_40 [i_20] [i_12] [i_20] [i_20] [(unsigned char)14])), (7058094087529095914LL))), (arr_39 [i_20 - 1] [i_20 - 2] [i_20 - 1] [i_20 - 2] [i_20 - 1] [i_20 - 2])))));
                    var_46 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((10541774347407000199ULL), (((/* implicit */unsigned long long int) (signed char)-85))))) ? (min((((/* implicit */unsigned int) var_2)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135)))))), (((((/* implicit */_Bool) arr_71 [i_12] [i_13] [i_13] [i_21] [i_20 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-(var_7)))))));
                }
                var_47 = ((unsigned long long int) arr_38 [i_20 - 2] [i_20] [i_20] [i_20 - 1]);
                var_48 ^= ((/* implicit */unsigned int) ((signed char) (~(var_6))));
            }
            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_12])) | (((/* implicit */int) arr_63 [i_13] [i_13] [i_12] [i_12]))))) ? (var_10) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) -1233058952)) : (((((((/* implicit */long long int) 4294967295U)) >= (-9223372036854775806LL))) ? (min((((/* implicit */long long int) var_0)), (arr_43 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
        }
    }
}
