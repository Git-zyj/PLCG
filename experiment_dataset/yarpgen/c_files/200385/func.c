/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200385
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
    var_15 &= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) var_12))) >> (((/* implicit */int) ((_Bool) var_5))))) | ((~(((/* implicit */int) min((arr_0 [i_0]), (var_3))))))));
        var_17 = arr_1 [i_0] [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_18 |= ((_Bool) arr_1 [i_2 - 1] [i_2 - 1]);
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2]))));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))));
                            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_3] [i_4] [i_5]))));
                            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (!(arr_11 [i_1] [i_2 - 1] [i_3] [i_4] [i_5] [i_4]))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) max((var_21), (var_10)));
            arr_15 [i_1] [i_2] = ((arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [i_2 - 1]) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))));
            var_22 = var_2;
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_26 [i_1] [i_8] [i_7] = ((_Bool) (_Bool)1);
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_6 - 1] [i_6] [i_6 - 1] [i_8] [i_6] [i_1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_34 [i_1] [(_Bool)0] [(_Bool)1] [i_9] [i_11 - 1] = var_12;
                            var_24 = max((max((arr_11 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]), (arr_11 [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] [i_11 - 1]))), (((arr_10 [i_11 - 1] [i_9] [i_9] [i_6 - 1]) && (arr_10 [i_11 - 1] [i_9] [i_9] [i_6 - 1]))));
                            arr_35 [i_1] [i_1] [i_1] [i_9] [i_1] [i_1] [i_1] = ((_Bool) ((_Bool) (+(((/* implicit */int) arr_27 [(_Bool)1] [i_6] [(_Bool)1] [i_9])))));
                            var_25 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1] [i_11 - 1])) | (((/* implicit */int) arr_4 [i_9] [i_6 - 1] [i_6 - 1]))))) && (max((var_4), (arr_22 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_11 - 1]))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_44 [i_1] [i_12] [i_13] = var_6;
                        arr_45 [i_12] [i_14] [i_13] [i_12] = ((_Bool) ((((/* implicit */int) arr_40 [i_12])) ^ (((/* implicit */int) arr_40 [i_12]))));
                        arr_46 [(_Bool)1] &= ((/* implicit */_Bool) (((-((+(((/* implicit */int) var_0)))))) | (((((/* implicit */int) arr_29 [(_Bool)1] [i_14 - 1] [i_14 - 1] [(_Bool)0])) | (((/* implicit */int) arr_29 [(_Bool)1] [i_14 - 1] [i_14] [i_14]))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                var_26 = ((_Bool) (~(((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */int) var_11)), (((((/* implicit */int) arr_30 [(_Bool)1] [(_Bool)1])) | (((/* implicit */int) arr_30 [(_Bool)1] [(_Bool)1])))))))));
                            arr_55 [i_1] [i_12] [i_12] [(_Bool)1] [i_17] &= var_14;
                            var_28 = arr_49 [(_Bool)1] [i_15] [i_16] [i_17];
                            arr_56 [i_12] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_15 - 1] [i_15 - 1]))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_54 [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15] [i_12]))) | (((/* implicit */int) (!(arr_54 [i_15 - 1] [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_12]))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_3)) * (((/* implicit */int) var_9))))));
                            var_31 |= var_10;
                            var_32 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_62 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) | (max(((~(((/* implicit */int) var_14)))), (((/* implicit */int) arr_59 [i_1] [i_1] [(_Bool)1] [i_19] [i_20]))))));
                            var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_12]))));
                        }
                    } 
                } 
                arr_63 [i_12] [i_12] [i_12] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_51 [i_1] [i_12] [i_12] [(_Bool)0])) % (((/* implicit */int) arr_19 [i_1] [i_12] [i_18])))), (((/* implicit */int) ((arr_19 [i_1] [i_12] [i_18]) || (arr_51 [i_1] [i_1] [i_12] [i_1]))))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_34 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_38 [i_1] [i_12] [i_21]))))));
                arr_68 [i_1] [i_12] [i_1] = ((_Bool) ((_Bool) arr_0 [i_12]));
                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((((/* implicit */int) max((min((arr_6 [(_Bool)1] [i_12]), (arr_10 [i_21] [i_12] [(_Bool)1] [i_12]))), (arr_27 [i_21] [i_12] [i_21] [(_Bool)1])))), (((((/* implicit */int) arr_16 [i_1] [i_21])) - (((/* implicit */int) arr_16 [i_12] [i_21])))))))));
                arr_69 [i_12] = var_0;
            }
        }
        arr_70 [(_Bool)1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_12 [i_1] [(_Bool)1] [i_1] [i_1]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_81 [i_24] [i_22] [i_23] [i_24] = ((max((((/* implicit */int) arr_78 [i_22 - 1] [i_23] [i_24])), (((((/* implicit */int) arr_77 [i_24] [i_23] [i_24])) | (((/* implicit */int) arr_71 [i_24])))))) > (((/* implicit */int) arr_75 [i_22 - 1] [i_22 - 1])));
                    var_36 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_77 [(_Bool)1] [(_Bool)1] [i_24])) + (((/* implicit */int) var_8))))));
                    arr_82 [i_22 - 1] [i_22 - 1] [i_24] [i_24] = arr_77 [i_24] [i_23] [i_24];
                    arr_83 [i_22] [i_24] [i_24] = ((_Bool) (~(((/* implicit */int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_37 *= var_14;
                            var_38 = (!(((((/* implicit */int) arr_77 [(_Bool)1] [i_22 - 1] [i_25])) > (((/* implicit */int) arr_77 [(_Bool)1] [i_22 - 1] [i_25])))));
                            var_39 = ((_Bool) (-(((/* implicit */int) arr_76 [i_23] [i_22 - 1] [i_25]))));
                            arr_88 [i_26] [i_22] [i_22] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_7))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_40 = var_9;
                    var_41 *= min((min((arr_76 [i_22] [i_22] [i_22 - 1]), (var_2))), (arr_77 [(_Bool)1] [i_23] [i_23]));
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    var_42 &= arr_74 [i_22] [i_23] [i_28];
                    /* LoopSeq 1 */
                    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                    {
                        arr_97 [i_22] [i_23] [i_22] [i_28] [i_29] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_91 [i_28] [i_29 - 1] [i_28] [i_29 - 1])) * (((/* implicit */int) arr_95 [i_28] [i_29 - 1] [i_29 - 1] [i_29] [i_29]))))));
                        var_43 = min(((_Bool)1), ((_Bool)0));
                    }
                }
                arr_98 [i_23] = min((arr_91 [i_22 - 1] [i_22] [i_23] [i_22]), (arr_91 [i_22 - 1] [i_23] [i_23] [(_Bool)1]));
                arr_99 [i_23] = arr_79 [(_Bool)1];
            }
        } 
    } 
}
