/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223934
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((10956476562458337880ULL) | (var_2))))) ? ((+(((/* implicit */int) min((((/* implicit */signed char) var_3)), (var_16)))))) : (((((/* implicit */int) (short)12226)) & (((/* implicit */int) ((2600965414549675529LL) != (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1 + 1])))));
                        arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (+(min((-2600965414549675532LL), (((/* implicit */long long int) var_3)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((max((-2600965414549675530LL), (((/* implicit */long long int) var_5)))) ^ (((/* implicit */long long int) -166020851))));
                            arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) arr_0 [i_4]);
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (min((var_9), ((((+(((/* implicit */int) var_7)))) != (((/* implicit */int) arr_1 [i_2]))))))));
                            arr_23 [(unsigned short)11] [i_1 + 1] [i_0] [i_1 - 1] [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) ((short) 10956476562458337896ULL));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (0) : (((/* implicit */int) (_Bool)1))));
                            arr_26 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                            var_20 = (+(((/* implicit */int) var_9)));
                        }
                        for (short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_1] [i_2] [i_4] [i_8]))) / (arr_10 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))) <= (arr_6 [i_0] [i_0])))))));
                            var_22 = ((/* implicit */signed char) var_13);
                        }
                        var_23 -= ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                    }
                    for (unsigned char i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((7490267511251213729ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_11)))) ^ ((-(((/* implicit */int) var_9))))))))))));
                        var_25 = ((((/* implicit */int) min((arr_24 [i_0]), (((/* implicit */short) arr_11 [i_0 + 1]))))) < (((/* implicit */int) max((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (short)-18190)))), (var_6)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            arr_34 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((max((-2600965414549675529LL), (((/* implicit */long long int) arr_14 [i_0 - 1] [i_1 + 1] [i_9 + 1] [i_10 + 1])))), (min((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46940))) : (2600965414549675529LL))), (((/* implicit */long long int) ((unsigned char) (-2147483647 - 1))))))));
                            var_26 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-5946))))));
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_37 [i_0] [i_0] = ((/* implicit */signed char) min((arr_33 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [(signed char)16] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0] [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_11 [i_0 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)82)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_1 - 1] [i_2] [i_12])) : (((/* implicit */int) arr_16 [(unsigned char)2]))))), (max((((/* implicit */unsigned long long int) var_10)), (18341248513509611606ULL)))))));
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0 + 2])) : (((((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0])), (arr_40 [i_11] [i_1] [i_1 + 1])))) ^ (((/* implicit */int) arr_31 [i_12] [i_11] [i_1] [i_1] [i_0]))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                        {
                            arr_45 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [10] = ((/* implicit */unsigned short) max(((~(arr_30 [i_0]))), (((/* implicit */long long int) max((arr_40 [i_0] [i_1 - 1] [i_1 - 1]), ((unsigned short)18277))))));
                            var_28 = ((/* implicit */_Bool) var_15);
                        }
                        arr_46 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_33 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_0] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)74)))))) ? ((+(arr_0 [i_2]))) : (max((arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] [i_2]), (arr_0 [i_1 + 1])))));
                        var_29 = ((/* implicit */long long int) arr_44 [i_0 + 2] [i_1] [i_11]);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 1; i_15 < 17; i_15 += 3) 
                        {
                            arr_52 [i_15 + 1] [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) 7561608240738820273ULL);
                            var_30 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_15 + 1] [i_15 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_10 [i_1 - 1] [i_1 - 1] [(short)11] [i_15 + 1]))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_16]))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_29 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) var_15)))))))));
                            arr_57 [i_0] [i_1 - 1] [i_2] [i_0] [i_14] [i_16] = ((/* implicit */signed char) arr_11 [i_0]);
                            var_33 = ((/* implicit */unsigned short) min((-521309005), (0)));
                        }
                        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_33 [i_17] [i_17] [(_Bool)1] [i_1 - 1] [i_1] [i_17] [(_Bool)1]))));
                            arr_60 [i_0] [i_1] [i_2] [i_14] [i_0] [i_17] = ((((/* implicit */int) (unsigned short)18596)) < (((/* implicit */int) (_Bool)0)));
                            arr_61 [i_0] [i_0] = ((/* implicit */short) (signed char)77);
                        }
                        arr_62 [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28723)) ? (((/* implicit */long long int) arr_35 [i_0 + 1] [i_0] [i_2] [i_14])) : (arr_59 [i_0 + 1] [i_1] [i_2] [i_2] [i_14] [i_14] [i_14])))) & (min((22ULL), (arr_50 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)170))))) ? (((/* implicit */int) min(((unsigned short)48952), (((/* implicit */unsigned short) var_16))))) : (((/* implicit */int) var_7)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)13015))));
                                arr_69 [(signed char)11] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_41 [i_0] [i_0 + 1] [i_1 + 1] [i_20] [i_21] [i_20]))));
                                arr_77 [i_0] = ((((/* implicit */_Bool) -947971067)) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) != (((/* implicit */int) (signed char)20))))), (-1222384113))) : (((/* implicit */int) var_11)));
                                arr_78 [i_0] [i_1] [i_1] [i_0] [i_0] [i_21] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (short)31894))) * (((/* implicit */int) (signed char)6))));
                                arr_79 [i_21] [i_20] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (signed char)-95);
                                var_37 = ((/* implicit */long long int) ((unsigned long long int) arr_4 [i_0] [i_2]));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */long long int) (unsigned char)156);
                }
            } 
        } 
    } 
}
