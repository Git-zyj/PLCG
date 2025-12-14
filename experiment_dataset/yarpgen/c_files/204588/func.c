/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204588
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((+(((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) arr_1 [1] [1])) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)1008))))))));
        var_11 = min((((/* implicit */int) ((((((/* implicit */_Bool) -606146821)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))) > (((((/* implicit */int) (signed char)53)) * (((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0] [(signed char)8])) ? (-976245682) : (var_6))))));
        var_12 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) var_5)) / (((/* implicit */int) var_9)))) + (((/* implicit */int) var_0)))));
        arr_3 [i_0] = (~(((/* implicit */int) ((_Bool) arr_1 [(_Bool)1] [(_Bool)1]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)14))))))));
                        var_14 = ((/* implicit */signed char) (-(arr_10 [i_1 - 1] [i_1 - 1] [1] [i_1 - 1])));
                        var_15 = ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_1])));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
            var_17 = ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_5] [(signed char)3])) : (((/* implicit */int) ((((/* implicit */int) (signed char)-37)) != (((/* implicit */int) var_8))))));
            var_18 = ((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) > (((/* implicit */int) arr_15 [(signed char)0] [i_1 - 1] [i_1] [i_5] [6] [i_5])));
            var_19 ^= ((/* implicit */unsigned char) (((((_Bool)0) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5])) : (((/* implicit */int) (_Bool)0)))) < ((~(((/* implicit */int) arr_15 [(_Bool)1] [(signed char)2] [i_5] [(unsigned char)4] [i_5] [i_5]))))));
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_1 - 1] [i_5]))));
        }
        for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_1] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(unsigned short)2] [(unsigned short)5] [1] [(unsigned char)0])) : (((/* implicit */int) var_7)))) - (((777702422) / (((/* implicit */int) var_4))))));
                arr_24 [i_1] [i_1] [i_1] [i_1] = (-(((/* implicit */int) arr_14 [i_1] [(signed char)2])));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned short)96))) ? (((/* implicit */int) ((arr_17 [i_1] [(signed char)2]) && (((/* implicit */_Bool) 1425353051))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)28930)) >= (var_6))))));
                            arr_29 [i_1] [6] [(_Bool)1] [i_8] [i_1] [(_Bool)1] = ((/* implicit */int) ((_Bool) 706608114));
                        }
                    } 
                } 
            }
            for (int i_10 = 1; i_10 < 6; i_10 += 3) /* same iter space */
            {
                arr_32 [(unsigned char)3] [i_1] [(_Bool)1] [i_10] = ((/* implicit */int) (signed char)-5);
                var_22 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_31 [i_1 - 1] [i_6 - 1] [i_1] [(unsigned short)4])))) ? (((/* implicit */int) arr_18 [i_1 - 1])) : ((+(((/* implicit */int) arr_16 [(_Bool)1] [i_6] [(signed char)2]))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 9; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */int) ((1527920960) != (((/* implicit */int) arr_21 [(_Bool)1]))));
                            arr_38 [i_1] [i_10 + 3] [i_1] [i_1] = ((((/* implicit */_Bool) arr_26 [i_1] [i_6] [i_1 - 1] [(unsigned short)9])) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) arr_18 [i_12 + 1])))));
                            arr_39 [i_1] [(_Bool)0] [(_Bool)1] [(_Bool)1] [i_1] [i_1] = ((((/* implicit */int) (_Bool)0)) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_1 - 1])) : (((/* implicit */int) (signed char)-87)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_13 = 3; i_13 < 9; i_13 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        var_25 -= ((/* implicit */int) arr_25 [i_13] [i_14]);
                        arr_46 [i_1] [i_1] [i_1] [i_14] [i_14] = ((((int) (_Bool)0)) % (((((/* implicit */_Bool) arr_19 [(signed char)4] [6] [i_14])) ? (((/* implicit */int) (unsigned short)59235)) : (((/* implicit */int) var_3)))));
                        arr_47 [(_Bool)1] [i_14] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */int) var_2)) : (-706608115)))));
                        var_26 *= ((/* implicit */signed char) ((((((/* implicit */int) var_4)) / (160252500))) - (((((/* implicit */int) (unsigned short)1024)) >> (((((/* implicit */int) arr_15 [i_1] [(_Bool)1] [(_Bool)1] [(unsigned char)6] [(_Bool)1] [i_14])) - (26)))))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned short i_15 = 3; i_15 < 8; i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_1] [i_10 - 1] [i_13] [i_1] = ((/* implicit */unsigned short) 882203306);
                        arr_52 [(_Bool)0] [(signed char)0] [(signed char)0] [i_1] = ((var_3) ? ((+(((/* implicit */int) (unsigned short)3098)))) : ((~(((/* implicit */int) var_2)))));
                        arr_53 [i_1] [i_13 - 2] = ((/* implicit */_Bool) -2147483640);
                    }
                    for (unsigned short i_16 = 3; i_16 < 8; i_16 += 1) /* same iter space */
                    {
                        arr_56 [(unsigned char)4] [8] [i_10] [i_1] [i_16 - 3] [i_1] [i_10 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : ((((_Bool)1) ? (((/* implicit */int) arr_6 [(unsigned short)8])) : (((/* implicit */int) (signed char)-100))))));
                        arr_57 [i_1] [i_6 - 1] [i_6 + 1] [(_Bool)1] [(unsigned short)6] [i_1] [i_16 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 706608123)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) var_7)))) - (((/* implicit */int) (_Bool)0))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)218)) << ((((~(1523526155))) + (1523526166)))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+(((int) arr_14 [i_1] [i_10 + 2])))))));
                        var_30 = ((((/* implicit */_Bool) 1425353046)) ? (((/* implicit */int) arr_28 [(_Bool)1] [2] [(_Bool)1] [i_13] [4])) : ((~(((/* implicit */int) arr_36 [i_1] [(_Bool)1] [i_10] [0] [i_13] [i_17] [(signed char)1])))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_8))))))));
                    }
                    /* LoopSeq 3 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        arr_64 [(signed char)3] [i_6 - 1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_1))))));
                        var_32 = ((/* implicit */unsigned char) arr_62 [i_6] [(signed char)3]);
                    }
                    for (unsigned short i_19 = 1; i_19 < 7; i_19 += 2) 
                    {
                        arr_67 [i_1] [i_6 + 1] [i_6 + 1] [i_13 - 2] [i_13] [i_19 + 2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [(unsigned short)0] [(unsigned short)0] [i_1] [(unsigned short)0] [(unsigned char)7] [3])) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (((_Bool)0) || ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)0] [(signed char)3] [(signed char)3] [(_Bool)0] [(signed char)5] [i_19])))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1] [i_13 + 1] [i_1] [i_19 + 1])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)28))))) : (((/* implicit */int) var_9))));
                    }
                    for (signed char i_20 = 0; i_20 < 10; i_20 += 4) 
                    {
                        arr_70 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_10 + 2] [i_10 + 1] [(unsigned short)2] [i_1] = (-(((/* implicit */int) (_Bool)1)));
                        arr_71 [i_1] [(_Bool)1] [(unsigned char)2] [i_10 + 2] [i_20] [i_13 + 1] [i_20] &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_3))));
                        var_34 ^= arr_10 [i_13 - 1] [i_6] [i_10] [(signed char)8];
                    }
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_59 [i_1] [i_1 - 1] [(_Bool)1] [i_6 + 1] [i_6 + 1] [(unsigned short)3] [4]))))) ? (((((/* implicit */int) var_2)) / (-1545308116))) : ((+(((/* implicit */int) (_Bool)0))))));
                }
                for (unsigned short i_21 = 1; i_21 < 9; i_21 += 3) 
                {
                    var_36 = ((((/* implicit */int) (unsigned short)11238)) % ((~(((/* implicit */int) (unsigned short)38261)))));
                    var_37 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_25 [i_1 - 1] [(unsigned char)7])) ? (((/* implicit */int) (_Bool)1)) : (var_6))) % (((((/* implicit */int) arr_59 [(unsigned short)2] [i_1] [i_1 - 1] [i_6 - 1] [(unsigned short)2] [i_10 - 1] [i_21])) / (((/* implicit */int) arr_36 [i_1 - 1] [(_Bool)1] [i_6 - 1] [i_6] [2] [(_Bool)1] [i_21 - 1]))))));
                    var_38 = ((/* implicit */unsigned char) ((var_6) / (((/* implicit */int) arr_5 [i_1 - 1] [i_10]))));
                    arr_74 [i_1] [(_Bool)0] [(unsigned char)0] [i_1] [i_1] = ((signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-54))));
                }
            }
            for (int i_22 = 1; i_22 < 6; i_22 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_1 - 1] [(_Bool)1] [i_6 - 1])) * (((/* implicit */int) arr_19 [(unsigned short)7] [(unsigned short)7] [i_6 + 1]))));
                arr_77 [6] [6] [i_22 - 1] [6] &= arr_34 [(unsigned short)7] [(unsigned char)3] [(_Bool)0] [i_1 - 1];
                var_40 = ((/* implicit */unsigned char) ((-1166364249) / ((-(((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 10; i_23 += 4) 
                {
                    for (unsigned short i_24 = 3; i_24 < 9; i_24 += 2) 
                    {
                        {
                            arr_83 [(unsigned short)0] [2] [8] [i_1] [(unsigned short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) arr_60 [i_1])) : (((/* implicit */int) arr_18 [i_6 - 1]))));
                            arr_84 [i_1 - 1] [(_Bool)1] [i_1] [i_23] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [(_Bool)1] [i_6 - 1] [i_6 + 1] [(_Bool)1] [i_24 + 1])) > ((+(((/* implicit */int) var_3))))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_6])) + (((/* implicit */int) arr_62 [(_Bool)1] [(_Bool)1]))))) || ((_Bool)1)));
                            arr_85 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)41366)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)56))))));
                        }
                    } 
                } 
            }
            arr_86 [i_1] [i_1] [(signed char)5] = (((~(var_10))) & (((((/* implicit */_Bool) (unsigned char)159)) ? (-1425353052) : (((/* implicit */int) arr_45 [i_6 + 1] [i_6 - 1] [i_6 + 1] [(unsigned short)2] [i_1 - 1] [(_Bool)1] [i_1 - 1])))));
        }
        /* LoopNest 2 */
        for (int i_25 = 3; i_25 < 8; i_25 += 4) 
        {
            for (signed char i_26 = 0; i_26 < 10; i_26 += 2) 
            {
                {
                    var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (var_10))))));
                    arr_93 [i_26] |= arr_35 [(_Bool)1];
                    arr_94 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_45 [i_1 - 1] [(_Bool)1] [i_26] [i_1 - 1] [i_25 + 2] [i_26] [(unsigned short)2])) : (((/* implicit */int) arr_0 [i_1]))));
                }
            } 
        } 
    }
    var_43 = min(((~((~(((/* implicit */int) var_2)))))), (((((/* implicit */int) var_0)) & (((/* implicit */int) var_5)))));
    var_44 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max(((unsigned short)33073), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49376)))) : (((/* implicit */int) var_8))))));
}
