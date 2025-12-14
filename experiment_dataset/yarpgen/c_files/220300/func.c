/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220300
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
    var_16 |= ((/* implicit */signed char) ((((/* implicit */int) var_3)) <= (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_4 [i_1] [i_0])), ((-(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                arr_6 [i_1] |= ((unsigned char) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) max((var_9), ((_Bool)1))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)107))));
                                var_19 |= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_20 [i_3])) * (((/* implicit */int) arr_20 [i_3]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) arr_7 [i_2]))), (arr_7 [i_2])));
                    arr_25 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min(((signed char)-108), ((signed char)-77)));
                    arr_26 [i_3] [i_7] = arr_23 [i_2] [i_7];
                }
                for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_30 [i_2] [i_3] [(signed char)0] |= ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)38)))), ((-(((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        arr_33 [i_2] [i_3] [(unsigned char)0] [i_8] [i_9] [i_9] = max((var_2), (((/* implicit */signed char) (((+(((/* implicit */int) arr_13 [i_2] [i_8])))) <= (((/* implicit */int) arr_10 [i_8] [i_9]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((max(((~(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) var_14)))))) & ((-(((/* implicit */int) arr_19 [i_9] [i_8] [(_Bool)1])))))))));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_10] [i_8] [i_10]))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 24; i_11 += 1) 
                        {
                            var_23 ^= ((/* implicit */signed char) (!((_Bool)1)));
                            arr_40 [i_3] [(signed char)2] [i_8] &= ((/* implicit */unsigned char) max((((/* implicit */int) arr_32 [i_3] [i_9] [i_8] [i_3])), (((((/* implicit */_Bool) ((signed char) (signed char)-110))) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) ((unsigned char) arr_37 [i_2] [i_3] [i_3])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_44 [i_2] [(_Bool)1] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_2] [i_2] [i_8] [i_9] [i_8] [i_12 - 1] [i_8])) * (((/* implicit */int) arr_35 [i_2] [i_2] [i_9] [i_9] [i_12] [i_12 - 1] [(signed char)6]))));
                            arr_45 [i_2] [(_Bool)1] [(_Bool)1] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [(_Bool)1] [i_3] [i_8] [i_9] [(unsigned char)1] [i_3] [i_3])))) / (((/* implicit */int) arr_34 [i_2] [i_3] [i_8] [i_12 - 1] [i_12 - 1]))));
                        }
                        var_24 ^= ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-13)))) / (((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3] [i_8] [i_9])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_21 [i_9] [i_3] [i_3] [i_2] [i_2]))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2])) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_4))))))));
                        arr_46 [(_Bool)1] [i_3] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_41 [i_2] [i_3] [i_2] [i_9] [i_9]), (arr_41 [i_2] [i_2] [i_2] [i_8] [i_9])))) ? (((((/* implicit */_Bool) arr_41 [i_2] [i_3] [i_3] [i_8] [i_9])) ? (((/* implicit */int) arr_41 [i_2] [(_Bool)1] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_41 [i_2] [(_Bool)1] [i_8] [(_Bool)1] [i_9])))) : ((-(((/* implicit */int) (unsigned char)24))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 2; i_13 < 22; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_2] [i_3] [(_Bool)1] [i_8] [(_Bool)1] [(_Bool)1] [i_14])) ? (((((/* implicit */_Bool) ((arr_9 [i_13]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)225))))) ? ((+(((/* implicit */int) arr_13 [(_Bool)1] [i_3])))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_17 [(_Bool)1] [i_13 + 2]), (arr_17 [i_2] [i_13 - 1]))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((signed char) max((min((var_10), ((signed char)58))), (arr_48 [i_8] [i_13] [i_13]))))));
                                arr_52 [i_2] [i_2] [i_2] = min((((unsigned char) var_12)), (((/* implicit */unsigned char) arr_28 [i_2] [i_13 + 3])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_55 [(signed char)19] [(_Bool)1] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_29 [i_8] [i_3] [i_2])) : (((/* implicit */int) arr_29 [i_15] [i_8] [i_3]))));
                        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_15] [i_15] [i_8] [(_Bool)1] [(_Bool)1]))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + ((-(((/* implicit */int) arr_12 [(_Bool)1] [i_8] [i_15]))))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 1; i_16 < 22; i_16 += 2) 
                    {
                        arr_59 [i_2] [i_2] [(unsigned char)16] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((var_1) ? ((-(((/* implicit */int) arr_31 [(_Bool)1] [(signed char)14] [i_16 + 3])))) : (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) arr_31 [i_2] [(_Bool)1] [i_8])) : (((/* implicit */int) (signed char)122))))));
                        arr_60 [(signed char)15] [i_8] [i_16 - 1] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_16 + 3] [(signed char)0] [(signed char)0] [(signed char)0]))));
                        var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_16] [(_Bool)1] [(_Bool)1] [i_2] [i_2])) ? (((/* implicit */int) arr_23 [i_3] [i_16])) : (((/* implicit */int) arr_8 [i_16 + 2] [i_2]))));
                        var_31 = ((/* implicit */signed char) arr_23 [i_16 - 1] [i_16 + 3]);
                    }
                }
                /* vectorizable */
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        for (unsigned char i_19 = 1; i_19 < 23; i_19 += 4) 
                        {
                            {
                                arr_70 [i_2] [(_Bool)1] [i_17] [i_18] [i_2] = ((/* implicit */signed char) ((unsigned char) arr_14 [i_18] [i_19 - 1] [i_19 + 1]));
                                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_42 [i_19] [(signed char)19] [i_18] [i_17] [(signed char)6] [(signed char)6]))))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */signed char) arr_62 [i_2] [i_3] [(_Bool)1] [i_17]);
                }
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
                {
                    arr_74 [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_14))));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))) - (((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_20]))))) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_4)))))))));
                }
                var_35 = ((/* implicit */_Bool) arr_68 [i_2] [i_3] [i_3]);
            }
        } 
    } 
    var_36 ^= ((/* implicit */_Bool) (unsigned char)68);
}
