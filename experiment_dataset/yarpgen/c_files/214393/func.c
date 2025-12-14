/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214393
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_0)))))) : (var_3))))))));
    var_15 = ((/* implicit */int) min((((_Bool) (_Bool)1)), ((_Bool)1)));
    var_16 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) (short)17415))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((var_2), (var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((-(arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_0 [i_0])))), (arr_3 [i_0]))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_1])) - (arr_3 [i_1]))), ((-(((/* implicit */int) arr_4 [i_1]))))))) ? (((/* implicit */int) ((unsigned char) ((13104926536839386037ULL) >= (((/* implicit */unsigned long long int) -12)))))) : (2147483647)));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((int) arr_2 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (arr_8 [i_3] [i_2] [i_0])));
                                var_20 = min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 4])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 + 1]))))), (arr_8 [i_0] [i_0] [i_0 - 3]));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551609ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_1 + 1]) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_1 - 1])) ? (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_1] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_1 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0 + 3] [i_1 - 2])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 4] [i_1 - 2])) : (((/* implicit */int) arr_8 [i_0 + 3] [i_0 + 1] [i_1 - 1]))))));
                        arr_20 [i_5] [i_0] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) min((arr_5 [i_0 + 2] [i_0] [i_0]), (min((arr_5 [i_0 + 3] [i_0] [i_0 - 3]), (arr_5 [i_1] [i_5] [i_6])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 512879249)) ? (((/* implicit */int) (_Bool)1)) : (-1)))) : (max((arr_24 [i_0] [i_1] [i_5] [i_6] [i_7]), (((/* implicit */long long int) -512879237))))))) ? (arr_3 [i_6]) : (((/* implicit */int) arr_11 [i_0] [i_5] [i_6] [i_7]))));
                            arr_25 [i_5] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_4 [i_7])))), (arr_22 [i_0] [i_5] [i_5] [i_6])));
                        }
                    }
                    for (short i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_5] [i_8] = ((/* implicit */short) arr_19 [i_0] [i_5] [i_0 - 4] [i_8]);
                        var_23 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_5] [i_8])) * (((/* implicit */int) arr_1 [i_5]))))) ? (((((/* implicit */_Bool) -512879249)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_0])))) : (((((/* implicit */_Bool) (short)-7103)) ? (((/* implicit */int) arr_18 [i_1] [i_8])) : (((/* implicit */int) arr_26 [i_8] [i_1] [i_1] [i_0]))))))), (arr_5 [i_0] [i_0] [i_0])));
                        arr_30 [i_5] = arr_19 [i_1] [i_5] [i_1] [i_1];
                    }
                    for (short i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_1] [i_5] [i_9] [i_10] &= ((/* implicit */short) (_Bool)1);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_9])) != (((/* implicit */int) arr_17 [i_5]))));
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_0] [i_0 - 1] [i_1] [i_5] [i_9] [i_10])) - (((/* implicit */int) arr_33 [i_0] [i_1 - 1] [i_5] [i_9] [i_9] [i_10]))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_1] [i_5] [i_9] [i_5] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5] [i_1])) << ((((-(-1253631934))) - (1253631930)))));
                            arr_42 [i_5] = ((/* implicit */short) min((3ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_11] [i_9] [i_9 + 3] [i_1 + 1] [i_1] [i_0 - 1])))))));
                            arr_43 [i_0] [i_1] [i_5] [i_9] [i_11] = ((/* implicit */_Bool) max((((((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (arr_40 [i_5] [i_9 + 2]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_5])) || (((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))))))), (((/* implicit */int) max((arr_38 [i_9] [i_5] [i_9] [i_9] [i_5] [i_1 - 1]), (arr_38 [i_11] [i_5] [i_1] [i_1] [i_5] [i_1 - 2]))))));
                            arr_44 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_0 - 2] [i_9 + 3] [i_1 - 2] [i_11] [i_11])) ? (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_9 - 1] [i_1 - 2] [i_11] [i_11])) : (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_9 - 1] [i_1 - 1] [i_11] [i_5]))))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0 - 1] [i_9 + 1] [i_1 - 2] [i_5] [i_11])) ? (((/* implicit */int) arr_27 [i_1] [i_0 + 1] [i_9 + 2] [i_1 - 2] [i_0] [i_1])) : (((/* implicit */int) arr_27 [i_0] [i_0 + 3] [i_9 + 4] [i_1 - 1] [i_11] [i_5])))) : (((((/* implicit */_Bool) arr_27 [i_0] [i_0 - 3] [i_9 - 1] [i_1 + 1] [i_11] [i_9])) ? (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_9 + 1] [i_1 - 1] [i_1] [i_5])) : (((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_9 + 3] [i_1 + 1] [i_11] [i_0]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            arr_48 [i_0] [i_1] [i_5] [i_9] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_10 [i_12] [i_1] [i_5] [i_9]))) & (((/* implicit */int) ((((/* implicit */int) arr_18 [i_5] [i_5])) >= (arr_21 [i_0] [i_0] [i_5] [i_9] [i_12]))))));
                            arr_49 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2]))));
                            var_26 = ((/* implicit */_Bool) var_5);
                        }
                        arr_50 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_47 [i_0] [i_1] [i_5]))) % (((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            arr_54 [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_51 [i_1 + 1] [i_1] [i_5] [i_9] [i_9] [i_9 + 4]);
                            var_27 = ((/* implicit */unsigned short) arr_10 [i_0] [i_5] [i_9 + 4] [i_13]);
                            arr_55 [i_5] = ((/* implicit */_Bool) ((((((arr_11 [i_0] [i_1] [i_9] [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-2570109373054346647LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((-2147483640) >= (arr_22 [i_9] [i_5] [i_5] [i_9]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_5] [i_9] [i_5] [i_1] [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_9]))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_5] [i_9])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_1])))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_13] [i_1 - 2] [i_5] [i_9] [i_13] [i_1]))) : (arr_24 [i_0 - 4] [i_1] [i_5] [i_9] [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_13] [i_9] [i_5] [i_1] [i_1 - 2] [i_0])))))) : (((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_1 + 1] [i_5] [i_9] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_13] [i_9] [i_5] [i_1 + 1] [i_1 + 1] [i_0]))) : (arr_24 [i_0 - 2] [i_1] [i_5] [i_9] [i_13])))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_18 [i_1] [i_1]))));
                            arr_58 [i_5] [i_1] [i_5] [i_9] [i_14] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_13)));
                            arr_59 [i_0] [i_5] [i_1] [i_5] [i_9] [i_9] [i_14] = ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) min((arr_47 [i_14] [i_5] [i_0]), ((unsigned char)164))))))) ? (-1253631942) : (min((((/* implicit */int) arr_34 [i_5] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])), (arr_46 [i_0] [i_5] [i_0 + 1] [i_9 + 2]))));
                            var_30 = ((/* implicit */unsigned short) arr_4 [i_0 - 1]);
                        }
                        var_31 &= ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        arr_63 [i_15] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((-2147483640) % (512879246)));
                        arr_64 [i_0] [i_5] [i_5] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) arr_38 [i_0] [i_5] [i_0 - 3] [i_0] [i_5] [i_5]))));
                    }
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_1 - 2] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((long long int) var_8))))) ? (arr_24 [i_16] [i_1 + 1] [i_1] [i_0 + 2] [i_0 + 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) max((arr_47 [i_0] [i_5] [i_16]), (arr_68 [i_16] [i_1] [i_5] [i_5])))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-7)) + (16))))))))));
                        arr_69 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0]);
                        var_33 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_61 [i_0] [i_1] [i_5] [i_16])) ? (arr_40 [i_1] [i_0]) : (((/* implicit */int) (signed char)-93)))));
                    }
                    for (short i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) && (((((/* implicit */_Bool) ((var_9) ? (var_3) : (((/* implicit */unsigned long long int) var_12))))) || ((!(((/* implicit */_Bool) -1253631951)))))))))));
                        arr_72 [i_0] [i_17] &= max(((unsigned char)34), (((/* implicit */unsigned char) (_Bool)1)));
                    }
                    arr_73 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (min((((/* implicit */unsigned short) var_9)), (var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (var_3) : (((var_9) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
}
