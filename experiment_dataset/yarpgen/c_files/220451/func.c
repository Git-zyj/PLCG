/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220451
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_20 = ((((/* implicit */int) var_12)) != (((/* implicit */int) var_17)));
            arr_4 [(unsigned char)17] [i_0] [i_0] = ((/* implicit */int) var_8);
            var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) arr_1 [i_1]))))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_8 [i_2] [i_2] [i_2] |= ((/* implicit */signed char) arr_1 [i_2]);
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_3])) & (((/* implicit */int) (_Bool)1))))) / (((unsigned long long int) (short)-9256))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) (short)25045)))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) (_Bool)0)))));
            }
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_11))))))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */short) var_18);
                var_26 = ((/* implicit */short) (((-(((/* implicit */int) var_19)))) != (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    for (signed char i_8 = 4; i_8 < 15; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0 - 1] [10ULL] [i_0] [3ULL] [i_7] [i_8 - 4]);
                            arr_26 [i_0 + 1] [(_Bool)1] [i_0] [(signed char)4] [i_8 - 2] = (short)25045;
                            arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_5 [i_0])) * (0))));
                            var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
                            arr_28 [i_0] = ((/* implicit */short) ((var_14) - ((~(((/* implicit */int) var_11))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 1; i_9 < 17; i_9 += 4) 
            {
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+((~(13124229731442753205ULL))))))));
                arr_33 [(unsigned short)12] [i_2] [i_2] |= ((/* implicit */signed char) ((((arr_24 [i_2] [i_2] [i_9 + 1] [i_0 - 1] [i_0] [i_9 + 1] [i_9 + 1]) - (((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_2])))) >> (((arr_12 [i_2]) - (13825934064935689262ULL)))));
                arr_34 [i_0] [i_0] [i_9 - 1] = ((/* implicit */short) ((((((/* implicit */int) (short)-25029)) & (((/* implicit */int) (short)-25925)))) / (((/* implicit */int) ((short) arr_18 [i_0] [i_0] [i_9 - 1])))));
                var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_32 [i_0] [i_2] [i_9])))));
            }
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_38 [i_0] [i_10 - 1] [i_10 - 1] = ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10 - 1] [i_10]);
            var_31 = ((/* implicit */short) ((var_14) / (((/* implicit */int) (short)-19195))));
        }
        for (short i_11 = 2; i_11 < 15; i_11 += 2) 
        {
            arr_41 [(_Bool)1] [i_0] = ((signed char) ((unsigned long long int) (short)9569));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (short i_13 = 3; i_13 < 16; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) var_15);
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_0 [i_14])))) ? ((-(arr_42 [i_0] [i_12 + 1] [i_13] [i_0]))) : (((((/* implicit */int) arr_14 [i_0] [i_0] [i_12 + 1] [i_13] [i_12 + 1])) / (((/* implicit */int) arr_46 [i_0] [i_11] [i_0] [(unsigned short)12])))))))));
                            arr_49 [i_0] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) var_5)))));
                            var_34 = ((/* implicit */short) (+((-(((/* implicit */int) (short)0))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0 + 1] [i_0]))))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_19)))))));
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
            {
                arr_54 [i_0] [i_11 + 2] = ((/* implicit */unsigned short) var_0);
                var_36 = ((/* implicit */unsigned char) 18446744073709551610ULL);
                arr_55 [i_0] [i_0] [i_15] = ((/* implicit */short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_15 [i_0] [(short)4] [i_0] [i_11] [i_15]))));
            }
            for (short i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_17 = 3; i_17 < 16; i_17 += 4) 
                {
                    arr_61 [i_0] [i_11 + 3] [i_0] [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-1024)) + (2147483647))) << (((((((var_14) + (((/* implicit */int) var_8)))) + (797754379))) - (29)))));
                    arr_62 [(signed char)14] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_42 [i_17 - 1] [i_16] [i_11 - 2] [i_0 + 1])) ? (9481119223942762120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_11] [i_11])))));
                    arr_63 [i_0] [i_0] [i_11] [i_16] [i_16] [i_0] = ((/* implicit */unsigned short) (unsigned char)214);
                    arr_64 [i_0] [i_11 - 2] [i_0] [i_17 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5006421867502484526ULL))))) : (((/* implicit */int) (unsigned short)65535))));
                }
                arr_65 [i_11] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_0)))));
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (unsigned char)248))));
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_18 [(short)12] [i_11 - 2] [i_16]))))))));
                    var_39 ^= ((short) ((((/* implicit */int) arr_17 [i_16] [i_11] [(short)16] [i_11])) >> (((((/* implicit */int) var_5)) + (30843)))));
                    var_40 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) (unsigned char)205)))) : (((/* implicit */int) arr_67 [i_0] [i_0]))));
                }
                for (unsigned short i_19 = 1; i_19 < 17; i_19 += 1) 
                {
                    arr_74 [i_0] [i_11] [i_16] [i_0] [i_16] [i_16] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 1; i_20 < 16; i_20 += 2) 
                    {
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_3 [i_11]))) ? (((((/* implicit */int) arr_31 [i_11] [i_16] [i_16])) ^ (((/* implicit */int) (unsigned char)216)))) : (((/* implicit */int) arr_73 [i_0] [i_16] [i_0 - 1] [(_Bool)1])))))));
                        arr_78 [i_0] [i_11 + 3] [i_0] [i_19 + 1] [i_20] [i_20] [i_20 - 1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_20]))) : (3ULL))));
                        arr_79 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [(_Bool)1]);
                        var_42 ^= ((/* implicit */unsigned char) ((unsigned long long int) (+(var_14))));
                        arr_80 [i_0] [i_16] [(short)14] [i_19] [i_16] &= ((/* implicit */short) (~(((((/* implicit */int) (signed char)-95)) / (((/* implicit */int) (unsigned char)42))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_21 = 1; i_21 < 17; i_21 += 4) 
                    {
                        arr_84 [(short)5] [i_0] [i_16] [i_19] [i_19] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_21] [i_19] [(short)2] [(short)2] [i_0]))) && (((/* implicit */_Bool) ((unsigned char) arr_70 [i_0] [i_11 + 3] [i_19] [i_0])))));
                        var_43 = ((/* implicit */unsigned long long int) (unsigned char)241);
                        arr_85 [i_0 + 1] [i_0 + 1] [i_11] [i_0] [i_19] [i_21 - 1] [i_21] = ((/* implicit */short) 4398046511103ULL);
                        var_44 = ((/* implicit */unsigned char) arr_22 [i_16] [16ULL] [i_16] [i_19]);
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (-((~(((/* implicit */int) (unsigned char)40)))))))));
                    }
                    arr_86 [i_0] [i_0 - 1] [i_16] [i_19 - 1] [i_0] [i_11] = ((short) arr_53 [i_0] [i_16] [i_11] [i_0]);
                    arr_87 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_45 [i_0] [i_0] [i_16] [i_19]))) | (((32767) ^ (((/* implicit */int) arr_43 [i_0] [i_16] [5ULL]))))));
                }
            }
        }
    }
    var_46 = (((-(max((18446744073709551610ULL), (((/* implicit */unsigned long long int) var_12)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)214))))) << (((((/* implicit */int) max((var_18), (((/* implicit */unsigned short) var_2))))) - (58460)))))));
}
