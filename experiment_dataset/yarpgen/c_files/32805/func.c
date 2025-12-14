/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32805
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
    var_14 = var_4;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((min((arr_0 [i_0 - 1] [i_0 - 1]), ((_Bool)1))), (((_Bool) arr_0 [i_0 - 1] [i_0 - 1])));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 1])) >> (((/* implicit */int) arr_2 [i_0 - 1]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 *= (_Bool)1;
        var_16 = ((/* implicit */_Bool) min((var_16), (var_4)));
        var_17 = ((((/* implicit */int) arr_6 [i_1 - 1])) <= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        var_18 = (_Bool)1;
        var_19 -= ((/* implicit */_Bool) max((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_1))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_9 [i_2 + 1] = ((_Bool) ((var_6) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 + 1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_20 = (((~(((/* implicit */int) var_11)))) > (((/* implicit */int) (_Bool)1)));
            arr_12 [i_2 + 1] [i_3] = arr_10 [i_2 + 1];
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((arr_15 [i_2 + 1] [(_Bool)1] [i_2] [i_4]) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 + 1])))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (var_9)));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) (_Bool)0))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)0) || ((_Bool)0))))));
                        var_25 = (_Bool)0;
                        arr_20 [i_2] [i_4] [i_2] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
                        var_26 = ((_Bool) var_10);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_6 [i_2])))));
                        var_27 = (!(arr_21 [i_2 + 1] [(_Bool)1] [i_2] [i_2] [i_2]));
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_28 = var_0;
                        var_29 = arr_13 [i_4];
                        var_30 = ((/* implicit */_Bool) ((((arr_6 [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_2] [i_3] [i_3])))) >> (((/* implicit */int) (!(arr_6 [i_4]))))));
                        arr_27 [i_2] [(_Bool)1] [i_4] [i_5] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_2] [i_4] [i_8 + 1] [i_5])) + (((/* implicit */int) (_Bool)1))));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_30 [i_2] [i_4] [i_4] [i_4] = arr_26 [i_2] [i_2] [i_4] [i_4] [i_9] [i_9];
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_33 [(_Bool)1] [i_3] [(_Bool)1] [i_9] [i_4] = (_Bool)1;
                        var_31 ^= var_13;
                        arr_34 [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_37 [i_2] [(_Bool)1] [(_Bool)1] [i_4] [(_Bool)1] = (_Bool)0;
                        arr_38 [i_9] [i_4] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) (_Bool)0))))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (arr_21 [i_2] [i_4] [i_3] [i_4] [i_11])));
                        var_33 ^= (_Bool)1;
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_2 + 1] [i_2] [i_2 + 1])) - (((/* implicit */int) ((_Bool) var_8)))));
                        arr_41 [i_2] [i_4] [i_4] [i_9] [i_12] = var_4;
                        arr_42 [(_Bool)1] [i_3] [i_4] [i_9] [i_12] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_45 [i_13] [i_4] [i_4] [i_4] [i_2] = (_Bool)0;
                        var_35 = ((/* implicit */_Bool) ((arr_1 [i_2 + 1]) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        var_36 -= arr_7 [i_2] [i_2 + 1];
                    }
                    var_37 -= (_Bool)0;
                    arr_46 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_38 = (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))));
                    var_39 -= (_Bool)1;
                    var_40 = (!(arr_21 [i_2] [i_14] [(_Bool)1] [(_Bool)1] [i_2 + 1]));
                    var_41 -= arr_36 [i_2] [i_2 + 1] [i_2] [i_2 + 1];
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_42 = (_Bool)0;
                    var_43 = var_13;
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_55 [i_2] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_21 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_54 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1]))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (var_7)));
                        var_45 = ((/* implicit */_Bool) max((var_45), (arr_40 [i_2] [i_3] [(_Bool)1] [i_15] [(_Bool)1])));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_46 = ((/* implicit */_Bool) max((var_46), (var_12)));
                        var_47 = arr_53 [i_17];
                    }
                }
                var_48 -= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_2] [(_Bool)1] [i_3] [i_4])) >> (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */int) arr_43 [(_Bool)1] [i_3] [i_4] [i_18] [i_2] [i_2 + 1] [i_4])) >> (((/* implicit */int) (_Bool)1)))))));
                    arr_60 [i_4] [i_4] [i_3] [i_4] = (_Bool)1;
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_67 [i_2] [i_3] [i_4] [i_4] [i_4] = var_4;
                        var_50 ^= (!(arr_56 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                    {
                        arr_70 [i_19] [i_19] [i_19] [i_19] [i_4] [(_Bool)0] [i_19] = var_8;
                        arr_71 [i_2] [i_2 + 1] [i_4] [i_2] [i_2 + 1] = var_12;
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */int) arr_49 [(_Bool)1] [i_2 + 1] [i_4] [(_Bool)1] [i_22])) * (((/* implicit */int) arr_54 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [(_Bool)1]))));
                        var_52 = ((_Bool) arr_56 [i_19] [i_2] [i_19] [i_2 + 1] [i_2]);
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
                    }
                    var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        arr_78 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)0))) - (((/* implicit */int) arr_11 [i_2 + 1]))));
                        arr_79 [i_4] [i_4] = (!((_Bool)1));
                        arr_80 [i_2 + 1] [i_4] = ((((arr_5 [i_2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_58 [i_2] [i_3] [i_19] [i_19])))) != ((~(((/* implicit */int) (_Bool)1)))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        arr_85 [i_2] [i_4] [i_2 + 1] [i_2] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (-(((arr_84 [i_2] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_66 [i_2 + 1] [i_2] [(_Bool)1] [(_Bool)1] [i_2])) : (((/* implicit */int) var_12))))));
                        arr_86 [i_24] [i_4] [i_3] [i_19] [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_81 [i_2] [i_4]))));
                        arr_87 [i_2 + 1] [i_3] [i_4] [i_4] = var_4;
                        var_55 -= (!(arr_61 [i_2] [i_3] [i_2 + 1] [i_19] [(_Bool)1] [i_3]));
                    }
                    var_56 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    var_57 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                }
            }
            arr_88 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            var_58 = ((_Bool) (_Bool)1);
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_59 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_2]) ? (((/* implicit */int) arr_28 [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_2] [i_25])) : (((/* implicit */int) arr_28 [i_2] [i_2 + 1] [i_2] [i_25] [i_2]))))) ? (((/* implicit */int) (!(arr_10 [i_2])))) : (((/* implicit */int) min(((_Bool)0), ((_Bool)0))))));
            var_60 = arr_56 [i_25] [i_25] [i_2 + 1] [i_2] [i_25];
            arr_91 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
        {
            arr_94 [i_26] [(_Bool)1] [i_26] = ((_Bool) arr_77 [i_26] [i_26 + 1] [(_Bool)1] [i_2 + 1] [i_26]);
            var_61 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_13))))));
            /* LoopNest 2 */
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        arr_101 [i_28] [i_26] [i_26] [i_2 + 1] = arr_44 [i_2] [i_2] [i_26] [i_27 - 1] [i_28];
                        var_62 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
                        {
                            arr_104 [i_26] [i_26] [i_26] [i_26] [i_26 + 1] [i_26] = ((/* implicit */_Bool) ((arr_97 [i_26] [i_27 - 1] [i_26]) ? (((/* implicit */int) arr_68 [i_27] [i_27] [i_26] [i_27 - 1] [i_27])) : ((~(((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1]))))));
                            var_63 = ((_Bool) (_Bool)1);
                            arr_105 [i_2] [i_27] [i_26] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_75 [i_27 - 1] [i_27 - 1] [i_27] [i_27 - 1] [i_27]))));
                            var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                            var_65 = arr_0 [i_26 + 1] [i_26 + 1];
                        }
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                        {
                            arr_108 [(_Bool)1] [i_26 + 1] [i_26 + 1] [i_26] [i_26] = (_Bool)1;
                            var_66 = arr_96 [i_2 + 1] [(_Bool)1] [i_26] [i_30];
                            arr_109 [i_26] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
                            var_67 = ((/* implicit */_Bool) max((var_67), (var_8)));
                        }
                        for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                        {
                            arr_113 [i_2] [i_26] [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_100 [i_28] [i_27] [i_26 + 1] [i_2 + 1]))));
                            var_68 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_69 = ((/* implicit */_Bool) max((var_69), (var_0)));
                            var_70 = ((/* implicit */_Bool) ((arr_31 [i_27] [i_27 - 1] [i_26 + 1] [i_26 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_17 [i_26] [(_Bool)0])) : (((/* implicit */int) var_12))));
                            var_71 = ((/* implicit */_Bool) max((var_71), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                } 
            } 
        }
    }
    var_72 = ((/* implicit */_Bool) max((((/* implicit */int) (!((_Bool)1)))), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) (_Bool)1))))));
}
