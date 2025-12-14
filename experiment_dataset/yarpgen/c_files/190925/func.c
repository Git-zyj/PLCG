/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190925
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) min(((short)23049), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) (_Bool)1)))), ((+(((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((long long int) max((((/* implicit */short) ((_Bool) var_4))), (var_0)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max(((((((~(((/* implicit */int) arr_0 [i_0 - 1])))) + (2147483647))) >> (((/* implicit */int) arr_10 [i_1] [i_0] [2LL] [i_0 + 1])))), (((((/* implicit */int) arr_11 [i_3] [i_0] [i_1] [i_0])) ^ (((((/* implicit */int) arr_4 [i_1] [i_3])) & (((/* implicit */int) (_Bool)1)))))))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || ((((_Bool)1) && ((_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((var_3), ((_Bool)1)))))) : (((long long int) ((short) 4358975656083256640LL))))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) arr_5 [i_1]))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 4; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_1))))))));
                                arr_22 [i_0] [i_0] [i_1] [i_6 - 1] [i_7] |= ((/* implicit */long long int) ((short) (((_Bool)1) ? (((/* implicit */int) (short)-20569)) : (((/* implicit */int) (_Bool)1)))));
                                arr_23 [(_Bool)1] [(short)0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) var_0))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 3; i_9 < 14; i_9 += 2) 
                        {
                            var_21 = (!(((/* implicit */_Bool) arr_11 [i_5 - 2] [i_9] [i_0 - 1] [i_9 + 1])));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((_Bool) var_3))))))));
                            arr_28 [0LL] [i_1] [i_1] [i_1] [i_8] [i_0] [i_9] = ((/* implicit */_Bool) (-(-10LL)));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_11 [i_8] [(short)11] [i_1] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))))))));
                        var_24 &= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11)))) ^ (((/* implicit */int) ((_Bool) arr_20 [i_0] [i_1])))));
                        arr_29 [i_0] [i_5] = ((/* implicit */short) ((_Bool) (_Bool)1));
                        /* LoopSeq 1 */
                        for (short i_10 = 3; i_10 < 13; i_10 += 4) 
                        {
                            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_9))));
                            var_26 = ((/* implicit */long long int) ((arr_10 [i_0] [i_5 - 2] [i_10 - 1] [i_0]) ? (((/* implicit */int) arr_10 [i_0] [i_5 + 1] [i_10 - 2] [(short)8])) : (((/* implicit */int) arr_10 [i_0] [i_5 - 1] [i_10 - 1] [i_10 + 1]))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) 9223372036854775807LL))));
                            arr_32 [i_0] [(_Bool)1] [i_5] [i_1] &= (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))));
                        }
                    }
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (short)20564);
                        var_29 = var_3;
                        var_30 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))));
                        var_31 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_39 [i_11 - 1] [i_0] = ((/* implicit */long long int) (!(((_Bool) var_5))));
                        var_32 = ((/* implicit */_Bool) (short)31);
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((arr_27 [i_0 + 1] [i_0 - 2] [i_1] [i_0 - 2] [i_11 - 1] [i_11] [i_11 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_30 [i_0] [i_0 + 1] [i_11] [i_11] [i_11 - 1]))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_1)))))));
                        var_35 ^= (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_26 [i_0]))) == (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_3))))));
                    }
                    arr_40 [i_0] [(_Bool)1] [i_11] [i_0] = ((/* implicit */short) arr_5 [i_0]);
                }
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                            {
                                var_36 &= ((/* implicit */short) ((((/* implicit */int) ((short) arr_20 [i_0] [i_1]))) < (((/* implicit */int) max((var_6), (((/* implicit */short) arr_20 [i_0] [i_0])))))));
                                arr_48 [i_15] &= ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) >> (((-1670717949601815771LL) + (1670717949601815771LL)))));
                                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_5 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_34 [i_0])));
                                var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_15] [i_1] [i_0 + 1])))) : (((long long int) min(((short)-3746), (((/* implicit */short) var_7)))))));
                            }
                            /* vectorizable */
                            for (short i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                            {
                                var_39 += ((/* implicit */_Bool) ((((/* implicit */int) (short)14688)) / (((/* implicit */int) var_12))));
                                arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((+(arr_34 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_38 [i_0]))))));
                            }
                            arr_54 [i_0] [i_1] [i_14] [i_0] [(short)13] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_44 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))) >> (((/* implicit */int) (_Bool)1))));
                            var_40 = var_2;
                            var_41 -= ((/* implicit */long long int) ((max((((((/* implicit */int) var_12)) * (((/* implicit */int) var_13)))), (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-3746)))) + (3770)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_42 = (_Bool)1;
}
