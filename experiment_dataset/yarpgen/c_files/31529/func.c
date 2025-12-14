/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31529
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)7957))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_11 = ((/* implicit */short) max((var_11), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = var_8;
                arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_3 [i_0])))) / (((/* implicit */int) ((short) arr_5 [i_1 + 1] [i_1 - 2] [i_0])))));
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (short)-2411)))))))) ? (((((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) >> (((((/* implicit */int) (short)-2417)) + (2428))))) >> (((((/* implicit */int) var_3)) - (14388))))) : (max((((((/* implicit */_Bool) (short)-6501)) ? (((/* implicit */int) (short)26134)) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))))));
                var_13 = ((/* implicit */short) min((var_13), (arr_6 [i_2] [i_2])));
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 2] [i_1 + 2]))))));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                        var_15 = arr_11 [i_0] [i_0] [i_0] [i_0];
                    }
                    for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_16 = ((short) (short)5938);
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                        var_18 = ((short) (short)15928);
                        var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (short i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */short) max((((((/* implicit */int) max((arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]), (var_3)))) ^ (((/* implicit */int) max((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_5)))))), (((/* implicit */int) ((short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_20 = ((/* implicit */short) (~(((/* implicit */int) (short)2411))));
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3]))) ? (min((((((/* implicit */int) arr_12 [i_3] [i_0] [i_0] [i_3])) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) arr_23 [i_3] [i_3])) >= (((/* implicit */int) var_3))))))) : (min((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (short)14885)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_2)))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))));
                        var_23 *= (short)-19690;
                        var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0] [i_1 + 2] [i_1 + 2] [i_3] [i_1 + 2])) ? (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_1] [i_1 - 3] [i_1 - 3] [i_3] [i_1 - 3]))));
                        var_25 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) arr_15 [i_1 - 2] [i_0] [i_0] [i_1 - 2])) >> (((((/* implicit */int) arr_15 [i_1 - 2] [i_0] [i_1 - 2] [i_1 - 2])) - (16252)))))) : (((/* implicit */short) ((((/* implicit */int) arr_15 [i_1 - 2] [i_0] [i_0] [i_1 - 2])) >> (((((((/* implicit */int) arr_15 [i_1 - 2] [i_0] [i_1 - 2] [i_1 - 2])) - (16252))) + (3462))))));
                    }
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((((/* implicit */int) arr_2 [i_3])) ^ (((/* implicit */int) arr_2 [i_3])))), (((/* implicit */int) arr_2 [i_3])))))));
                    var_27 = ((/* implicit */short) (-(((/* implicit */int) (short)504))));
                    var_28 = var_1;
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)26078)) ? (((/* implicit */int) (short)21376)) : (((/* implicit */int) (short)7799))));
                }
                var_30 = ((/* implicit */short) max((var_30), (((short) max((var_9), (arr_21 [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]))))));
            }
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    var_31 = arr_4 [i_0] [i_0] [i_0] [i_0];
                    var_32 = arr_15 [i_0] [i_0] [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (short i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        var_33 = var_7;
                        arr_37 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] |= ((short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)14291)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_34 *= var_5;
                    }
                }
                for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_35 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0]))))))))));
                    var_36 *= (short)29406;
                }
                for (short i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    var_37 = ((/* implicit */short) (+(((((/* implicit */int) var_4)) * (((/* implicit */int) arr_21 [i_13] [i_13] [i_13 - 1] [i_13] [i_13 - 2] [i_13] [i_13]))))));
                    /* LoopSeq 3 */
                    for (short i_14 = 4; i_14 < 15; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_13] [i_0])))))) >= (min((((/* implicit */int) var_0)), ((+(((/* implicit */int) (short)-14339))))))));
                        var_39 = ((short) max((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_1)));
                    }
                    for (short i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        var_40 -= ((/* implicit */short) ((((/* implicit */int) max((arr_12 [i_9] [i_1 + 1] [i_1 + 1] [i_9]), (arr_12 [i_9] [i_1] [i_1 - 3] [i_9])))) == ((~(((/* implicit */int) (short)-3287))))));
                        var_41 = (short)-11089;
                        var_42 = ((short) var_9);
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-9634), (var_3)))) ? (((/* implicit */int) ((short) (short)-22482))) : ((+(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4247)) ? (((/* implicit */int) arr_42 [i_15])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) max(((short)-24373), (arr_30 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) arr_13 [i_1 - 2]))));
                    }
                    for (short i_16 = 4; i_16 < 18; i_16 += 4) 
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((short) (short)11993);
                        var_44 = ((/* implicit */short) max((var_44), (arr_40 [i_9] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2])));
                        var_45 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])))))))) | ((+(((/* implicit */int) (short)8244))))));
                    }
                    var_46 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1 - 3] [i_13 + 1] [i_1 - 3] [i_13])) ? (((/* implicit */int) max((var_3), (arr_12 [i_1 + 2] [i_13 - 2] [i_13 - 2] [i_9])))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1 + 1] [i_13 - 1] [i_1 + 1] [i_9])) >= (((/* implicit */int) var_2)))))));
                }
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 19; i_17 += 4) 
                {
                    for (short i_18 = 1; i_18 < 16; i_18 += 4) 
                    {
                        {
                            var_47 = arr_11 [i_0] [i_0] [i_0] [i_0];
                            var_48 = ((/* implicit */short) min((var_48), (max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */int) arr_36 [i_1 + 1] [i_18 + 2] [i_1 + 1] [i_1 + 1] [i_18 + 2])) <= (((/* implicit */int) arr_13 [i_1])))))))));
                            var_49 = (short)6500;
                        }
                    } 
                } 
            }
            for (short i_19 = 4; i_19 < 17; i_19 += 1) 
            {
                var_50 *= ((/* implicit */short) min((((/* implicit */int) ((short) arr_52 [(short)14] [(short)14]))), ((+(((/* implicit */int) arr_52 [(short)14] [(short)14]))))));
                var_51 -= arr_38 [i_0] [i_0] [(short)8] [i_0] [i_0] [i_0];
            }
        }
    }
    for (short i_20 = 0; i_20 < 19; i_20 += 1) /* same iter space */
    {
        arr_60 [i_20] = ((/* implicit */short) min((((/* implicit */int) (short)-22470)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32720))))) : (((/* implicit */int) arr_51 [i_20] [i_20] [i_20] [i_20] [i_20]))))));
        /* LoopSeq 2 */
        for (short i_21 = 2; i_21 < 16; i_21 += 2) 
        {
            arr_63 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_35 [i_21 + 3] [i_21 + 3] [i_21] [i_21 - 2] [i_21])) : (((/* implicit */int) arr_35 [i_21 - 2] [i_21 + 2] [i_21 - 2] [i_21 - 2] [i_21])))) : (((/* implicit */int) min((arr_35 [i_21 - 2] [i_21 - 1] [i_21] [i_21 - 2] [i_21]), (arr_35 [i_20] [i_21 + 3] [i_20] [i_21 + 2] [i_20]))))));
            var_52 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32276)) : (((/* implicit */int) (short)7039)))) / (((/* implicit */int) arr_21 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))) ^ (((/* implicit */int) arr_58 [i_20] [i_20]))));
        }
        /* vectorizable */
        for (short i_22 = 3; i_22 < 16; i_22 += 1) 
        {
            var_53 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_22 - 1] [(short)2] [i_22 - 1] [i_22 - 1])) ? (((/* implicit */int) arr_29 [(short)14] [(short)14] [(short)14])) : (((/* implicit */int) arr_15 [i_22 + 2] [(short)16] [(short)16] [i_22 - 3]))));
            var_54 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_20] [i_22 - 2])) == (((/* implicit */int) arr_62 [i_22 + 3]))));
        }
        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_20] [i_20] [i_20] [i_20])) ? ((+(((/* implicit */int) arr_30 [i_20] [i_20] [i_20])))) : (((/* implicit */int) arr_58 [i_20] [i_20]))));
    }
    var_56 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_3))))) >= (((/* implicit */int) var_6))));
}
