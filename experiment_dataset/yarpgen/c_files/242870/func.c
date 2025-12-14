/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242870
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = min((((unsigned char) arr_1 [i_0])), (arr_1 [i_0]));
        var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)18))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min((var_11), (var_6)));
                            var_12 = ((unsigned char) (unsigned char)0);
                            var_13 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 2] [i_0]))))));
                            arr_14 [i_3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_4] [i_1])) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned char)0))))))) ? ((+(((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) (unsigned char)108))));
                            arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (unsigned char)195)))) : (((/* implicit */int) arr_4 [i_2] [i_3]))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) var_0)))), (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)236))))), (((((/* implicit */int) var_3)) - (((/* implicit */int) var_1))))))));
            var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)30)) / (((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0]))))));
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_5 = 4; i_5 < 16; i_5 += 1) 
    {
        var_16 &= (unsigned char)155;
        var_17 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_0)))));
        arr_18 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)104)) & (((/* implicit */int) (unsigned char)253))));
        var_18 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_5 - 3]))));
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_19 *= arr_13 [i_6];
        var_20 *= (unsigned char)170;
    }
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])), ((+(((/* implicit */int) arr_19 [i_7] [i_7]))))));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
        {
            arr_26 [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)236)) < (((/* implicit */int) (unsigned char)232))))), (arr_7 [i_7] [i_7] [i_8] [i_7]))))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 4; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_10 = 4; i_10 < 9; i_10 += 1) 
                {
                    arr_31 [i_7] [i_8 - 1] [i_8] [i_10] = var_7;
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned char)96))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_7])) < (((/* implicit */int) arr_20 [i_7]))))))))));
                }
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) min(((unsigned char)102), ((unsigned char)5)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((((unsigned char) var_9)), (arr_12 [i_8 + 2] [i_7] [i_8] [i_8 + 2] [i_8] [i_7]))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), ((unsigned char)148)));
                    arr_35 [i_8] [i_9] [i_11] = ((unsigned char) min(((unsigned char)233), (arr_24 [i_8] [i_8] [i_8 - 1])));
                    arr_36 [i_8] = ((unsigned char) min((max(((unsigned char)8), ((unsigned char)183))), (min((arr_32 [i_8] [i_8] [i_8] [i_11]), ((unsigned char)118)))));
                }
                var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)127)) - (114)))));
                var_26 = (unsigned char)149;
            }
            arr_37 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)114)) != (((/* implicit */int) (unsigned char)226))))) : (((/* implicit */int) (unsigned char)230)))) << (((((((/* implicit */_Bool) ((unsigned char) (unsigned char)111))) ? (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (((/* implicit */int) arr_27 [i_7] [i_8] [i_7] [i_8 + 1])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)63)))))) - (125)))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (arr_2 [i_8])));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) max((var_28), (((unsigned char) (+(((/* implicit */int) var_7)))))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            arr_48 [i_8] = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (unsigned char)99)))) && (((/* implicit */_Bool) arr_6 [i_8 + 2] [i_8 - 1])))), (((((/* implicit */_Bool) (unsigned char)47)) || ((!(((/* implicit */_Bool) (unsigned char)103))))))));
                            arr_49 [i_8 + 3] [i_7] [i_12] [i_8 + 3] [i_7] &= (unsigned char)63;
                            var_29 = arr_16 [i_14];
                            arr_50 [i_7] [i_7] [i_12] [i_13] [i_14] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)63), (arr_45 [i_8 + 2] [i_8 - 1])))) << (((((/* implicit */int) arr_45 [i_8 - 1] [i_8 - 1])) - (54)))));
                        }
                    } 
                } 
                arr_51 [i_8] [i_8] [i_8] = ((unsigned char) (unsigned char)246);
                arr_52 [i_12] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (unsigned char)11))))) ? ((~(((/* implicit */int) arr_21 [i_8 - 1] [i_8 - 1])))) : (((/* implicit */int) ((unsigned char) max((arr_5 [i_7]), ((unsigned char)203)))))));
                var_30 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)1))))));
            }
        }
        for (unsigned char i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) max((var_31), ((unsigned char)23)));
            var_32 += arr_45 [i_15 - 1] [i_15];
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_16 = 1; i_16 < 10; i_16 += 1) 
        {
            arr_59 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_34 [i_7] [i_7] [(unsigned char)10] [i_7]))));
            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_16 + 1]))));
            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_1))));
            /* LoopSeq 1 */
            for (unsigned char i_17 = 1; i_17 < 11; i_17 += 4) 
            {
                arr_62 [i_17] [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 2; i_18 < 8; i_18 += 4) 
                {
                    for (unsigned char i_19 = 3; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), ((unsigned char)142)));
                            var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)192))));
                            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)205))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (arr_67 [i_7] [i_16 + 2] [i_18 + 4] [i_19 - 3] [i_19 - 1])));
                        }
                    } 
                } 
            }
            arr_69 [i_7] [i_7] [i_16] = arr_0 [i_16] [i_16 + 2];
        }
        var_39 = var_3;
    }
    var_40 = max(((unsigned char)217), (max((max(((unsigned char)53), ((unsigned char)186))), (var_1))));
    var_41 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)164)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (unsigned char)66))))))), ((!(((/* implicit */_Bool) (unsigned char)129))))));
    /* LoopSeq 2 */
    for (unsigned char i_20 = 2; i_20 < 15; i_20 += 3) 
    {
        var_42 *= arr_10 [i_20 - 2] [i_20 + 2] [i_20 + 2] [i_20];
        arr_72 [i_20] = max(((unsigned char)83), ((unsigned char)32));
    }
    for (unsigned char i_21 = 2; i_21 < 9; i_21 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
        {
            var_43 = arr_6 [i_21] [i_22];
            var_44 = ((/* implicit */unsigned char) min((var_44), ((unsigned char)129)));
            var_45 += ((/* implicit */unsigned char) max((max((((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) (unsigned char)50))));
        }
        for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                for (unsigned char i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    {
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((unsigned char) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)255)))))));
                        arr_85 [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) (unsigned char)255))))))) ? ((-((~(((/* implicit */int) (unsigned char)128)))))) : (((((/* implicit */_Bool) arr_29 [i_21 - 2] [i_21] [i_21 - 1] [i_21])) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) var_9))))));
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned char) min((var_47), (((unsigned char) max((arr_73 [i_21 - 1]), (arr_73 [i_21 - 1]))))));
            var_48 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)240)))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) arr_80 [i_21 - 2] [i_23] [i_23] [i_23])))))) : (((/* implicit */int) arr_4 [i_23] [i_21]))));
            var_49 -= (unsigned char)56;
        }
        for (unsigned char i_26 = 0; i_26 < 11; i_26 += 3) 
        {
            arr_88 [i_26] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_43 [i_21] [i_21 - 1] [i_21 - 2] [i_21 - 2])))) ? ((-((~(((/* implicit */int) var_6)))))) : (((/* implicit */int) arr_43 [i_21 + 2] [i_21 + 2] [i_26] [i_26]))));
            arr_89 [i_21] [i_26] = (unsigned char)188;
            arr_90 [i_26] = ((unsigned char) (-(((/* implicit */int) (unsigned char)94))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_27 = 1; i_27 < 10; i_27 += 2) 
        {
            arr_95 [i_27] [i_21] [i_21] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)175))));
            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)131)) && (((/* implicit */_Bool) (unsigned char)7)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)46)))))));
            var_51 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_74 [i_27 + 1])) != (((/* implicit */int) (unsigned char)60))));
        }
        for (unsigned char i_28 = 0; i_28 < 11; i_28 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_29 = 0; i_29 < 11; i_29 += 2) 
            {
                for (unsigned char i_30 = 0; i_30 < 11; i_30 += 2) 
                {
                    {
                        var_52 = ((/* implicit */unsigned char) max((var_52), (arr_98 [i_21 + 2] [i_21 + 2] [i_21 + 2] [i_21 + 2])));
                        var_53 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_97 [i_21 + 2] [i_21] [i_21 + 2])) ? (((/* implicit */int) arr_97 [i_21 + 2] [i_21] [i_21 + 2])) : (((/* implicit */int) arr_0 [i_21 - 2] [i_21 - 2])))), (((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)105)) && (((/* implicit */_Bool) arr_73 [i_28]))))))))));
                    }
                } 
            } 
            var_54 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_13 [i_21 - 2]))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_31 = 0; i_31 < 11; i_31 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_32 = 1; i_32 < 8; i_32 += 2) 
            {
                arr_108 [i_21 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)20)) % (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_32] [i_21 + 1] [i_21] [i_21] [i_21 + 1] [i_21]), ((unsigned char)254))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)12)) || (((/* implicit */_Bool) (unsigned char)230)))))));
                var_55 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_54 [i_31])) <= (((/* implicit */int) arr_24 [i_21] [i_21] [i_32 + 3])))) ? (((/* implicit */int) arr_43 [i_32 + 2] [i_32 + 2] [i_32 + 2] [i_32 + 2])) : (((((/* implicit */_Bool) (unsigned char)209)) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_31] [i_31] [i_31] [i_32])))))))));
                var_56 = arr_65 [i_21 + 2] [i_32 - 1];
            }
            var_57 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)255))));
            arr_109 [i_31] [i_31] [i_31] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)209)) <= (((/* implicit */int) arr_54 [i_31]))))), (arr_42 [i_21] [i_21] [i_21 + 2] [i_21] [i_21])))) ? (((/* implicit */int) arr_33 [i_21] [i_21 - 2] [i_21 + 1] [i_31])) : (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned char)8))))));
            var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_55 [i_31])))))));
        }
        var_59 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [(unsigned char)8] [i_21 - 2] [i_21] [i_21 - 2]))))), (max(((unsigned char)26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_63 [(unsigned char)8] [(unsigned char)8] [i_21 + 2] [i_21]))))))));
    }
}
