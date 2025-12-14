/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209293
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
    var_19 = ((/* implicit */unsigned long long int) var_1);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (max((((/* implicit */unsigned long long int) (short)-1570)), (15012297271892240152ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_6)))) ? (max((((/* implicit */int) var_3)), (2047))) : (((/* implicit */int) ((short) var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max(((~(((/* implicit */int) ((short) var_0))))), ((~(((/* implicit */int) (unsigned short)47343)))))))));
                    arr_8 [i_1] = ((/* implicit */int) max(((+(arr_5 [i_2] [i_2 - 1] [i_2]))), (max((arr_5 [i_0] [i_2 - 1] [i_2]), (((/* implicit */unsigned int) 948337468))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    arr_11 [i_1] [i_3] [i_1] [i_0 - 2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3434446801817311450ULL) : (((/* implicit */unsigned long long int) -2034))))))))));
                }
                for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_6] [i_5] [i_4 + 1] [i_4 - 1] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)18193))))));
                            var_23 |= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (short)-30462)), (1099511627775ULL))), (((/* implicit */unsigned long long int) (-(var_5))))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_1] [(short)17] [i_5] [i_7] = ((/* implicit */unsigned int) min((((long long int) 5311158175486507441ULL)), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_18), (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_9 [i_7] [i_5] [i_4 + 1] [i_1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                            arr_25 [i_0] [i_7] [i_4 - 1] [i_5] [i_7] = ((/* implicit */long long int) max((max(((~(arr_18 [i_1] [i_1] [i_4] [i_5] [(unsigned short)11] [i_1] [i_5]))), (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_4 - 1] [i_4 - 1])))), ((+(var_6)))));
                            var_24 = ((/* implicit */unsigned short) (-((+(var_17)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 19; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((unsigned short) arr_14 [i_0 - 2] [i_4 + 1] [i_8 - 1]));
                            arr_29 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [(short)4] [i_1] [i_4] [i_5] [i_8] [i_4 - 1] [i_1]))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_4 [i_9] [i_1] [i_0])))));
                            arr_33 [i_1] = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_32 [i_4] [i_5] [i_9] [i_4 - 1]) : (var_18));
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_37 [i_0 - 2] [i_1] [i_1] [i_4] [i_10] &= ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                        /* LoopSeq 4 */
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_40 [i_0] [i_1] [i_1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 1] [i_4 - 1] [i_4]))));
                            arr_41 [i_11] [i_10] [i_1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                        }
                        for (short i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8206288799576951192LL)))))));
                            var_28 -= ((/* implicit */short) (-(var_0)));
                        }
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            arr_48 [i_13] [i_10] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_4 + 1] [i_10])) ? (((/* implicit */long long int) -948337469)) : (var_1)));
                            var_29 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)44441))))));
                            arr_49 [16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5350296800509358499LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [11LL] [i_4] [i_10] [i_13]))) : (arr_14 [i_0 - 2] [i_0] [i_0 + 1])))) ? (((unsigned int) arr_22 [i_0 + 1] [i_0 + 1] [i_13])) : (((unsigned int) arr_13 [i_0 - 2] [i_4] [i_13]))));
                        }
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            arr_54 [i_0] [i_1] [i_4] [i_4] [i_14] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                            arr_55 [i_0] [i_1] [i_4] [i_4] [i_0 - 2] [i_4] [i_4 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_0] [(short)13] [i_0 - 2]))));
                            arr_56 [i_0 - 2] [i_1] [i_4] [i_4] [i_4] [10ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65532))));
                        }
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((unsigned short) var_1)))));
                        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) 255)) ? (((/* implicit */long long int) arr_44 [i_0] [i_1] [i_4] [i_10])) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    }
                    for (int i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) 0))), (max((((/* implicit */long long int) max((((/* implicit */int) arr_42 [i_0] [i_1] [i_0])), (var_18)))), ((-(-5350296800509358478LL)))))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((arr_14 [i_0 - 1] [i_1] [i_15]), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) arr_50 [i_0] [i_1] [i_1] [17] [i_4] [i_15])) ? (arr_18 [i_15] [i_15 - 1] [i_4 - 1] [i_1] [i_1] [i_1] [i_0]) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned short) var_11)))))))));
                        arr_59 [i_0] [i_4] [i_4] [i_0] = (+(((/* implicit */int) ((short) 8237309332063584960LL))));
                    }
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) 
                        {
                            arr_66 [13LL] [i_1] [i_16] [i_16] [i_1] = ((/* implicit */unsigned int) (-(2067)));
                            arr_67 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(var_7)))))) : (min((((/* implicit */unsigned int) max((arr_45 [i_0 + 1] [i_1] [i_0 + 1]), (((/* implicit */unsigned short) var_15))))), ((~(var_11)))))));
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), ((-(arr_36 [i_4 - 1]))))))));
                        }
                        var_35 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((unsigned short) 0LL)))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        arr_72 [i_0 - 2] [i_1] [i_0 - 2] [i_18] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)47328)), ((-2147483647 - 1))));
                        var_36 = ((/* implicit */short) min(((+((+(var_13))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -5350296800509358501LL)) ? (((/* implicit */int) (short)20003)) : (((/* implicit */int) (unsigned short)10666)))))))));
                    }
                    for (unsigned short i_19 = 4; i_19 < 18; i_19 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((2147483647), (1448593358)))), (((unsigned int) var_4))));
                        arr_76 [i_0] [i_1] [i_4] [(unsigned short)14] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_77 [i_19 - 4] [i_4] [i_1] [i_0] = ((/* implicit */short) max((max((3467654924U), (((/* implicit */unsigned int) 1763326546)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (var_18) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_4])))))));
                    }
                    arr_78 [i_0 - 1] = ((/* implicit */long long int) max((max(((-(var_0))), (arr_9 [i_0 + 1] [i_1] [i_1] [i_4 - 1]))), (((/* implicit */unsigned long long int) ((short) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                    arr_79 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((3890606126U), (((/* implicit */unsigned int) (unsigned short)65535))))) ? (max(((~(var_17))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 865760770)) ? (((/* implicit */int) (unsigned short)14137)) : (((/* implicit */int) (unsigned short)1672))))))) : (((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_75 [i_0] [i_1] [i_0] [i_0] [i_1] [i_4 - 1]))))))));
                }
                /* vectorizable */
                for (int i_20 = 1; i_20 < 18; i_20 += 1) 
                {
                    arr_82 [i_20] [i_20] [i_0 + 1] = ((/* implicit */long long int) ((short) var_2));
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        arr_86 [i_0] [i_0] [i_20] [i_0] = ((/* implicit */short) (+(arr_18 [i_20 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 1])));
                        var_38 = ((/* implicit */short) ((unsigned long long int) (unsigned short)64056));
                        arr_87 [i_20] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0 - 2] [i_20 + 1] [i_21] [i_21]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
                        {
                            arr_92 [i_20] [i_22] [i_22] [i_22] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)10654))))));
                            arr_93 [i_0] [i_0] [i_1] [i_1] [18LL] [i_1] [i_22] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (288230376151711743LL) : (var_2)));
                        }
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_80 [i_1] [i_1] [i_1]))) ? (arr_12 [i_20] [i_21] [i_20 + 2]) : (arr_90 [i_20 + 2] [i_20] [i_20] [15] [i_20] [i_20]))))));
                    }
                    for (long long int i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        arr_97 [i_0] [i_20] [i_20] [i_20] [i_23] [(short)14] = ((/* implicit */unsigned int) (+(arr_46 [i_20 + 2] [i_20 + 1])));
                        arr_98 [i_20] = (~(((/* implicit */int) (unsigned short)22112)));
                        arr_99 [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43424)) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) var_12))));
                        arr_100 [i_0] [i_1] [i_20] [i_23] = ((/* implicit */short) ((int) -865760762));
                        var_40 = ((((/* implicit */_Bool) -1)) ? ((~(31))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                    }
                }
                var_41 &= ((/* implicit */short) (~((-(arr_6 [i_0] [i_0 - 1] [i_1] [i_1])))));
                arr_101 [i_0 - 1] [i_1] [i_1] = ((int) (~(((/* implicit */int) (unsigned short)54869))));
                arr_102 [i_1] [i_1] [i_0 - 1] = ((/* implicit */short) (+((-2147483647 - 1))));
            }
        } 
    } 
}
