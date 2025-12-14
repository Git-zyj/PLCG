/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218443
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_17 |= ((/* implicit */signed char) max((arr_10 [i_0] [i_0] [i_2] [i_3 - 1]), (((/* implicit */int) (signed char)63))));
                        var_18 = ((/* implicit */unsigned short) arr_2 [i_2]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_19 &= min((((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-109)) & (((/* implicit */int) (signed char)-118)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 41957037)) ? (-187581468) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_7)))))));
                            var_20 = ((/* implicit */signed char) max(((~(((/* implicit */int) (unsigned short)62988)))), ((-(-361689739)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) (+(var_11)));
        }
        for (signed char i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (var_1)));
                            arr_30 [i_0] [i_0] [i_8 - 2] [i_0] [i_10] [i_9] = ((/* implicit */int) arr_18 [i_0] [(signed char)11]);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : ((~(0))))))))));
                        }
                    } 
                } 
            } 
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) (unsigned short)56119)) : (0)))));
            var_24 -= min(((unsigned short)9401), (((/* implicit */unsigned short) (signed char)-113)));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
            {
                {
                    var_25 = arr_23 [0] [i_11];
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_0] [(unsigned short)10] [i_0])), (var_9))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 10; i_14 += 3) 
                        {
                            {
                                arr_42 [i_11] [i_11] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-37))))), (((((/* implicit */_Bool) arr_41 [i_12] [i_12 - 1] [i_12] [i_12 - 2] [i_12 + 3] [(signed char)2] [i_12 + 3])) ? (((/* implicit */int) arr_41 [i_12] [i_12 + 3] [i_12] [i_12 - 1] [(signed char)12] [(signed char)6] [i_12 + 1])) : (-889962181)))));
                                var_27 = ((/* implicit */signed char) min((min((arr_5 [i_0 - 3] [i_11] [(unsigned short)6] [i_12 + 2]), (arr_5 [i_0 - 1] [i_12 + 2] [i_12] [i_12 + 2]))), (((/* implicit */int) arr_36 [i_0] [i_0] [i_11] [i_0]))));
                            }
                        } 
                    } 
                    arr_43 [i_11] [i_0] [i_0] [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), ((signed char)-5)))) ? (((/* implicit */int) ((unsigned short) arr_26 [i_12] [i_12 - 1] [i_12] [i_12] [i_12] [(signed char)5]))) : (min((arr_34 [i_0] [i_12]), (((/* implicit */int) var_6))))))) ? ((-(((/* implicit */int) arr_26 [i_0 + 1] [i_0 + 1] [i_11] [i_0 + 1] [i_11] [i_12])))) : (((((/* implicit */int) arr_1 [i_0 + 1])) - (arr_32 [i_12 + 2] [(signed char)4]))));
                }
            } 
        } 
        var_28 = ((min((1419418070), (978766682))) - ((+(max((187581470), (((/* implicit */int) (signed char)90)))))));
        /* LoopSeq 4 */
        for (signed char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    for (signed char i_18 = 4; i_18 < 12; i_18 += 3) 
                    {
                        {
                            var_29 = arr_36 [i_18 - 1] [i_15] [i_15] [i_0 - 3];
                            var_30 = ((/* implicit */unsigned short) ((int) min((arr_49 [i_0] [3] [i_15] [i_16] [i_17] [i_18]), (arr_49 [i_0 - 2] [i_15] [i_0 - 2] [i_17] [i_18] [i_18]))));
                            var_31 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */int) arr_47 [i_0 + 1] [i_16] [i_17])) <= (((/* implicit */int) arr_47 [i_0 + 1] [i_0] [i_0]))))) : (((/* implicit */int) min((var_5), (arr_47 [i_0 - 1] [i_0 - 1] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_28 [12] [i_0] [12] [i_0] [i_0]))))) ? (((/* implicit */int) max((var_6), (arr_45 [i_0 - 2] [i_0 - 2] [i_0 - 3])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_13 [i_0] [0] [i_0 + 1] [i_0 + 1])))))));
            var_33 = ((/* implicit */signed char) arr_49 [i_0 - 2] [(unsigned short)11] [5] [i_15] [i_15] [(unsigned short)4]);
        }
        for (signed char i_19 = 1; i_19 < 11; i_19 += 2) 
        {
            var_34 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_13)));
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                for (unsigned short i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    for (signed char i_22 = 3; i_22 < 11; i_22 += 4) 
                    {
                        {
                            var_35 = (signed char)-118;
                            var_36 = arr_7 [i_20] [i_20] [i_19] [i_20];
                            var_37 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (unsigned short)14271)), (8))) >= (min(((+(((/* implicit */int) (unsigned short)62940)))), (((int) -2036242494))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (+(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_3 [i_0] [i_19] [i_0 - 2]))))))))));
            var_39 = var_9;
        }
        for (unsigned short i_23 = 1; i_23 < 12; i_23 += 2) 
        {
            var_40 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_50 [i_0 - 3] [i_0])))))) <= (arr_66 [0] [i_23])));
            var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_23] [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1])) ? (((int) (signed char)127)) : (max((((/* implicit */int) ((signed char) -879716031))), (((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)-125))))))));
            var_42 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)));
        }
        for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            arr_72 [i_24] = (~(((/* implicit */int) var_2)));
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_8), (arr_23 [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)53)), (arr_21 [i_0] [i_0 - 3])))) ^ (((/* implicit */int) ((((/* implicit */int) var_9)) > (arr_61 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_71 [11] [8])) : (((/* implicit */int) arr_50 [(signed char)8] [(signed char)8])))) <= (((/* implicit */int) arr_69 [i_0])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_25 = 3; i_25 < 11; i_25 += 3) 
            {
                arr_75 [i_0] [i_24] [i_24] = (-(((/* implicit */int) (signed char)110)));
                var_44 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_14)))));
            }
            for (int i_26 = 0; i_26 < 13; i_26 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_27 = 1; i_27 < 11; i_27 += 1) /* same iter space */
                {
                    var_45 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_24] [i_26] [i_0])) ? (((/* implicit */int) var_14)) : (-11092086))) : ((-(((/* implicit */int) arr_69 [i_24])))))) < (((((/* implicit */int) arr_36 [i_27] [(signed char)12] [(signed char)12] [i_27 + 2])) - (((/* implicit */int) arr_9 [i_27] [i_27 + 1] [i_27] [i_27 - 1]))))));
                    var_46 = ((((/* implicit */_Bool) ((signed char) (unsigned short)49092))) ? (min(((+(((/* implicit */int) var_13)))), (((int) var_5)))) : (((/* implicit */int) var_14)));
                }
                for (int i_28 = 1; i_28 < 11; i_28 += 1) /* same iter space */
                {
                    var_47 = ((/* implicit */int) max((var_47), (((((((/* implicit */_Bool) arr_20 [i_0] [i_26] [i_0])) ? (-304011942) : (((/* implicit */int) var_6)))) & ((~(2147483647)))))));
                    var_48 |= arr_34 [i_0] [(signed char)5];
                    var_49 = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)6] [(unsigned short)6] [i_0 - 1])))))), (min((-1101007569), (((/* implicit */int) ((signed char) var_11)))))));
                }
                /* LoopSeq 3 */
                for (signed char i_29 = 0; i_29 < 13; i_29 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */signed char) (~(min((((/* implicit */int) var_12)), (((879716031) << (((((-11092089) + (11092095))) - (6)))))))));
                    var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) var_1))) ? (max((((/* implicit */int) var_0)), (var_11))) : (((/* implicit */int) min((var_15), (arr_83 [i_0 - 1] [6])))))), (((((/* implicit */_Bool) 879716035)) ? (((/* implicit */int) (unsigned short)26895)) : (((/* implicit */int) (signed char)126)))))))));
                    arr_88 [i_24] = arr_25 [i_0 + 1] [i_0] [i_0 - 3] [i_26];
                }
                for (signed char i_30 = 0; i_30 < 13; i_30 += 3) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned short) min(((~(879716031))), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_85 [i_0] [(unsigned short)3] [i_0] [i_0] [i_0])))), (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_3)))))))));
                    arr_91 [i_24] [i_26] [i_24] = ((/* implicit */signed char) arr_74 [i_0 - 1] [i_0 - 1] [(signed char)9]);
                }
                for (signed char i_31 = 1; i_31 < 12; i_31 += 4) 
                {
                    arr_94 [i_0] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) min((var_8), (arr_52 [i_0 - 2] [(signed char)0] [i_24] [i_26] [i_24] [i_31])))) : (((((/* implicit */_Bool) arr_89 [(unsigned short)10] [i_24] [(unsigned short)0] [i_24] [i_24])) ? (arr_73 [i_24] [i_24]) : (((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127)))))));
                    arr_95 [i_24] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_65 [i_0] [i_24])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_18 [i_26] [i_26])) ? (((/* implicit */int) arr_51 [i_0] [i_24] [i_26] [i_31])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_9))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_32 = 1; i_32 < 12; i_32 += 2) 
                    {
                        arr_98 [(signed char)7] [i_24] [i_26] [i_24] [i_24] = min(((signed char)-12), ((signed char)5));
                        var_53 |= ((/* implicit */unsigned short) ((min((((/* implicit */int) (signed char)-7)), (-11092091))) ^ (((((/* implicit */_Bool) arr_83 [i_0 + 1] [(unsigned short)4])) ? (((/* implicit */int) arr_83 [i_0 + 1] [(signed char)8])) : (((/* implicit */int) (unsigned short)39365))))));
                        var_54 += ((/* implicit */int) var_16);
                    }
                    for (unsigned short i_33 = 4; i_33 < 12; i_33 += 4) 
                    {
                        var_55 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)18)) ^ (((/* implicit */int) (signed char)12))));
                        var_56 += ((/* implicit */int) var_14);
                    }
                    for (unsigned short i_34 = 1; i_34 < 12; i_34 += 1) 
                    {
                        arr_104 [i_0] [i_0] [i_0] [i_24] [5] = ((signed char) var_5);
                        var_57 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_90 [i_0] [i_0] [i_0 - 1] [i_0])))) & (((((/* implicit */_Bool) arr_11 [i_24] [i_31 - 1] [(signed char)3])) ? (((/* implicit */int) arr_90 [i_0] [i_0] [i_0 + 1] [i_0])) : (arr_64 [i_0] [i_24])))));
                        var_58 |= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_9 [i_31] [i_31 + 1] [i_31] [i_31]))))));
                        var_59 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (signed char)116)))));
                    }
                    var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) (unsigned short)12288))));
                }
                var_61 = ((signed char) (~(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_36 [i_26] [i_24] [i_24] [i_0]))))));
                var_62 = var_4;
            }
        }
        var_63 = ((/* implicit */signed char) max((((int) arr_71 [i_0 - 3] [i_0 - 3])), (((/* implicit */int) (signed char)-110))));
    }
    /* vectorizable */
    for (signed char i_35 = 3; i_35 < 12; i_35 += 2) /* same iter space */
    {
        var_64 = arr_105 [i_35 - 3];
        arr_108 [i_35] = ((/* implicit */signed char) var_7);
        /* LoopSeq 1 */
        for (signed char i_36 = 0; i_36 < 13; i_36 += 3) 
        {
            var_65 = ((/* implicit */signed char) ((unsigned short) -1701892094));
            var_66 = ((((/* implicit */_Bool) arr_44 [i_35 - 3] [i_35 - 1])) ? (((/* implicit */int) arr_44 [i_35 - 3] [i_35 - 3])) : (((/* implicit */int) var_0)));
            var_67 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1))))) ? (arr_67 [i_36] [i_36] [i_35 - 3]) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) (signed char)-117)) + (126)))))));
        }
        var_68 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (-2096222705) : (((/* implicit */int) arr_22 [i_35] [i_35] [i_35 - 2]))));
        /* LoopNest 2 */
        for (int i_37 = 1; i_37 < 12; i_37 += 4) 
        {
            for (unsigned short i_38 = 0; i_38 < 13; i_38 += 2) 
            {
                {
                    arr_116 [i_35] [i_35] [i_35 + 1] [i_35] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_26 [i_35] [i_37] [3] [i_37] [i_38] [i_35])) : (arr_10 [i_35 - 1] [i_35] [i_35] [i_35 - 2]))) > (var_11)));
                    var_69 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_16)))));
                    /* LoopSeq 1 */
                    for (int i_39 = 0; i_39 < 13; i_39 += 3) 
                    {
                        var_70 = ((/* implicit */signed char) ((arr_93 [i_37 - 1]) / (((/* implicit */int) (unsigned short)53670))));
                        var_71 = arr_87 [i_35] [i_35] [i_35];
                        var_72 = ((/* implicit */unsigned short) max((var_72), (((unsigned short) arr_105 [i_35 - 2]))));
                        var_73 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (arr_86 [(unsigned short)9] [i_35] [i_35] [i_39] [i_37] [i_39])))) ? (((int) var_13)) : (((((/* implicit */_Bool) arr_92 [i_35])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_52 [i_35] [i_35] [i_35] [i_38] [(signed char)8] [i_39])))));
                        var_74 = ((/* implicit */signed char) ((unsigned short) var_16));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_40 = 0; i_40 < 13; i_40 += 2) 
                    {
                        for (unsigned short i_41 = 2; i_41 < 10; i_41 += 3) 
                        {
                            {
                                var_75 = ((signed char) var_16);
                                arr_124 [(signed char)0] [i_37] [i_35] [i_37 + 1] [i_37] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (unsigned short)5254)))));
                                var_76 = ((/* implicit */signed char) var_9);
                                var_77 = ((signed char) arr_48 [i_41] [i_41 + 1] [i_40] [i_40] [i_40]);
                                arr_125 [i_35] [i_40] [i_38] [i_35] [i_35] = ((/* implicit */signed char) ((arr_49 [i_40] [i_40] [i_41 + 3] [i_40] [i_40] [i_40]) == (((/* implicit */int) arr_44 [i_35] [i_37 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_42 = 3; i_42 < 12; i_42 += 2) /* same iter space */
    {
        arr_128 [i_42] = ((/* implicit */int) ((unsigned short) var_7));
        var_78 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-98), ((signed char)0)))) ? (((/* implicit */int) min((max((var_0), (((/* implicit */unsigned short) var_12)))), (var_10)))) : (((arr_55 [i_42] [i_42] [(signed char)7]) & (((/* implicit */int) (signed char)109))))));
        var_79 = ((((/* implicit */int) var_6)) >> (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) (unsigned short)53670))))) : (arr_10 [(unsigned short)6] [(unsigned short)2] [i_42] [(signed char)6]))));
    }
    var_80 |= var_3;
}
