/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3299
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) min(((unsigned short)25176), (((unsigned short) (~(((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25157))) <= (arr_3 [i_0] [i_0])))) % (((/* implicit */int) var_16))))));
                                arr_12 [i_0] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned short) (~(((max((var_2), (((/* implicit */unsigned int) var_5)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40377)))))))));
                                arr_13 [(signed char)4] [i_4] [i_3] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned short) (signed char)121);
                                var_19 = ((/* implicit */unsigned char) ((max(((+(((/* implicit */int) (signed char)120)))), (((/* implicit */int) ((unsigned char) var_0))))) / (((/* implicit */int) ((_Bool) arr_0 [i_2 - 1])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((signed char) var_1)))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)25176))) || (((/* implicit */_Bool) ((unsigned char) max(((unsigned char)135), (((/* implicit */unsigned char) arr_1 [i_2]))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_22 = ((signed char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0])))))));
            arr_18 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_14))));
        }
        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 1) 
        {
            var_23 = ((/* implicit */_Bool) var_12);
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                arr_25 [(signed char)4] [(signed char)4] [i_6] [9U] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_20 [i_6] [i_6] [i_6])))) & (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) && (((/* implicit */_Bool) 773700667U)))))));
                /* LoopNest 2 */
                for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    for (unsigned short i_9 = 3; i_9 < 7; i_9 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_6 - 1] [i_6] = ((signed char) arr_27 [i_0] [i_6]);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_8 [i_9] [i_8] [i_0] [i_0] [i_0])))))));
                            arr_31 [i_0] [i_6] [(signed char)0] [i_8] [i_9] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_24 [(signed char)2] [(signed char)9] [i_8] [i_9])))) / (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                arr_32 [i_6] [i_6] = ((/* implicit */_Bool) var_7);
            }
            for (signed char i_10 = 4; i_10 < 7; i_10 += 1) 
            {
                var_25 = ((/* implicit */signed char) var_5);
                var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_24 [(unsigned char)6] [i_6 + 1] [i_10] [i_10 + 3]), (((/* implicit */signed char) arr_33 [i_6 - 3] [(signed char)7] [i_6]))))) ? (((/* implicit */int) arr_7 [i_6 - 3])) : ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) var_10))))))));
                arr_35 [i_0] [i_6] [i_0] = ((_Bool) (((~(((/* implicit */int) var_15)))) % ((-(((/* implicit */int) arr_17 [i_0] [(signed char)8]))))));
            }
            for (signed char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
            {
                arr_38 [i_0] [i_6] [(signed char)1] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_34 [i_0] [i_6] [i_11] [i_11])))) | ((-(((/* implicit */int) var_15))))));
                var_27 = ((/* implicit */signed char) arr_19 [i_6]);
            }
            for (signed char i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-((~(((((/* implicit */int) arr_11 [i_0])) << (((((/* implicit */int) arr_28 [(unsigned short)4] [i_6] [(unsigned char)7] [i_0] [i_6])) - (104))))))))))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_8))))))));
                var_30 = ((/* implicit */unsigned char) var_0);
            }
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            arr_45 [8U] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_11)))));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_15])) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)25157))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_0] [i_13] [i_15])) >> (((/* implicit */int) (signed char)6)))))));
                        arr_51 [i_15] [i_14] [i_13] [i_0] = ((/* implicit */unsigned char) (signed char)-37);
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            var_33 += ((/* implicit */signed char) var_14);
                            var_34 = ((/* implicit */signed char) var_10);
                            var_35 = ((/* implicit */_Bool) arr_29 [(unsigned char)7] [i_13] [i_14] [i_15] [i_16] [(unsigned char)6]);
                        }
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (arr_2 [i_14] [i_15])));
                            arr_56 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_49 [i_0] [i_13] [i_13] [i_15] [i_17]))));
                        }
                        for (unsigned short i_18 = 3; i_18 < 8; i_18 += 1) 
                        {
                            arr_59 [i_0] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_2))) / (((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)33996))))));
                            arr_60 [(signed char)2] [i_13] [i_14] [i_18] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_18] [i_18 + 1] [i_18 + 1] [(signed char)5] [i_18] [i_18] [i_18 - 3])) % (((/* implicit */int) arr_54 [i_18] [i_18 + 1] [i_18] [i_18] [i_18] [i_18] [i_18 + 1]))));
                            arr_61 [i_0] [i_0] [(unsigned short)7] [i_0] [i_18] = (!(((/* implicit */_Bool) arr_52 [i_18 - 2])));
                        }
                    }
                } 
            } 
            var_37 += ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)40359))))));
            arr_62 [i_0] [i_13] [i_13] = var_9;
            var_38 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_11 [i_0]))))));
        }
        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) ((signed char) arr_37 [i_0]))))))));
    }
    for (unsigned short i_19 = 0; i_19 < 19; i_19 += 2) 
    {
        var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
        arr_65 [i_19] [i_19] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) arr_64 [(_Bool)1])))))))), (max((2538300852U), (((/* implicit */unsigned int) arr_64 [i_19]))))));
        var_41 = var_4;
    }
    /* LoopNest 2 */
    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 1) 
    {
        for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((unsigned char) arr_73 [i_20] [i_21] [i_22])))));
                    var_43 = ((/* implicit */unsigned char) var_10);
                    var_44 = ((/* implicit */_Bool) var_2);
                    arr_74 [i_20] [(unsigned char)22] [i_22] = var_15;
                }
                /* vectorizable */
                for (unsigned char i_23 = 0; i_23 < 23; i_23 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_24 = 1; i_24 < 20; i_24 += 4) 
                    {
                        for (signed char i_25 = 0; i_25 < 23; i_25 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_78 [i_25] [i_20] [i_20] [i_20])) : (((/* implicit */int) var_7))))));
                                var_46 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)16))))));
                            }
                        } 
                    } 
                    arr_82 [i_20] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_79 [i_20] [i_20] [i_20] [(unsigned short)19] [i_21] [i_21]))) * (((/* implicit */int) ((unsigned char) var_5)))));
                    var_47 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)40367)) & (((/* implicit */int) var_4))))));
                    arr_83 [i_20] [i_20] [i_23] = ((/* implicit */signed char) ((unsigned char) arr_78 [i_20] [i_21] [i_20] [i_20]));
                    var_48 *= var_14;
                }
                for (unsigned int i_26 = 0; i_26 < 23; i_26 += 1) /* same iter space */
                {
                    var_49 += ((/* implicit */signed char) max((((((/* implicit */int) var_5)) % (((((/* implicit */int) arr_86 [i_20] [i_21] [(unsigned char)18] [i_26])) * (((/* implicit */int) arr_81 [i_20] [i_21] [i_21] [i_26] [i_21] [i_26])))))), (((/* implicit */int) ((_Bool) (unsigned short)40360)))));
                    arr_87 [i_21] [i_21] [(signed char)18] |= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_69 [i_21] [i_21])))), (((/* implicit */int) arr_69 [i_21] [i_21]))));
                }
                for (unsigned int i_27 = 0; i_27 < 23; i_27 += 1) /* same iter space */
                {
                    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_66 [(signed char)10] [(signed char)10]))));
                    /* LoopSeq 1 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_51 = var_3;
                        var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_13)))));
                        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_75 [i_20]), (var_12)))) >> (((max((((/* implicit */int) max((arr_81 [i_20] [(_Bool)1] [i_21] [i_27] [i_21] [i_28]), ((unsigned char)159)))), ((+(((/* implicit */int) var_14)))))) - (7816))))))));
                        arr_94 [i_20] [i_20] [i_21] [i_20] [(signed char)15] [i_28] = ((/* implicit */unsigned short) (unsigned char)39);
                        arr_95 [i_20] [(signed char)17] [i_21] [(signed char)22] [(signed char)5] [i_28] = ((/* implicit */_Bool) var_6);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_29 = 0; i_29 < 23; i_29 += 4) 
                    {
                        var_54 |= ((/* implicit */unsigned char) max((max((((/* implicit */int) (signed char)-127)), ((~(((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_70 [i_27] [i_27] [i_21]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */int) arr_69 [i_29] [22U])) == (((/* implicit */int) arr_70 [(signed char)22] [i_21] [i_21])))))))));
                        var_55 = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_73 [i_20] [i_21] [i_27])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_30 = 1; i_30 < 21; i_30 += 4) 
                        {
                            var_56 += ((/* implicit */signed char) ((_Bool) arr_96 [i_20] [(unsigned short)8] [i_20]));
                            arr_101 [i_20] [i_21] [i_21] [i_29] [i_30 - 1] [i_29] [i_20] = var_16;
                            var_57 = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) arr_72 [i_30 + 2] [i_27] [i_20])) - (131))))));
                        }
                        var_58 = ((/* implicit */unsigned int) (unsigned short)25144);
                        var_59 *= ((/* implicit */unsigned char) ((signed char) ((unsigned char) arr_70 [i_20] [i_21] [(signed char)3])));
                    }
                    /* vectorizable */
                    for (signed char i_31 = 0; i_31 < 23; i_31 += 3) 
                    {
                        var_60 += ((/* implicit */unsigned char) (-(arr_71 [i_21])));
                        var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_16)))))));
                        var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(var_10)))))))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned char i_32 = 0; i_32 < 23; i_32 += 4) /* same iter space */
                {
                    arr_108 [(signed char)0] [i_20] [i_32] [i_32] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_16)))));
                    /* LoopNest 2 */
                    for (unsigned int i_33 = 0; i_33 < 23; i_33 += 2) 
                    {
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            {
                                var_63 = ((/* implicit */_Bool) min((var_63), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-115)) > ((-(((/* implicit */int) arr_67 [i_32]))))))))))));
                                arr_115 [i_20] [i_21] [i_21] [14U] [i_20] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_103 [(_Bool)1] [(_Bool)1] [(unsigned char)6] [i_33] [(_Bool)1]))) + (var_0)))));
                                arr_116 [(unsigned short)11] [i_21] [i_32] [i_33] [i_20] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) max((var_3), (((/* implicit */unsigned int) arr_112 [i_21]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_35 = 0; i_35 < 23; i_35 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        for (unsigned char i_37 = 0; i_37 < 23; i_37 += 2) 
                        {
                            {
                                arr_125 [i_37] [i_20] [i_35] [i_20] [i_20] = ((/* implicit */signed char) (+((~(((/* implicit */int) var_15))))));
                                var_64 = ((/* implicit */signed char) min((((((/* implicit */int) max((((/* implicit */unsigned short) arr_123 [i_20] [i_20] [i_20] [i_20] [i_20])), ((unsigned short)40391)))) * ((+(((/* implicit */int) (signed char)-12)))))), (((((((/* implicit */int) arr_99 [i_20] [(unsigned short)19] [i_35] [i_36] [i_37])) + (2147483647))) << (((((((/* implicit */int) arr_99 [i_20] [(unsigned char)18] [(_Bool)1] [i_36] [(signed char)22])) + (134))) - (30)))))));
                            }
                        } 
                    } 
                    arr_126 [i_20] [i_21] [i_35] = ((/* implicit */signed char) min((((var_10) ? (((((/* implicit */int) arr_73 [i_20] [i_20] [(unsigned short)21])) * (((/* implicit */int) arr_96 [(_Bool)1] [i_21] [21U])))) : ((-(((/* implicit */int) var_11)))))), (((((/* implicit */int) var_12)) >> (((var_3) - (1971399065U)))))));
                    arr_127 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40359))) + (min((((/* implicit */unsigned int) arr_110 [i_20] [i_20] [i_20] [(signed char)19] [(unsigned char)0])), (max((((/* implicit */unsigned int) arr_110 [i_20] [i_21] [i_20] [i_20] [i_35])), (var_2)))))));
                    arr_128 [i_20] [i_21] = ((/* implicit */unsigned int) arr_100 [i_20] [i_21] [i_35] [i_20] [i_35] [i_20] [i_35]);
                }
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    var_65 = ((signed char) ((signed char) (-(var_3))));
                    var_66 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_66 [(_Bool)1] [(signed char)10]))))) || (((/* implicit */_Bool) arr_99 [i_20] [i_21] [i_38] [i_38] [(unsigned char)19]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_90 [i_20] [i_20] [i_21] [i_38])))))));
                    var_67 = var_9;
                }
                var_68 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_120 [i_20] [i_20] [i_21] [i_21] [i_21])) & (((/* implicit */int) (signed char)-7))))))) ? (((((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) arr_89 [i_20] [i_21] [i_21] [i_20])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-50)) < (((/* implicit */int) var_15))))))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_107 [i_20] [i_21]))))) * (((/* implicit */int) arr_97 [i_20] [i_20] [i_21] [(signed char)15] [i_21] [i_21]))))));
            }
        } 
    } 
}
