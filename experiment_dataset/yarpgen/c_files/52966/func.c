/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52966
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)87))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) var_19)))) : (((/* implicit */int) max(((unsigned char)45), (arr_3 [i_0]))))))) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)8])) : (((/* implicit */int) var_11))));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0]), ((unsigned char)255)))) ? (((/* implicit */int) var_1)) : (min((((/* implicit */int) (unsigned char)80)), (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)167))))))));
                var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_22 = arr_1 [i_2] [i_2];
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        var_23 = max((min(((unsigned char)255), ((unsigned char)196))), (arr_10 [i_2]));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) == (((/* implicit */int) var_4)))) ? (((((/* implicit */int) (unsigned char)174)) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) max((arr_1 [i_5] [i_5 + 1]), (var_11)))))))));
                        arr_17 [i_5] [i_3] [i_3] [i_5 + 1] = arr_1 [i_2] [i_2];
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) min((var_15), (arr_0 [i_2])))))) + (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_2] [i_2]))))));
        var_25 *= ((/* implicit */unsigned char) max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)110)) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) (unsigned char)255)) : ((~(((/* implicit */int) arr_16 [(unsigned char)4] [i_2] [i_2] [(unsigned char)4]))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)170)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (unsigned char)126))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)112))));
        var_27 = (unsigned char)255;
    }
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (unsigned char i_10 = 3; i_10 < 16; i_10 += 1) 
                {
                    {
                        arr_35 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)255)) >> (((((((/* implicit */int) arr_28 [i_10] [i_9] [i_7])) + (((/* implicit */int) arr_19 [i_10])))) - (126))))), ((+(((/* implicit */int) arr_31 [i_10 + 1] [i_10] [i_10] [i_10 - 2] [i_10]))))));
                        var_28 *= var_15;
                        var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)111)))), ((-((+(((/* implicit */int) (unsigned char)57))))))));
                        var_30 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_1)))) & (((/* implicit */int) min((var_3), (var_14))))));
                        var_31 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)200)) != (((/* implicit */int) arr_23 [i_7])))) ? (((/* implicit */int) arr_25 [(unsigned char)15])) : ((+(((((/* implicit */int) (unsigned char)114)) - (((/* implicit */int) (unsigned char)255))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            arr_36 [i_7] [i_7] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_21 [i_7] [i_8])))) != (((/* implicit */int) var_11))));
        }
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
        {
            var_33 = var_6;
            /* LoopNest 3 */
            for (unsigned char i_12 = 3; i_12 < 14; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            arr_47 [(unsigned char)12] [i_12] [(unsigned char)5] [(unsigned char)12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19))))) ? ((-(((/* implicit */int) arr_44 [i_7] [i_7] [i_7] [i_13] [i_14])))) : (((/* implicit */int) arr_39 [i_7] [i_7] [i_7])))), (max((((/* implicit */int) arr_34 [i_12 - 2] [i_12 - 2] [i_12 + 3])), (((((/* implicit */_Bool) arr_43 [(unsigned char)15] [(unsigned char)16] [i_12] [i_13] [i_14])) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) arr_20 [i_11]))))))));
                            arr_48 [(unsigned char)14] [i_13] [i_11] [i_11] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) ((((/* implicit */int) arr_39 [i_7] [(unsigned char)7] [i_7])) < (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */int) min((max((arr_28 [(unsigned char)4] [i_12] [i_7]), (arr_33 [(unsigned char)4] [i_7] [i_7] [i_7]))), (max((var_14), (var_7))))))));
                            var_34 *= ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_34 [i_7] [i_11] [(unsigned char)9])) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))), (((/* implicit */int) ((((/* implicit */int) arr_32 [i_7] [i_14] [i_12] [i_13])) < (((/* implicit */int) arr_45 [i_7] [(unsigned char)2] [i_7] [i_7] [i_7] [(unsigned char)15])))))));
                        }
                    } 
                } 
            } 
            arr_49 [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_11])) ? (((/* implicit */int) arr_29 [i_11] [i_11] [i_7])) : (((/* implicit */int) arr_29 [(unsigned char)9] [(unsigned char)9] [i_7])))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_33 [i_7] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_32 [i_7] [i_11] [i_11] [i_11]))))))));
        }
        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned char)255), (var_13)))) == (((/* implicit */int) (unsigned char)233)))) ? (((/* implicit */int) max((((unsigned char) arr_22 [(unsigned char)6])), ((unsigned char)193)))) : (((/* implicit */int) arr_24 [i_7] [i_15]))));
            var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? ((+(((/* implicit */int) ((((/* implicit */int) arr_23 [i_7])) != (((/* implicit */int) (unsigned char)86))))))) : (((/* implicit */int) arr_32 [i_7] [i_7] [i_7] [i_15]))));
            var_37 = (unsigned char)255;
            arr_52 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((unsigned char) arr_27 [i_7])), (max((arr_23 [i_15]), ((unsigned char)255)))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)141))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) max((var_12), ((unsigned char)255))))))));
        }
        var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_39 [(unsigned char)0] [i_7] [i_7]))));
        /* LoopSeq 2 */
        for (unsigned char i_16 = 1; i_16 < 13; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)188), (var_1))))))) ? (min((((/* implicit */int) arr_51 [i_7] [i_17] [i_18])), (((((/* implicit */int) (unsigned char)254)) / (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) min((arr_45 [i_7] [i_16] [(unsigned char)4] [(unsigned char)1] [i_16] [i_17]), (arr_45 [i_18] [i_18] [(unsigned char)7] [i_17] [i_16] [i_7]))))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) < (((/* implicit */int) (unsigned char)25))))) : (((/* implicit */int) (unsigned char)255))));
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)247))));
            var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_7] [i_16 + 4] [i_16] [i_16 + 2] [i_16 + 1] [i_16])) ? (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_28 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_40 [i_16] [i_7] [i_7] [i_7])))), (((/* implicit */int) ((unsigned char) (unsigned char)255))))) : (((/* implicit */int) arr_39 [i_16] [i_7] [i_7]))));
            var_43 &= ((unsigned char) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)202))));
            var_44 = var_19;
        }
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_20 = 1; i_20 < 16; i_20 += 2) 
            {
                for (unsigned char i_21 = 2; i_21 < 16; i_21 += 1) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_21 - 1] [i_21 - 2] [i_20 + 1])) ? (((/* implicit */int) arr_51 [i_21 + 1] [i_21 - 2] [i_20 - 1])) : (((/* implicit */int) arr_54 [(unsigned char)3] [i_21 - 1]))));
                    }
                } 
            } 
            arr_70 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)120)) >> (((((/* implicit */int) (unsigned char)206)) - (204)))));
            /* LoopSeq 1 */
            for (unsigned char i_22 = 0; i_22 < 17; i_22 += 1) 
            {
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_0)) + (((/* implicit */int) arr_51 [i_22] [i_22] [(unsigned char)4]))))));
                arr_73 [(unsigned char)14] = (unsigned char)244;
                var_48 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)4))));
            }
            var_49 *= (unsigned char)210;
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_28 [i_7] [i_19] [i_19]))));
        }
    }
    var_51 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)23))));
    var_52 = var_0;
    var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))));
}
