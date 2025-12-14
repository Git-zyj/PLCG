/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27256
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
    var_15 = ((int) var_9);
    var_16 += ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((var_11) / (var_7)))) || ((!(((/* implicit */_Bool) 2147483647))))))), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_2 = 3; i_2 < 24; i_2 += 2) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_5));
                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)127))));
            }
            for (int i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                var_18 = (((+(var_4))) / ((-(((/* implicit */int) var_14)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_19 = (-((-(((/* implicit */int) (signed char)46)))));
                            var_20 = ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2]);
                            arr_21 [i_0 + 1] [i_1] [i_3 + 1] [i_3] [i_4] [i_3] [i_5] = ((/* implicit */int) (signed char)59);
                            arr_22 [i_0] [i_0] [i_0] [i_4] [i_3] = ((arr_20 [i_3] [i_1] [i_3]) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4]))))));
                        }
                    } 
                } 
            }
            for (int i_6 = 1; i_6 < 23; i_6 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_2))) ? (((int) -1203531467)) : (var_7)));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_22 = (+(arr_11 [i_1]));
                    var_23 = ((/* implicit */int) (~((((_Bool)1) ? (((/* implicit */unsigned int) 1394379268)) : (8U)))));
                }
            }
            for (int i_8 = 1; i_8 < 23; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0 + 1] [4] [i_8 + 2] [4] [(_Bool)1] = ((((-1394379285) + (2147483647))) >> (((1436695201U) - (1436695178U))));
                    var_24 = ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-114)));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(arr_11 [i_1])))) - (var_13)));
                        arr_40 [i_0] [i_0] [i_8] [i_10] [i_8] &= ((/* implicit */int) ((((/* implicit */_Bool) 2147483628)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) : (var_13)));
                        arr_41 [i_0] [i_8] [i_10] [i_11] = ((/* implicit */_Bool) (~(-2090095022)));
                        arr_42 [i_1] [i_1] [i_0 + 1] = ((/* implicit */int) ((unsigned int) var_8));
                    }
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) ((arr_11 [i_1]) >= (arr_11 [i_1])));
                        var_27 = ((/* implicit */int) max((var_27), (((int) ((((/* implicit */int) var_14)) & (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_13 = 2; i_13 < 23; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */int) var_13);
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-47)))))));
                        arr_49 [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_0 - 1] = var_5;
                    }
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */int) ((arr_1 [i_10]) || (((/* implicit */_Bool) -1394379291))));
                        arr_53 [i_14] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                    }
                    var_31 = var_3;
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) (-(471203447)));
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8U))));
                        arr_60 [i_0 - 1] [i_15] [i_16] = ((/* implicit */int) (-(897933556U)));
                        var_33 ^= ((((/* implicit */_Bool) ((unsigned int) (-2147483647 - 1)))) ? (var_7) : (((-930574544) * (((/* implicit */int) (_Bool)1)))));
                    }
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
                    {
                        arr_65 [4] [i_17] = ((/* implicit */_Bool) var_10);
                        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-746686240)))) ? (arr_0 [i_0 - 1] [i_8 - 1]) : (((/* implicit */unsigned int) var_11))));
                        arr_66 [i_8] [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (4294967274U)));
                        var_35 = (+(((((/* implicit */int) (_Bool)1)) >> (((345686320U) - (345686299U))))));
                        var_36 = (+(-930574557));
                    }
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
                    {
                        var_37 = (+(((/* implicit */int) (_Bool)1)));
                        arr_69 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_18] [i_0] = (-(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (421673407))));
                    }
                    var_38 ^= ((((/* implicit */_Bool) var_1)) ? (arr_34 [i_0 - 1] [i_8 + 2]) : (((((/* implicit */_Bool) arr_37 [i_15] [i_0 - 1] [i_1] [i_0 - 1] [i_0])) ? (-119909926) : (((/* implicit */int) (_Bool)1)))));
                }
                var_39 = ((/* implicit */_Bool) ((int) -474819872));
            }
            var_40 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_61 [i_0] [i_1] [(signed char)23]))) / (((((/* implicit */_Bool) 1198716477)) ? (((/* implicit */unsigned int) var_9)) : (3836481554U)))));
            arr_70 [i_0] = ((int) (~(var_4)));
            var_41 = ((/* implicit */signed char) var_4);
        }
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) var_11))));
        arr_71 [i_0] [i_0] = arr_32 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 1];
    }
}
