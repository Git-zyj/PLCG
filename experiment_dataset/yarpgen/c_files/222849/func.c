/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222849
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531))));
                var_15 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (signed char)22)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_4 - 1])) || (((/* implicit */_Bool) arr_17 [(signed char)14] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
                            var_17 = (+(((/* implicit */int) arr_8 [i_6])));
                            var_18 = ((/* implicit */unsigned char) ((unsigned short) var_5));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17)) || ((!(((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_6])))))))));
                        }
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10))));
                        arr_18 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_10 [i_2] [i_2]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) arr_8 [i_2]);
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_2] [i_2] [i_2] [i_7] [11])), (arr_19 [i_2] [i_2] [i_2] [i_2])))), (arr_5 [i_2])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65534)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            arr_28 [i_2] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [6] [6] [i_2] [i_2])) : (((/* implicit */int) (signed char)-18)))), (((/* implicit */int) var_3))));
                            var_23 = ((/* implicit */signed char) arr_4 [(unsigned char)8] [i_8]);
                        }
                        var_24 = ((/* implicit */int) (signed char)17);
                        arr_29 [i_2] [i_3] [i_2] [i_8] [i_3] = ((/* implicit */int) var_8);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_2])) & (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                {
                    var_26 = ((/* implicit */signed char) min((min((min((((/* implicit */int) (unsigned short)65512)), (-1314882354))), (((((/* implicit */int) arr_20 [i_2] [i_2] [i_11])) & (var_1))))), (((/* implicit */int) ((unsigned char) arr_15 [i_2] [i_2] [i_2] [i_2] [i_11])))));
                    var_27 = max((((/* implicit */unsigned short) arr_11 [i_2] [i_10 + 2] [i_2])), (max(((unsigned short)54075), (((/* implicit */unsigned short) (unsigned char)113)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_28 |= (unsigned char)255;
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2]);
                            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_2]))));
                        }
                        arr_41 [i_2] [i_10] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [10] [i_10 + 1] [i_10 + 2])) ? (((/* implicit */int) arr_20 [i_10 + 1] [i_10] [i_10 + 1])) : (((/* implicit */int) var_3))));
                    }
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_31 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (unsigned char)114)))))));
                        arr_44 [i_2] [i_10] [i_10] [i_10 + 2] [i_11] [i_14] = min(((+(((arr_4 [i_2] [i_10 + 1]) | (((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */_Bool) (unsigned char)0)) ? ((~(((/* implicit */int) (unsigned char)255)))) : (arr_36 [(unsigned char)20] [i_10 + 1] [(unsigned short)6]))));
                        var_32 = (+(max((arr_5 [i_10 + 2]), (arr_5 [i_10 + 2]))));
                        var_33 = ((/* implicit */unsigned short) ((arr_36 [i_2] [i_10 + 1] [i_11]) & (((/* implicit */int) (unsigned char)255))));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 1; i_15 < 21; i_15 += 3) 
                    {
                        var_34 -= ((/* implicit */unsigned char) arr_32 [i_2] [i_11] [i_2] [(unsigned short)1]);
                        arr_48 [i_2] [i_10] [i_11] [i_2] [i_2] [i_15] = ((/* implicit */unsigned char) ((signed char) var_5));
                    }
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_35 *= ((/* implicit */signed char) arr_46 [(unsigned char)6]);
                        arr_52 [i_2] [i_11] [(unsigned char)19] = ((/* implicit */signed char) (unsigned short)63);
                    }
                    var_36 *= ((/* implicit */signed char) ((((((((/* implicit */int) (signed char)19)) & (((/* implicit */int) (signed char)89)))) & (((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)-45)))))) == (((/* implicit */int) min((var_8), (arr_15 [i_2] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_2]))))));
                    arr_53 [i_2] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) != (min((var_1), (((/* implicit */int) arr_30 [i_2] [(signed char)5] [(unsigned short)11]))))));
                }
            } 
        } 
    }
    var_37 *= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_17 = 2; i_17 < 22; i_17 += 3) 
    {
        arr_56 [i_17] = ((/* implicit */unsigned char) arr_49 [i_17 - 2] [i_17 - 2] [i_17] [i_17] [(unsigned char)16] [(unsigned char)16]);
        /* LoopSeq 3 */
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) arr_24 [i_17 - 1])) : ((-(((/* implicit */int) arr_15 [i_17] [i_17] [i_18] [i_19] [i_19]))))));
                /* LoopSeq 2 */
                for (signed char i_20 = 1; i_20 < 19; i_20 += 3) 
                {
                    arr_63 [i_18] [i_18] = ((/* implicit */unsigned char) (signed char)-14);
                    arr_64 [i_17] [i_17] [i_17 - 2] [i_17] [i_17] = ((/* implicit */int) var_6);
                }
                for (unsigned char i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    arr_67 [i_17] [i_18] [i_21] [i_18] [i_21] = ((/* implicit */unsigned short) var_4);
                    var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_46 [i_19]))))));
                    var_40 = ((/* implicit */int) ((unsigned char) (unsigned char)166));
                }
                arr_68 [i_17 - 2] [(signed char)21] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)93))) < (((/* implicit */int) arr_15 [i_19] [i_17 - 1] [i_17] [i_17 - 2] [i_17]))));
            }
            var_41 = ((/* implicit */unsigned char) ((arr_13 [i_17 + 1] [i_18] [i_17] [i_17 + 1] [(signed char)16] [i_17]) & (((/* implicit */int) arr_27 [i_17 - 2] [i_18]))));
        }
        for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            arr_71 [(unsigned char)20] [(unsigned char)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)15))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
            arr_72 [i_22] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [(unsigned char)22] [i_22])) : (((/* implicit */int) var_6))))) ? (arr_4 [i_17 + 1] [i_17 - 1]) : (((/* implicit */int) (unsigned char)37))));
        }
        for (unsigned char i_23 = 1; i_23 < 22; i_23 += 4) 
        {
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_23] [i_23] [i_17 - 1] [i_17])) || (((/* implicit */_Bool) (unsigned char)46))));
            var_43 = ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_0)));
            var_44 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
        }
    }
    /* vectorizable */
    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_25 = 1; i_25 < 15; i_25 += 2) 
        {
            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) arr_54 [i_25]))));
            /* LoopNest 3 */
            for (unsigned char i_26 = 1; i_26 < 16; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) 
                {
                    for (unsigned char i_28 = 1; i_28 < 16; i_28 += 2) 
                    {
                        {
                            var_46 = ((((/* implicit */_Bool) (unsigned short)14)) ? (11722813) : (((/* implicit */int) (signed char)-21)));
                            var_47 = ((/* implicit */signed char) min((var_47), (var_0)));
                        }
                    } 
                } 
            } 
            arr_89 [i_24] [i_25] [i_25] |= ((((/* implicit */int) var_8)) << (((arr_4 [i_24] [i_25]) - (88470949))));
        }
        /* LoopNest 3 */
        for (signed char i_29 = 0; i_29 < 17; i_29 += 3) 
        {
            for (unsigned short i_30 = 3; i_30 < 15; i_30 += 4) 
            {
                for (unsigned short i_31 = 1; i_31 < 15; i_31 += 2) 
                {
                    {
                        var_48 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_32 = 3; i_32 < 16; i_32 += 4) 
                        {
                            arr_99 [i_24] [(unsigned char)13] = ((/* implicit */unsigned char) var_6);
                            var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                        }
                        var_50 = ((/* implicit */signed char) ((((var_5) | (((/* implicit */int) var_13)))) | (((/* implicit */int) arr_49 [i_31] [i_31] [i_31 + 1] [i_30 + 2] [i_30] [i_30]))));
                    }
                } 
            } 
        } 
        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) arr_40 [i_24] [(unsigned short)22] [(signed char)9] [(unsigned short)13] [i_24] [(unsigned short)22] [(unsigned char)4]))));
    }
    var_52 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65519))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) var_13)))))));
}
