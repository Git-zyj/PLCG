/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31693
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
    var_20 = var_8;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_23 = ((((/* implicit */int) var_11)) != ((-(((/* implicit */int) arr_1 [i_0] [i_0])))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2] [(_Bool)1]))))) ? (((var_18) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_4 [i_0]))));
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), ((!(arr_10 [i_0] [i_0] [(_Bool)1])))));
                            var_27 = (_Bool)1;
                            var_28 = ((/* implicit */_Bool) ((((_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_4] [i_0] [i_3] [i_4])) : (((/* implicit */int) (!(arr_10 [i_0] [i_0] [i_0]))))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(var_15)))) : ((+(((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                var_30 |= ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) % (((var_7) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_3]))))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3]))));
                    arr_17 [i_0] = ((/* implicit */_Bool) ((var_11) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_1))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_0 [i_7]))))) ? (((/* implicit */int) arr_8 [(_Bool)0] [i_2])) : (((/* implicit */int) (!(arr_4 [i_3]))))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [(_Bool)0] [i_2] [i_2] [i_3] [i_3] [i_7])) * (((/* implicit */int) ((_Bool) var_13)))));
                }
                /* LoopSeq 4 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_2] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(_Bool)1])) | ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) ((((_Bool) arr_20 [i_9])) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_0 [i_0]))));
                        arr_28 [i_0] [(_Bool)1] [i_3] [(_Bool)1] [i_9] = ((_Bool) arr_15 [i_0] [i_0]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) max((var_35), (((_Bool) arr_27 [i_10] [i_8] [i_3] [i_2] [i_0]))));
                        var_36 = arr_14 [i_0];
                        var_37 = ((/* implicit */_Bool) max((var_37), (arr_11 [i_8] [i_2] [i_3] [i_3] [i_3] [i_8] [i_0])));
                        var_38 |= var_14;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_39 = (!(((/* implicit */_Bool) ((arr_21 [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18))))));
                        arr_34 [i_0] [i_2] [i_3] [i_0] [i_11] = ((/* implicit */_Bool) ((arr_29 [i_11] [i_8] [i_3] [i_2] [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_8] [i_8] [i_0]))));
                        var_40 ^= ((/* implicit */_Bool) (-((~(((/* implicit */int) var_13))))));
                        var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_11] [i_0] [i_0] [i_0]))));
                        var_42 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_0] [i_0])))) * ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_43 = ((/* implicit */_Bool) ((arr_3 [i_0] [i_3] [i_8]) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_8] [i_3]))));
                        var_44 += var_4;
                    }
                    var_45 *= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_8))) - (((/* implicit */int) arr_23 [i_2] [(_Bool)1] [i_2] [i_2]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */_Bool) min((var_46), ((_Bool)1)));
                    var_47 = (((!(var_8))) || (((var_15) && (var_4))));
                    var_48 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_30 [(_Bool)1]))))) << (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3] [(_Bool)1]))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_49 = ((/* implicit */_Bool) max((var_49), (var_18)));
                    var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_2])) + (((/* implicit */int) arr_25 [i_0] [i_2] [i_3] [i_3] [i_2] [i_0])))) - (((/* implicit */int) arr_43 [i_0] [i_2] [(_Bool)1] [i_2]))));
                    /* LoopSeq 4 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_46 [i_0] [i_0] = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_2])) : (((/* implicit */int) arr_5 [(_Bool)1] [i_16] [i_3]))));
                        var_52 += (!(arr_22 [i_0] [i_2] [i_3] [i_15]));
                        var_53 = var_10;
                        var_54 = ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_33 [i_16] [(_Bool)1] [i_3] [(_Bool)1])));
                        var_55 ^= (!(((_Bool) arr_26 [(_Bool)1] [i_15] [i_3] [i_2] [(_Bool)1])));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_56 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_17 - 1] [i_17 - 1] [i_17 - 1] [(_Bool)1] [i_17 - 1] [i_17 - 1]))));
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_17 - 1])) & (((/* implicit */int) arr_0 [i_0]))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_58 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                        var_59 = (((+(((/* implicit */int) var_10)))) == (((/* implicit */int) arr_52 [i_0] [i_2])));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_60 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_15] [i_0]))));
                        arr_57 [i_19] [i_19] [(_Bool)1] [i_0] [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) var_16))));
                    }
                    var_61 -= ((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_9))))) != (((/* implicit */int) var_11)));
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_64 [i_2] [i_0] [i_21] = ((_Bool) ((((/* implicit */int) arr_32 [i_0] [i_2] [i_2] [i_20] [i_21])) >> (((/* implicit */int) var_1))));
                    arr_65 [i_21] [(_Bool)0] [i_0] |= (!(arr_27 [(_Bool)1] [i_20] [(_Bool)1] [i_2] [i_0]));
                    arr_66 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_69 [i_0] [(_Bool)0] [i_20] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_0] [i_2] [(_Bool)1] [(_Bool)1]))));
                    arr_70 [i_0] [i_20] [i_20] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((arr_23 [i_20] [i_2] [i_20] [i_22]) || ((_Bool)1))))));
                }
                var_62 = ((((/* implicit */int) var_17)) >= (((/* implicit */int) ((_Bool) (_Bool)1))));
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
            {
                arr_73 [(_Bool)1] [(_Bool)1] [i_0] = ((_Bool) arr_67 [i_0] [i_0] [i_2] [i_23]);
                arr_74 [i_0] = (((!(var_3))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_19))))));
                var_63 = var_17;
                var_64 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [(_Bool)0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) var_16)) >> (((/* implicit */int) var_10))))));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
            {
                var_65 = ((/* implicit */_Bool) min((var_65), (((_Bool) arr_13 [i_0] [i_2] [i_2] [i_24] [i_24]))));
                var_66 = arr_11 [i_24] [i_24] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [(_Bool)1];
            }
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_80 [i_0] [i_0] [i_25] = ((_Bool) ((_Bool) var_17));
            /* LoopSeq 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                var_67 = ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])));
                var_68 = ((/* implicit */_Bool) ((arr_25 [i_25] [i_25] [i_26] [i_25] [i_25] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_26 [i_0] [i_25] [i_25] [i_25] [i_0]))));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_90 [i_29] [i_28 + 1] [(_Bool)1] [i_0] [i_25] [i_0] [(_Bool)1] = (_Bool)1;
                        var_69 = (!(var_18));
                        var_70 = ((_Bool) var_5);
                        var_71 ^= ((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) arr_63 [i_0] [i_25] [i_25] [i_28]))))));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        arr_93 [i_0] [i_28] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_40 [i_28 + 1] [i_28 + 1] [i_28] [i_28 + 1])) > (((/* implicit */int) arr_40 [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 + 1])));
                        arr_94 [i_0] [i_28] [i_27] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_28 + 1] [i_28 + 1] [i_28 + 1]))));
                        arr_95 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0]))));
                    }
                    var_72 = ((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))));
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_73 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    var_74 &= ((_Bool) var_16);
                }
                /* LoopNest 2 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            var_75 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_62 [i_27] [i_33]))));
                            var_76 = ((/* implicit */_Bool) ((arr_76 [i_33] [i_32] [i_25]) ? (((/* implicit */int) arr_76 [i_32] [i_27] [i_25])) : (((/* implicit */int) arr_7 [i_33] [i_0] [i_0] [i_25]))));
                        }
                    } 
                } 
                arr_107 [i_0] = (!(arr_67 [i_27] [i_25] [i_0] [i_0]));
            }
            var_77 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_0] [(_Bool)1] [(_Bool)0] [i_0] [i_0] [i_0] [i_0]))));
            arr_108 [i_0] [i_0] = (!(arr_5 [i_0] [i_0] [i_0]));
        }
        var_78 = ((_Bool) arr_89 [i_0] [(_Bool)1] [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_34 = 0; i_34 < 0; i_34 += 1) /* same iter space */
    {
        var_79 += ((((/* implicit */int) var_4)) <= (((((/* implicit */int) arr_111 [i_34 + 1] [i_34 + 1])) - (((/* implicit */int) var_18)))));
        var_80 += ((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((/* implicit */int) arr_110 [i_34 + 1]))));
        arr_112 [i_34 + 1] [i_34] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_110 [i_34 + 1]))));
        var_81 -= arr_109 [(_Bool)1] [(_Bool)1];
        /* LoopNest 2 */
        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
        {
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                {
                    var_82 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_114 [i_34 + 1] [i_35] [i_35])) ^ (((arr_109 [(_Bool)0] [i_35]) ? (((/* implicit */int) arr_116 [i_35] [(_Bool)1] [i_36])) : (((/* implicit */int) arr_113 [i_34] [i_35]))))));
                    arr_118 [i_34] [i_34] = (_Bool)0;
                }
            } 
        } 
    }
    for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) /* same iter space */
    {
        var_83 -= ((/* implicit */_Bool) ((((_Bool) arr_117 [(_Bool)1] [i_37 + 1] [i_37 + 1] [(_Bool)1])) ? (((/* implicit */int) min((((_Bool) arr_119 [i_37])), ((!((_Bool)1)))))) : ((~(((/* implicit */int) arr_120 [i_37 + 1]))))));
        var_84 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_109 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_117 [(_Bool)1] [i_37] [i_37 + 1] [(_Bool)1])))))) * (((min((arr_115 [(_Bool)1] [i_37] [i_37]), ((_Bool)1))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_109 [(_Bool)1] [(_Bool)1]))))));
        var_85 = ((/* implicit */_Bool) min((var_85), (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))))))))));
    }
    var_86 = ((/* implicit */_Bool) min((var_86), (var_4)));
    var_87 = (_Bool)1;
}
