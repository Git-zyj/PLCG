/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218973
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
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((arr_0 [i_0 + 2]) >> (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0 - 1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (1094088467U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((unsigned char) 4294967295U))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))))))))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */long long int) (-((-(((/* implicit */int) arr_2 [i_0 - 4]))))));
            var_21 = ((/* implicit */_Bool) 1428399606);
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3615546137U)) ? (max((((unsigned long long int) arr_12 [(_Bool)1] [i_1] [i_2] [i_3])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)123)), (144115188075855872LL)))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_3 - 1])), ((((_Bool)1) ? (17145905976515454961ULL) : (((/* implicit */unsigned long long int) 576460752303423472LL))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_1 + 1] [15])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) arr_4 [i_0 - 4] [i_0])) : (5430043143977876479LL)))) : (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)16] [i_2] [i_3 - 1])) ? (var_14) : (((/* implicit */unsigned long long int) 4227858432U))))))) ? (max((144115188075855862LL), (((/* implicit */long long int) arr_3 [i_0 - 4])))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        arr_14 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)19272)), (arr_6 [i_2] [i_0])));
                    }
                } 
            } 
        }
        for (int i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 2]))))), (((/* implicit */unsigned long long int) var_15))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        arr_23 [i_0] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5] [i_5])) ? (arr_12 [i_0] [i_4] [i_5] [i_6]) : (arr_19 [i_4]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(var_16)))), (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1])))))))) : (((long long int) var_3))));
                        arr_24 [i_4] [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((unsigned long long int) (short)14443))) ? (((((/* implicit */_Bool) 4611686018427322368ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (4398046511103LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_4))))))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_27 [i_0 + 3] [15U] [i_5 - 1] [i_6] [i_6] [i_6] [i_4] |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_5]))) ? (((/* implicit */int) (!((_Bool)1)))) : (arr_11 [i_0] [i_0] [i_0 - 4] [i_0 + 2] [i_4 + 3] [i_5 + 1])))), (((arr_13 [i_0 + 1]) ? ((-(9082162847809431101ULL))) : (min((11487671989257280516ULL), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0 + 2]))))))));
                            arr_28 [i_4] = max((max((((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (164785939451309588ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 6144)))))))));
                            var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_7] [i_7] [i_5] [(short)8] [i_5] [i_7])), (var_8)))) ? (((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))) ? (-7026812172776759870LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 4] [i_4 - 1] [(unsigned short)1] [i_7]))))) : (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (_Bool)1)), (arr_19 [i_5]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [7U] [i_5] [i_5 + 1] [i_5])))))));
                        }
                        var_26 = ((/* implicit */unsigned char) arr_22 [i_0 + 3] [i_4] [i_5] [i_0 + 3]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)29332)), (-1))))));
                            arr_32 [i_5 + 1] = ((/* implicit */unsigned char) ((max((9630430425184058344ULL), (arr_0 [i_0 - 3]))) - (((/* implicit */unsigned long long int) (+(arr_30 [i_0] [i_4] [i_5 - 1] [i_5 - 1] [i_8]))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) /* same iter space */
                        {
                            var_28 = 1252252678U;
                            var_29 &= var_1;
                            arr_36 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((arr_30 [i_6] [i_6] [i_5] [i_4 + 2] [i_0]) % (-270599587)))));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) ((((_Bool) (short)-14459)) ? (max((260046848), (arr_11 [i_0] [i_0 - 2] [i_0] [i_4] [i_0 + 2] [i_4]))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_0 - 2] [i_4 - 2] [i_0] [i_4] [i_0 - 2])) ? (arr_11 [(_Bool)1] [i_0 + 1] [i_4 - 1] [i_0 + 1] [i_0 - 1] [i_0]) : (arr_11 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 4] [15LL] [i_0 - 2])))));
            var_31 = ((/* implicit */int) arr_34 [i_4] [i_4 + 3] [i_4] [i_4] [i_0 - 1] [i_0] [i_0]);
            arr_37 [(_Bool)1] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_4 - 2] [i_4] [i_0 + 2]), (arr_16 [i_4 + 2] [i_4 + 2] [i_0 - 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [2])) ? (((/* implicit */int) arr_33 [i_0])) : (((/* implicit */int) var_4))))) ? (((unsigned long long int) 63U)) : (((/* implicit */unsigned long long int) arr_30 [i_0] [(unsigned short)2] [i_0 + 2] [i_4] [i_4])))) : (((/* implicit */unsigned long long int) arr_35 [4LL] [i_4] [i_0] [i_0] [6]))));
        }
        arr_38 [i_0] = ((/* implicit */short) max((((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2])))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 4]))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_13 [i_11]))));
                    arr_44 [i_0] [7] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_16 [i_0 - 1] [i_0 - 2] [i_0 + 3]), (arr_16 [i_0 - 1] [i_0 - 2] [i_0 + 3])))) ? (((((/* implicit */_Bool) 134201344U)) ? (-1) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 2] [i_0 + 3]))));
                }
            } 
        } 
    }
    var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40213))) * (18313327517984262590ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            var_35 = ((/* implicit */_Bool) arr_47 [i_12] [i_12] [i_12]);
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : ((((_Bool)1) ? (((/* implicit */long long int) 409178693)) : (-144115188075855872LL)))));
            var_37 = ((/* implicit */_Bool) arr_46 [3ULL] [3ULL]);
            var_38 = ((/* implicit */int) ((unsigned int) var_4));
            var_39 = ((/* implicit */unsigned int) ((var_9) ? (((((/* implicit */_Bool) 3876345683U)) ? (((/* implicit */int) arr_45 [i_12])) : (((/* implicit */int) arr_46 [i_12] [i_12])))) : (((/* implicit */int) ((signed char) var_17)))));
        }
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (int i_17 = 2; i_17 < 19; i_17 += 3) 
                    {
                        {
                            arr_59 [i_17] [i_17] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_48 [i_16])) ? (var_18) : (arr_56 [i_16] [i_16] [i_16] [i_16] [(unsigned short)16] [i_16])))));
                            arr_60 [i_17] [i_14] [i_15] [i_14] [1ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */int) arr_57 [i_17] [i_17 + 2] [i_17 + 3] [i_17 + 3] [i_17])) : (((/* implicit */int) arr_57 [i_12] [i_17 + 1] [i_17] [i_17 + 1] [i_12]))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_53 [i_14]) : (((/* implicit */int) arr_45 [i_12])))))));
                var_42 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_14]))) / (arr_47 [i_15] [i_14] [i_12])));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_12] [i_14])) ? (((/* implicit */int) arr_54 [i_12] [i_12])) : (((/* implicit */int) arr_45 [i_15]))))) ? (((/* implicit */int) arr_46 [i_14] [i_15])) : (((/* implicit */int) var_0))));
            }
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10726991193377327421ULL)) ? (((/* implicit */unsigned long long int) 3015073019U)) : (18050260280066797707ULL)));
        }
        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [8U] [(unsigned char)12])) ? (((arr_57 [i_12] [19] [(unsigned char)5] [i_12] [i_12]) ? (((/* implicit */int) arr_48 [i_12])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) var_6)))));
        arr_61 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29345)) ? (1802747408) : (-1008775499)));
    }
}
