/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30148
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (min((((((/* implicit */long long int) var_11)) / (var_0))), (((/* implicit */long long int) ((signed char) var_5)))))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */int) ((_Bool) var_6))) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */unsigned long long int) ((long long int) ((long long int) var_3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -9223372036854775806LL)) : ((~(var_5))))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_12 [(_Bool)1] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), (-1LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) var_3);
                                var_18 = ((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), ((_Bool)0)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = (~((-(-1128877491))));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_1))));
        arr_19 [i_6] = ((/* implicit */unsigned long long int) ((int) ((long long int) ((unsigned long long int) var_4))));
        arr_20 [i_6] = ((/* implicit */long long int) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        arr_23 [7] [i_7] = var_12;
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((_Bool) var_1))));
                        arr_34 [i_9] [i_9] [14LL] [i_10] [i_10] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_11))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((unsigned int) var_14))) : ((~(var_12)))))));
                    }
                    for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_38 [i_7] [i_8] [13LL] [i_8] [i_9] [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_10))));
                            arr_42 [i_8] [i_8] [(_Bool)1] [i_8] [i_12] [i_11] [i_7] = ((/* implicit */unsigned long long int) var_12);
                            arr_43 [i_8] [i_8] [i_8] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1710040347707081779LL)) ? (16809125701073906073ULL) : (((/* implicit */unsigned long long int) var_0))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_7))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) var_11))));
                            var_25 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 3; i_14 < 14; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((long long int) var_3));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 4) 
                    {
                        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((long long int) var_12)) : (((((/* implicit */_Bool) (+(-8000938997749894398LL)))) ? (min((-7170689596920231825LL), (((/* implicit */long long int) (_Bool)1)))) : (var_12)))));
                                arr_53 [i_7] [i_7] [i_8] [i_16] = ((long long int) ((long long int) var_12));
                            }
                        } 
                    } 
                    arr_54 [i_7] [i_7] [i_8] = ((/* implicit */long long int) var_13);
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        arr_58 [i_7] [i_8] [i_8] [i_9] [i_17] [i_17] = var_8;
                        arr_59 [(signed char)15] [i_8] [i_9] [(_Bool)1] = ((((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) var_0)))))) / (min((((/* implicit */long long int) var_11)), (var_14))));
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 2; i_18 < 14; i_18 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_29 = ((long long int) var_0);
                            var_30 = ((/* implicit */int) ((_Bool) var_1));
                            var_31 = -6571661546405943685LL;
                            arr_66 [i_7] [i_7] [i_9] [i_8] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) / (var_5)))) ? (((/* implicit */unsigned long long int) var_12)) : (var_6));
                        }
                        for (long long int i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
                        {
                            var_32 = (((_Bool)0) ? (var_1) : (((/* implicit */unsigned long long int) var_8)));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((int) var_6)))));
                            var_34 &= ((/* implicit */_Bool) var_13);
                        }
                        for (long long int i_21 = 0; i_21 < 18; i_21 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) ((_Bool) var_2));
                            var_36 ^= -3742399825946478615LL;
                            arr_73 [12ULL] [i_7] [i_7] [12ULL] [i_8] [i_18 + 3] [i_21] = ((/* implicit */int) ((long long int) var_13));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_4))));
                        }
                        for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
                        {
                            var_38 = ((/* implicit */signed char) ((var_12) != (((long long int) var_2))));
                            var_39 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) (_Bool)0)));
                            var_40 = var_7;
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                        {
                            arr_79 [i_7] [i_18] [i_9 + 1] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_1)));
                            arr_80 [i_8] [i_18] [0] [3ULL] [3ULL] [i_8] [i_7] = ((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) 2774858748619803057LL))));
                            var_41 -= ((/* implicit */unsigned long long int) ((unsigned int) var_8));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            arr_85 [i_8] [i_8] [(_Bool)1] [i_24] [i_24] = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_3))));
                            arr_86 [i_7] [i_8] [i_8] [(_Bool)1] [i_8] [i_24] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))) != (var_4)));
                        }
                        for (long long int i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            var_42 = ((/* implicit */signed char) var_1);
                            arr_90 [i_8] [i_9] [i_25] [i_25] [6LL] = ((/* implicit */int) (-(-3742399825946478615LL)));
                        }
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 18; i_26 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_27 = 0; i_27 < 18; i_27 += 2) 
        {
            for (int i_28 = 0; i_28 < 18; i_28 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_29 = 0; i_29 < 18; i_29 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) var_2);
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_4)) : (var_1)));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_30 = 3; i_30 < 17; i_30 += 2) 
                    {
                        arr_106 [i_26] [i_27] [i_28] [i_30] [i_30 - 2] = 715538929482415887LL;
                        arr_107 [i_30] [i_28] [i_30] [i_30] [i_26] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : ((~(var_0)))));
                    }
                    arr_108 [i_26] [i_27] [i_28] = ((/* implicit */unsigned int) var_12);
                    arr_109 [i_26] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (var_12)));
                }
            } 
        } 
        var_45 = ((/* implicit */int) min((var_45), (((int) ((var_12) | (var_0))))));
        /* LoopSeq 1 */
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            var_46 = ((/* implicit */_Bool) ((unsigned long long int) -1));
            var_47 = var_14;
            arr_112 [i_26] [i_26] = ((signed char) ((((/* implicit */unsigned long long int) var_4)) / (var_1)));
        }
        arr_113 [i_26] [i_26] = ((/* implicit */long long int) var_10);
        /* LoopNest 2 */
        for (long long int i_32 = 0; i_32 < 18; i_32 += 1) 
        {
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                {
                    var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((((((/* implicit */_Bool) 16865146638749157899ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_34 = 2; i_34 < 16; i_34 += 1) 
                    {
                        for (unsigned long long int i_35 = 2; i_35 < 16; i_35 += 2) 
                        {
                            {
                                var_49 = var_14;
                                arr_124 [i_26] [i_33] [i_32] [i_35] = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */long long int) ((int) var_4));
                }
            } 
        } 
    }
    var_51 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((long long int) 0ULL))), (var_3))) / (((/* implicit */unsigned long long int) var_11))));
}
