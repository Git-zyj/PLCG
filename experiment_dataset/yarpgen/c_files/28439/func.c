/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28439
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) < (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))), (((unsigned long long int) 1ULL))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1])) && (var_0))) || (((/* implicit */_Bool) arr_1 [i_2]))));
                arr_8 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
                var_16 += ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1])) / (((/* implicit */int) arr_1 [i_1]))));
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
            }
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                arr_11 [i_0] [i_0] &= ((/* implicit */unsigned int) (((!(((_Bool) var_15)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483647)), (949334197U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_3])))) & (min((((/* implicit */unsigned long long int) var_13)), (arr_6 [i_0])))))));
                var_18 -= ((/* implicit */unsigned char) min((((min((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_3]) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))))))), (((unsigned long long int) 949334192U))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_19 -= ((/* implicit */unsigned char) (short)-1352);
                    arr_14 [(_Bool)1] [i_0] [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))), (min((3ULL), (((/* implicit */unsigned long long int) 668931713U)))))) : (((/* implicit */unsigned long long int) ((unsigned int) (~(3476750730U)))))));
                }
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    arr_18 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_6)), (949334186U)));
                    var_20 ^= ((unsigned int) ((long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_12)))));
                }
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                arr_22 [i_6 - 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_10 [i_0] [i_6 + 1] [i_6])) | (((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 1] [i_6])))), (((/* implicit */int) var_11))));
                var_21 = (!(((/* implicit */_Bool) min((1575231990), (((/* implicit */int) (_Bool)1))))));
                var_22 = ((/* implicit */unsigned int) max((max((1575232003), (arr_3 [i_0] [i_1] [i_0]))), ((~(((/* implicit */int) (_Bool)1))))));
            }
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((-1575231991), (-1575231991)))))) ? (max((min((((/* implicit */int) var_0)), (1743220442))), (739529459))) : (((/* implicit */int) var_9))));
                var_24 = ((/* implicit */unsigned long long int) 598866822);
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_25 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_25 [10] [i_1] [i_1] [i_1])) < (arr_19 [i_0]))))) : (((long long int) var_10))));
                var_26 |= ((((((/* implicit */int) (signed char)88)) != (((/* implicit */int) arr_9 [17LL] [17LL] [i_8])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_9)));
            }
            var_27 *= ((var_2) << (((max((var_8), (((/* implicit */int) arr_9 [i_1] [9LL] [i_0])))) - (1455782191))));
            var_28 = ((/* implicit */unsigned long long int) ((((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */long long int) ((min((((/* implicit */int) (unsigned short)14479)), (-1821014368))) / (1977419646)))) : (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [15ULL] [i_0])), (max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (arr_0 [i_0])))))));
            var_29 ^= min((11U), (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (arr_3 [i_0] [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1]))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_15)))))));
        }
        for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
        {
            arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) min(((unsigned char)10), (((/* implicit */unsigned char) (_Bool)1))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        {
                            arr_41 [i_12] [i_9] [i_10] [i_0] [i_9] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_9 + 2]);
                            arr_42 [i_9] [i_9 - 1] [i_10] [i_12] = 3476750730U;
                        }
                    } 
                } 
            } 
        }
        arr_43 [0LL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])))))) == (((((/* implicit */long long int) ((int) (unsigned short)38240))) ^ (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(short)11] [i_0]))) : (var_10)))))));
        var_30 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_34 [i_0])), (var_15))), (((/* implicit */unsigned long long int) var_14))));
    }
    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        var_31 ^= ((((/* implicit */_Bool) 717083694)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) ((min((11732256689425313842ULL), (((/* implicit */unsigned long long int) -2078738192)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_24 [i_13])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_33 = ((/* implicit */unsigned int) arr_45 [i_13] [i_13]);
                    var_34 = ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) (unsigned char)121)));
                    arr_54 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */_Bool) var_7);
                    arr_55 [i_13] [i_16] [i_15] [(_Bool)1] = ((/* implicit */unsigned short) ((arr_46 [i_13]) ? (((/* implicit */int) arr_36 [i_13])) : (((/* implicit */int) ((short) 717083684)))));
                    arr_56 [i_13] [i_13] [i_15] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (1211314693U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_13] [i_14] [i_13] [i_15] [i_13] [i_16]))))))));
                }
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
                {
                    var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_13] [i_14 - 1] [i_14]))) : (13740859413853989347ULL)));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) != (3476750737U))))));
                }
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        var_37 -= ((/* implicit */unsigned char) ((arr_34 [i_14 - 1]) << (((arr_34 [i_14 - 1]) - (766226691)))));
                        arr_65 [i_13] [i_14] [(short)6] = ((/* implicit */unsigned char) arr_25 [i_14] [i_14] [i_18] [i_19]);
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_68 [i_14] [i_14] [i_20] = var_3;
                        var_38 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_39 [i_13] [i_13] [i_13] [i_18] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_20] [i_14 - 1] [i_15] [i_18] [i_20] [i_14] [i_15]))) : (arr_0 [(_Bool)1]))));
                    }
                    var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)12697))) ? (6258019669652742802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_62 [i_13] [i_13] [i_15] [i_13] [i_18] [i_18]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_13] [i_13] [i_18] [i_18] [i_14])))))))));
                }
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */signed char) arr_50 [i_13] [i_15] [i_13] [i_13]);
                    var_41 ^= ((/* implicit */_Bool) var_10);
                    var_42 = ((/* implicit */unsigned short) arr_28 [i_13] [i_14 - 1] [i_13] [i_21]);
                    var_43 ^= (_Bool)1;
                    var_44 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (arr_20 [i_13] [i_14] [i_21]) : (arr_20 [i_13] [i_14] [i_13]))));
                }
                var_45 -= ((/* implicit */signed char) ((arr_70 [i_15] [i_15] [i_14] [i_13] [i_13]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_15])))));
                arr_71 [i_15] [6U] [i_14 - 1] [i_13] = ((1860639138949797436ULL) + (var_15));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_46 -= ((/* implicit */unsigned int) var_0);
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) arr_26 [i_14 - 1] [i_14 + 1]))));
                arr_75 [i_13] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_22])) ? (arr_19 [i_13]) : (((/* implicit */unsigned int) 848763528))));
            }
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 11; i_23 += 2) 
            {
                for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    {
                        var_48 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_13] [i_13])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_67 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
                        var_49 = arr_15 [i_13] [i_23] [0U];
                    }
                } 
            } 
            var_50 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_5 [i_13] [15ULL] [i_13] [i_14]))));
        }
        for (signed char i_25 = 0; i_25 < 11; i_25 += 3) 
        {
            arr_84 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((short) ((_Bool) arr_76 [i_25] [i_25] [i_25] [i_25])));
            var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 16060828U)))))), (((((/* implicit */_Bool) arr_47 [i_25])) ? (min((var_15), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned int) -717083690)) : (218214933U)))))))))));
            var_52 -= arr_81 [i_13] [i_13] [i_25] [(unsigned short)1] [i_13];
        }
        var_53 += ((/* implicit */unsigned char) var_2);
    }
    /* vectorizable */
    for (unsigned long long int i_26 = 4; i_26 < 21; i_26 += 4) 
    {
        arr_89 [i_26 + 2] [i_26 + 2] = ((/* implicit */_Bool) ((arr_85 [i_26]) << (((((((/* implicit */_Bool) arr_87 [i_26] [i_26 - 2])) ? (arr_85 [i_26]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26768))))) - (18255630375726422808ULL)))));
        var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) var_12))));
        arr_90 [i_26 - 4] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_86 [i_26] [i_26])) / (((/* implicit */int) arr_87 [i_26] [i_26]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_88 [i_26]))));
    }
    var_55 = ((/* implicit */unsigned long long int) var_14);
}
