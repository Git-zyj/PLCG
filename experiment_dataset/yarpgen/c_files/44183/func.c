/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44183
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
    var_12 = min(((~(min((((/* implicit */unsigned long long int) var_8)), (var_6))))), (min((((/* implicit */unsigned long long int) ((short) (unsigned short)0))), (min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_1 [i_0 - 2] [i_0 + 2]), (arr_1 [i_0 - 2] [i_0 - 1]))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_1] [i_4] [i_2]);
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) + (arr_5 [i_0] [i_2] [i_0] [i_2])))) ? (((/* implicit */int) max((((/* implicit */short) arr_11 [i_4] [i_2] [i_2 - 3])), (arr_13 [i_0] [i_0] [i_2])))) : ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((unsigned int) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 2]))))))));
                }
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_15 = var_2;
                    var_16 = max((max((((/* implicit */unsigned long long int) (-(var_11)))), (min((14243946975227993408ULL), (4972824445656724878ULL))))), (((/* implicit */unsigned long long int) arr_3 [i_5 - 1] [i_1])));
                }
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19226))))))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) arr_7 [i_7] [i_6] [i_1] [i_1] [i_0])), (var_2)))), (var_8)))) ? (((/* implicit */int) var_0)) : (min((max((var_3), (((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_3)))))));
                            var_19 = ((/* implicit */signed char) (+(arr_20 [i_0] [i_0 - 2] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_8 = 1; i_8 < 13; i_8 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_16 [i_8] [i_8] [i_8]))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13473919628052826738ULL)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (short)(-32767 - 1)))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_22 = ((/* implicit */_Bool) (short)-21106);
            var_23 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_30 [i_10] [i_9])) > (((/* implicit */int) arr_28 [i_10] [i_9]))))) - (((/* implicit */int) arr_32 [i_9] [i_10]))));
        }
        var_24 = ((/* implicit */_Bool) arr_30 [i_9] [i_9]);
        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4972824445656724878ULL)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (unsigned short)4))));
        arr_33 [20ULL] = ((/* implicit */unsigned int) 10920142443011889000ULL);
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1518)) + (((/* implicit */int) (_Bool)1)))))));
        arr_36 [i_11] = arr_34 [i_11] [i_11];
        /* LoopSeq 3 */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) min((arr_37 [i_12] [i_11]), (((/* implicit */unsigned char) arr_38 [i_11] [i_11] [i_12])))))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_28 = arr_41 [i_11] [i_14] [i_13] [i_14];
                            var_29 += ((/* implicit */short) (((+(arr_42 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                        }
                        var_30 -= min((((long long int) (!(((/* implicit */_Bool) arr_37 [i_13] [i_12]))))), (((/* implicit */long long int) min((arr_42 [i_14] [i_11] [i_11] [i_11] [(signed char)18] [(signed char)18]), (((/* implicit */unsigned int) arr_43 [i_11] [i_12] [i_11] [i_11] [i_11]))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) arr_39 [i_14]))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_11] [i_11] [i_11]))) % (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11] [i_12]))) * (arr_40 [i_12] [i_11])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_11] [i_12] [i_11] [i_12])) >> (((((/* implicit */int) min((arr_41 [i_11] [i_11] [2U] [i_11]), (((/* implicit */short) arr_44 [i_12] [i_12] [i_11] [i_12] [i_11]))))) - (33))))))));
        }
        for (signed char i_16 = 1; i_16 < 22; i_16 += 4) 
        {
            var_33 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((short) arr_37 [i_11] [i_11]))) / (((/* implicit */int) var_2)))));
            arr_47 [i_11] [i_16] [i_16 + 2] = arr_39 [i_11];
            var_34 = ((/* implicit */_Bool) var_10);
        }
        for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 1) 
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                for (unsigned short i_19 = 2; i_19 < 23; i_19 += 3) 
                {
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                            var_36 = ((/* implicit */short) 2557058408U);
                            var_37 = ((/* implicit */_Bool) arr_43 [i_11] [i_17] [i_18] [i_11] [i_11]);
                        }
                    } 
                } 
            } 
            var_38 |= ((/* implicit */unsigned short) ((((unsigned long long int) arr_46 [i_17] [i_17] [i_11])) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_7)))) ? (((4972824445656724891ULL) ^ (((/* implicit */unsigned long long int) 3628993200U)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), ((-(arr_42 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))))))));
            var_40 = ((/* implicit */int) max((max((var_4), (arr_34 [i_17 + 4] [i_11]))), (arr_38 [i_11] [i_11] [i_11])));
        }
    }
}
