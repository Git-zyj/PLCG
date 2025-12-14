/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248453
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
    var_12 = ((/* implicit */signed char) ((((min((var_6), (((/* implicit */unsigned long long int) var_0)))) - (((/* implicit */unsigned long long int) ((int) (signed char)0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_10)), ((unsigned short)51914))), (min(((unsigned short)13621), (((/* implicit */unsigned short) (signed char)-7))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)0)))) : (((/* implicit */unsigned long long int) var_9)))), (17033419985580515772ULL))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (((_Bool)0) ? (-1135397782) : (((/* implicit */int) (unsigned short)51914))))), (((((/* implicit */_Bool) 1073217536)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
                    var_15 = ((/* implicit */unsigned short) var_5);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_3 + 1] [i_3] = ((/* implicit */unsigned long long int) var_9);
            /* LoopSeq 2 */
            for (unsigned char i_5 = 3; i_5 < 6; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) arr_17 [i_5 - 3] [i_3 + 1]))), (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_7)), ((short)-19700)))), (min((((/* implicit */unsigned long long int) var_0)), (var_4)))))));
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    arr_22 [i_6] [i_5 + 3] [(unsigned char)8] [i_3] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_5 - 1])) : (((/* implicit */int) arr_14 [i_3 + 1] [i_5 - 1]))))), (-461822191272386070LL)));
                    arr_23 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)194)) > (min((min((67108863), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2))))))));
                }
                var_17 = ((/* implicit */unsigned char) (unsigned short)51929);
                arr_24 [i_3 + 1] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16893386678706327778ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (461822191272386054LL)));
                arr_25 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1073217536)), (8768446558673359530ULL)))) ? (arr_20 [i_3] [i_3] [i_3] [i_5] [i_5] [1LL]) : (((/* implicit */unsigned long long int) (((+(arr_1 [(unsigned short)19] [(unsigned char)11]))) * ((-(((/* implicit */int) var_1)))))))));
            }
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)42502)))) ? (((((/* implicit */_Bool) arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (1553357395003223837ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-31)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) -444553935785255162LL))))))) ? (arr_1 [i_4] [i_7]) : (((int) arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)179)), (461822191272386069LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_3] [(unsigned char)7] [i_7] [(unsigned char)7] [i_3] [i_9]))))) : (arr_8 [i_3 + 1] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13621)) & (((/* implicit */int) (signed char)-86))))) : (arr_29 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_21 += ((unsigned char) (!(((/* implicit */_Bool) (short)-27170))));
                var_22 = ((/* implicit */_Bool) (unsigned char)65);
            }
            arr_33 [i_3 + 1] = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) arr_18 [(signed char)3] [(signed char)3] [i_3 + 1])) == (-1073217518)))), ((signed char)0)));
            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) 3688174614U)) ? (463633867811250352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_12] [(signed char)8])) : (((/* implicit */int) var_8))))) ? (min((var_6), (((/* implicit */unsigned long long int) arr_6 [6ULL])))) : (((/* implicit */unsigned long long int) min((606792698U), (((/* implicit */unsigned int) var_5)))))))));
                            arr_45 [i_13] [i_13] = 262143ULL;
                            arr_46 [i_3] [i_13] [i_12] = ((/* implicit */unsigned long long int) var_5);
                            var_25 = ((/* implicit */unsigned long long int) var_8);
                            arr_47 [i_13] [i_13] [i_12] [i_11] [i_13] [(unsigned char)0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)179)) ? (18446744073709289472ULL) : (((/* implicit */unsigned long long int) 3688174604U))))));
                        }
                    } 
                } 
            } 
            arr_48 [i_10] [i_10] = ((/* implicit */int) (short)12194);
            var_26 = var_5;
        }
        var_27 = ((/* implicit */int) var_4);
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 1) 
        {
            for (signed char i_15 = 3; i_15 < 9; i_15 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
                        {
                            var_28 = ((/* implicit */signed char) (~(arr_39 [i_3] [i_14 + 2] [i_16 + 1])));
                            var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                        }
                        for (short i_18 = 2; i_18 < 8; i_18 += 3) /* same iter space */
                        {
                            arr_63 [i_3] [i_16] [i_18] [i_16] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_19 [i_3] [i_14] [i_15] [i_16] [i_14] [i_16]))))));
                            var_30 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (unsigned char)36))));
                            var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */int) arr_14 [i_16 + 1] [i_15])) - (((/* implicit */int) var_1))))));
                        }
                        for (short i_19 = 2; i_19 < 8; i_19 += 3) /* same iter space */
                        {
                            arr_67 [i_3] [i_14 + 2] [i_15 - 2] [(short)5] [i_19] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_14 + 1] [i_16] [i_19]))));
                            var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) / (18446744073709551614ULL)));
                            arr_68 [i_19] [i_16] [(unsigned char)4] [i_3] [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-2626))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            var_33 *= ((/* implicit */unsigned char) ((arr_16 [i_3 + 1] [i_14 + 2] [i_15 - 1] [i_16 - 2]) >> (((/* implicit */int) var_0))));
                            var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)7264))));
                        }
                        for (short i_21 = 2; i_21 < 9; i_21 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 1343170036U))))))));
                            arr_75 [i_3 + 1] [6] [3LL] = ((/* implicit */long long int) ((unsigned char) arr_43 [i_21] [i_3] [i_3] [i_3 + 1]));
                            var_36 = ((/* implicit */signed char) var_7);
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_15 - 3] [i_16 + 1])) ? (((/* implicit */int) (signed char)-26)) : (arr_1 [i_15 - 2] [i_16 - 1]))))));
                        }
                        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) 2344424728U))));
                    }
                    for (unsigned short i_22 = 2; i_22 < 6; i_22 += 4) 
                    {
                        var_39 = ((/* implicit */int) (_Bool)0);
                        arr_78 [i_3] [i_14] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)250))))));
                    }
                    for (unsigned short i_23 = 1; i_23 < 9; i_23 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_41 [i_15]))));
                        var_41 -= ((/* implicit */int) (short)2625);
                        /* LoopSeq 2 */
                        for (unsigned int i_24 = 2; i_24 < 9; i_24 += 4) 
                        {
                            var_42 = ((/* implicit */_Bool) 14672973591116381720ULL);
                            arr_85 [i_3] [i_14 + 2] [i_15 - 1] [i_23] [i_24 - 2] = ((((/* implicit */_Bool) (~(min((((/* implicit */int) (_Bool)1)), (608785644)))))) ? (((((/* implicit */_Bool) (signed char)-86)) ? (((((/* implicit */_Bool) (unsigned char)18)) ? (arr_52 [i_3] [8U] [8U] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) arr_38 [(unsigned char)6] [(unsigned char)6] [5ULL])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_24 - 1] [(unsigned char)1] [i_15]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_25 = 4; i_25 < 9; i_25 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) var_8);
                            var_44 ^= var_8;
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (~(4294967282U))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        for (long long int i_27 = 3; i_27 < 9; i_27 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) -1826181252);
                                arr_93 [i_3] [i_14] [i_15] [i_26] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_88 [i_27] [i_26] [i_15] [i_3] [i_3]))) & (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) arr_51 [i_3 + 1]))));
                                var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_64 [i_3] [i_14] [i_3] [i_14] [(unsigned short)5]))))) ? (((/* implicit */int) (unsigned char)255)) : (min((arr_84 [i_27] [(_Bool)1] [i_15] [i_14] [i_3]), (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (min((((/* implicit */long long int) var_2)), (arr_60 [(_Bool)0] [i_26] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)148)) - (var_9)))))))))));
                                var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) min((3688174613U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)2626)) == (((/* implicit */int) (unsigned char)221))))))))));
                                var_49 *= ((/* implicit */long long int) arr_62 [i_26] [i_26] [i_15] [i_14] [i_26]);
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) 14U)), (((((/* implicit */_Bool) 22U)) ? (arr_69 [(short)8] [i_3] [(short)8] [i_3] [i_15] [(short)9]) : (((/* implicit */unsigned long long int) 4294967281U))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_28 = 0; i_28 < 25; i_28 += 1) 
    {
        arr_96 [i_28] [i_28] = ((/* implicit */unsigned long long int) 4294967283U);
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8)) ? (((/* implicit */int) (unsigned short)23750)) : (((/* implicit */int) var_0))))) * (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_94 [i_28]))) : (843965472U)))));
        var_52 = (-(((/* implicit */int) (_Bool)1)));
        var_53 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_95 [i_28] [(_Bool)1]))) == (3057929191U)));
        arr_97 [3ULL] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_94 [i_28])))));
    }
    var_54 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)2821)), (608785644)))), (var_6)));
    var_55 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (-1838865145)));
}
