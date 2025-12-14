/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223838
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (var_3))))) : (((unsigned int) var_3))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))));
        var_11 = ((/* implicit */unsigned long long int) ((unsigned short) var_1));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_6 [(unsigned short)9] [i_1] = ((/* implicit */unsigned char) var_3);
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) ((long long int) (unsigned short)40349));
                        var_13 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 2249166305826241915LL)) ? (17460972029772118559ULL) : (17460972029772118583ULL))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 9; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((unsigned long long int) min((var_6), (var_9)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-28437)))) : (((unsigned long long int) var_0)))))))));
                        arr_18 [i_0] [i_1] [i_4 - 1] [i_5] = ((/* implicit */short) ((unsigned short) var_1));
                        arr_19 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (985772043937433057ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] [(short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2)))) ? (((unsigned long long int) var_5)) : (max((var_5), (((/* implicit */unsigned long long int) var_4))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            arr_25 [i_0] [i_6] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (min((522075473U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) ((unsigned short) min((var_8), (var_9)))))));
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
        {
            arr_29 [i_0] [i_0] [1ULL] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37825)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46715))) : (2260098222U)))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((unsigned long long int) var_8)))) : (((unsigned long long int) ((unsigned char) var_4))));
            arr_30 [i_0 + 2] = ((/* implicit */unsigned int) var_7);
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 7; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) var_1);
                        arr_37 [i_0] [i_7] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) max((var_8), (var_8)))) : (((/* implicit */int) min((var_8), (var_3)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)256))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (var_5) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 985772043937433044ULL)) ? (((/* implicit */int) (unsigned short)54744)) : (((/* implicit */int) (unsigned short)14133))))) : (var_5)))));
        arr_41 [i_10 + 1] = ((unsigned char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))), (((/* implicit */unsigned long long int) ((signed char) var_7)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) min((var_8), (var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 21; i_11 += 2) 
        {
            for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_48 [i_10] [i_11] [i_13] [i_13] &= ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) 985772043937433057ULL))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (min((var_2), (((/* implicit */unsigned long long int) ((unsigned char) var_3)))))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) : (((long long int) var_0)))))));
                            arr_52 [i_11] [i_11] [i_14] |= ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)33));
                            var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)42439))) ? (0U) : (((unsigned int) 17460972029772118583ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_4)))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_5)))))));
                        }
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        arr_55 [i_11] [i_10] [i_12] [i_15] [i_10] = ((/* implicit */unsigned short) var_5);
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)-28437)) : (((/* implicit */int) (unsigned short)30435)))), (((/* implicit */int) (unsigned char)242))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))));
                        arr_58 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_7)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) var_0);
                            arr_62 [i_11] [i_16] [i_12] [(unsigned short)4] [(signed char)20] [i_11] = var_0;
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41536)) ? (((/* implicit */unsigned long long int) 3001147144U)) : (9233227774140080990ULL)));
                            var_25 += ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                        }
                    }
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_8))));
                        arr_65 [i_11] [(unsigned char)11] [i_18] = ((/* implicit */unsigned long long int) var_3);
                    }
                    arr_66 [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_5))))));
                    var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) var_4))));
                }
            } 
        } 
    }
    for (unsigned short i_19 = 1; i_19 < 19; i_19 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */int) min((var_3), (var_9)))) : (((/* implicit */int) var_3))))) ? (var_7) : (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_4))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
        arr_69 [i_19 + 2] = ((/* implicit */signed char) var_5);
    }
    var_29 |= ((/* implicit */unsigned int) ((unsigned short) var_4));
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min(((unsigned short)60143), ((unsigned short)35175))))))), (max((max((var_7), (((/* implicit */unsigned long long int) var_8)))), (var_5)))));
    /* LoopNest 2 */
    for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            {
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-1)))) : (min((((/* implicit */unsigned long long int) var_9)), (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))))));
                var_32 = ((/* implicit */unsigned char) max((((unsigned short) var_9)), (((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))));
                /* LoopSeq 2 */
                for (unsigned short i_22 = 1; i_22 < 23; i_22 += 2) /* same iter space */
                {
                    arr_76 [i_20] [i_20] [i_21] [i_22 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)221)), ((unsigned short)60143))));
                    arr_77 [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_0), (((/* implicit */unsigned short) (unsigned char)207)))), (max(((unsigned short)42440), (((/* implicit */unsigned short) var_4))))))) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned char)244))));
                    arr_78 [i_22] [i_21] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_3))))))) ? (((/* implicit */int) ((unsigned short) ((unsigned char) var_7)))) : (((/* implicit */int) ((unsigned short) var_5)))));
                    arr_79 [i_20] [17U] [i_22] &= ((/* implicit */long long int) var_6);
                }
                for (unsigned short i_23 = 1; i_23 < 23; i_23 += 2) /* same iter space */
                {
                    var_33 = ((unsigned short) var_9);
                    /* LoopNest 2 */
                    for (signed char i_24 = 3; i_24 < 22; i_24 += 1) 
                    {
                        for (long long int i_25 = 0; i_25 < 25; i_25 += 2) 
                        {
                            {
                                arr_87 [i_24] = ((/* implicit */unsigned short) ((unsigned long long int) 1398259062473830410ULL));
                                arr_88 [i_20] [i_20] [i_23] [i_25] [i_25] [i_25] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)31946)))), (((/* implicit */int) ((short) var_8)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))));
                                var_34 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_7)) : (var_2))));
                                arr_89 [i_20] [i_21] [i_23] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) var_2)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_4)))));
                                var_35 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((unsigned long long int) 18196726801209507082ULL))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (short)-6848)))) : (((/* implicit */int) min((var_9), (var_9))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
