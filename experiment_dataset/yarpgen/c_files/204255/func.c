/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204255
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_11);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)4))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_0)))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) var_8)) : (1461884207)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
                    }
                    for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        arr_14 [i_2] [i_1] [i_2] [i_4] [i_1] [i_2] = ((/* implicit */unsigned short) var_0);
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3865446074727958877LL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
                        arr_20 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3)))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))));
                    }
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) var_4);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((min((((/* implicit */unsigned char) var_11)), (var_9))), (max(((unsigned char)41), (((/* implicit */unsigned char) (signed char)-60))))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))) : (var_6)))));
        var_17 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_4)), (min((var_3), (var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) max((((/* implicit */signed char) var_1)), (var_4)))), (min((var_9), (((/* implicit */unsigned char) var_7)))))))));
        arr_24 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_7)), (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((min((((/* implicit */long long int) var_9)), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))))));
        var_18 = ((/* implicit */signed char) var_1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            var_19 = ((/* implicit */signed char) var_5);
            var_20 = ((/* implicit */unsigned char) var_7);
            arr_29 [i_7] = ((/* implicit */long long int) var_4);
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            arr_33 [i_6] [i_6] [i_6] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3865446074727958876LL)) ? (780747034) : (-2117884665))))))), (((((/* implicit */_Bool) max((((/* implicit */signed char) var_7)), (var_4)))) ? (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_3)))))));
            arr_34 [i_6] [i_8] = ((/* implicit */_Bool) min((min((max((((/* implicit */unsigned long long int) (_Bool)0)), (12989064027596715040ULL))), (12989064027596715033ULL))), (((/* implicit */unsigned long long int) (unsigned char)214))));
            var_21 |= max((((/* implicit */unsigned short) var_1)), (max((min((((/* implicit */unsigned short) var_4)), (var_10))), (max((((/* implicit */unsigned short) var_11)), (var_10))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                arr_38 [i_6] [i_6] [i_6] [i_6] = var_11;
                arr_39 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_11))))))), (max((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_7))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))));
            }
            /* vectorizable */
            for (signed char i_10 = 3; i_10 < 24; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_22 = var_2;
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (-3865446074727958877LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (-780747027) : (((/* implicit */int) (unsigned char)29))))) ? (var_6) : (((((/* implicit */_Bool) 3057092631315663106LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6))))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))))));
                    arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_1);
                }
                var_26 = ((/* implicit */int) var_7);
                var_27 = var_12;
                var_28 = ((/* implicit */unsigned short) var_7);
            }
            for (int i_12 = 1; i_12 < 23; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            arr_53 [i_12] [i_6] [i_12] [i_13] [i_6] [i_6] [i_6] = ((/* implicit */long long int) var_3);
                            var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned long long int) var_8)), (var_3))))), (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (_Bool)1)))))));
                            var_30 += ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) var_8)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) max((-13), (((/* implicit */int) (unsigned char)213))))))))));
                arr_54 [i_8] [i_6] [i_12] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_11), (var_11)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))), (max((min((var_3), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))))));
            }
            for (int i_15 = 1; i_15 < 23; i_15 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (var_5)))), (var_10))))) : (max((((/* implicit */long long int) var_1)), (max((-3024649296114553066LL), (((/* implicit */long long int) (unsigned char)184))))))));
                var_33 = max((max((var_3), (((/* implicit */unsigned long long int) min((var_9), (var_9)))))), (((/* implicit */unsigned long long int) var_8)));
                arr_59 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) min(((_Bool)1), (var_1)))), (max((((/* implicit */long long int) var_9)), (var_6))))), (((/* implicit */long long int) min((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_1))))), (((var_1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))))));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 24; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 780747034)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (unsigned short)27651))))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_3))) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((var_4), (((/* implicit */signed char) var_7))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))) : (max((max((((/* implicit */unsigned long long int) var_9)), (var_3))), (max((5457680046112836576ULL), (((/* implicit */unsigned long long int) 2072446218U))))))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_4)), (var_0))), (min((((/* implicit */long long int) var_11)), (var_0)))))) ? (((((/* implicit */_Bool) max(((unsigned short)37884), (((/* implicit */unsigned short) (unsigned char)212))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_36 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_12)))) ? (min((var_6), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (var_12))))) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (var_6)))))));
                            var_37 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) max((var_11), (((/* implicit */signed char) var_1))))), (max((2270902994065660212LL), (-3057092631315663106LL))))), (((/* implicit */long long int) max((min((var_5), (((/* implicit */unsigned char) var_7)))), (var_2))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_7)), (var_12))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_7)), (var_10)))), (max((var_0), (((/* implicit */long long int) var_10))))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_2))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (9007199246352384ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_2)))))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 3) 
        {
            {
                var_39 = ((/* implicit */_Bool) var_12);
                var_40 = ((/* implicit */unsigned short) max((17215880277764938041ULL), (((/* implicit */unsigned long long int) 72057589742960640LL))));
                var_41 *= ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) max((var_2), (var_5)))), (min(((unsigned short)240), (((/* implicit */unsigned short) (unsigned char)223))))))), (min((min((3057092631315663106LL), (((/* implicit */long long int) 0)))), (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (-2493068390460046098LL) : (-3057092631315663106LL)))))));
                arr_72 [i_18] [i_18] = ((/* implicit */short) min((((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))) ? (max((var_3), (((/* implicit */unsigned long long int) var_12)))) : (max((((/* implicit */unsigned long long int) var_9)), (var_3))))), (((/* implicit */unsigned long long int) var_9))));
            }
        } 
    } 
}
