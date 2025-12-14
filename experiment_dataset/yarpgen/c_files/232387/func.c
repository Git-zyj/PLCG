/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232387
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
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)34)) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)7))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] = ((signed char) arr_2 [(signed char)3] [(signed char)6] [i_1]);
            var_13 = var_7;
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)4]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))));
            arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)34)) <= (((/* implicit */int) (signed char)-17)))) ? (((/* implicit */int) arr_6 [i_2 + 2])) : (((/* implicit */int) (signed char)-116))));
        /* LoopNest 3 */
        for (signed char i_3 = 4; i_3 < 8; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (signed char i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        var_19 = ((/* implicit */signed char) min((var_19), (arr_16 [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)1] [(signed char)0] [i_5])));
                        var_20 *= ((signed char) (-(((/* implicit */int) var_8))));
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = (signed char)-6;
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_6 [i_2]))))));
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */int) arr_20 [(signed char)8])), (min((((/* implicit */int) ((signed char) arr_19 [(signed char)13]))), (((((/* implicit */int) arr_19 [(signed char)10])) * (((/* implicit */int) var_2)))))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)14))));
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min(((signed char)-8), ((signed char)-25)))), ((~(((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_21 [i_8])) * (((/* implicit */int) arr_24 [i_7] [i_8])))))) : ((-((-(((/* implicit */int) arr_21 [(signed char)8]))))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)95)))) && (min(((!(((/* implicit */_Bool) arr_21 [i_7])))), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-1)))))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (signed char i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    for (signed char i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_37 [i_9] = (signed char)24;
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-83))));
                            arr_38 [i_7] [(signed char)14] [(signed char)9] [i_9] [(signed char)1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_33 [i_7] [i_7] [(signed char)10] [i_9 + 1] [i_12 + 4] [i_12] [i_12]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_28 [i_7] [i_9 + 1] [i_9]))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_7] [(signed char)1] [i_7] [(signed char)16] [(signed char)11] [i_7] [(signed char)11])) * (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)-28)))) : (((/* implicit */int) arr_34 [i_9 + 2] [i_9 + 2] [(signed char)2] [(signed char)16] [(signed char)16]))));
            var_29 *= arr_24 [i_7] [i_7];
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)63))));
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                for (signed char i_15 = 4; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))));
                        arr_49 [i_14] = ((signed char) (signed char)0);
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) % (((/* implicit */int) arr_39 [i_7] [i_7] [i_7]))));
            var_33 = arr_31 [i_13];
            arr_50 [i_7] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-25))));
        }
        /* vectorizable */
        for (signed char i_16 = 1; i_16 < 21; i_16 += 4) 
        {
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-47)) * (((/* implicit */int) (signed char)-4)))))));
            /* LoopNest 3 */
            for (signed char i_17 = 4; i_17 < 21; i_17 += 2) 
            {
                for (signed char i_18 = 1; i_18 < 20; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 19; i_19 += 4) 
                    {
                        {
                            var_35 = ((signed char) ((((/* implicit */int) (signed char)46)) == (((/* implicit */int) (signed char)-16))));
                            arr_61 [i_7] [i_7] [i_7] [i_7] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_7] [i_16 + 1] [(signed char)3] [i_17 + 1])) ? (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_40 [(signed char)8])))) : ((+(((/* implicit */int) (signed char)-21))))));
                            var_36 = var_5;
                            var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_17 - 2] [i_18 + 2] [(signed char)9] [i_17 - 2] [i_17 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_56 [i_7]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_48 [i_16 + 1] [i_16] [i_16 - 1] [i_16]))));
                var_39 = var_8;
                arr_65 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) arr_63 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 - 1])) : (((/* implicit */int) arr_63 [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 1]))));
                var_40 = ((/* implicit */signed char) max((var_40), (var_11)));
                var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)4))));
            }
            for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
            {
                var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-119))));
                /* LoopSeq 2 */
                for (signed char i_22 = 2; i_22 < 21; i_22 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_22] [i_22 - 1] [i_16 + 1]))));
                        var_44 &= var_6;
                    }
                    for (signed char i_24 = 0; i_24 < 22; i_24 += 1) /* same iter space */
                    {
                        var_45 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_7] [(signed char)7] [i_16 - 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_43 [i_16] [i_16] [i_16 - 1]))));
                        arr_75 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))) * (((/* implicit */int) ((((/* implicit */int) arr_62 [(signed char)11] [i_16])) >= (((/* implicit */int) var_5)))))));
                        arr_76 [i_7] [i_16] [i_16] [i_22] [i_16] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-55))));
                    }
                    for (signed char i_25 = 0; i_25 < 22; i_25 += 3) 
                    {
                        var_46 = var_11;
                        arr_79 [(signed char)18] [(signed char)18] [(signed char)18] [i_22] [(signed char)18] |= ((/* implicit */signed char) ((((/* implicit */int) arr_60 [i_16 - 1] [i_22 - 2] [(signed char)11] [i_16 - 1] [i_7])) % (((/* implicit */int) arr_29 [(signed char)9] [i_22 - 1] [(signed char)1] [i_22 - 1]))));
                        arr_80 [i_16] [(signed char)12] [i_22] [i_16] [(signed char)8] [i_16] = (signed char)-7;
                    }
                    var_47 = ((signed char) arr_33 [i_22 - 1] [(signed char)10] [i_22] [i_22 + 1] [i_22] [i_16 + 1] [(signed char)14]);
                }
                for (signed char i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_21] [i_21] [i_21] [i_26])) | ((~(((/* implicit */int) arr_45 [(signed char)20] [i_7] [(signed char)6] [i_7]))))));
                    var_49 = (signed char)-53;
                }
            }
            for (signed char i_27 = 3; i_27 < 21; i_27 += 4) 
            {
                var_50 = ((/* implicit */signed char) (+(((/* implicit */int) arr_55 [i_16 + 1] [i_16 - 1]))));
                var_51 = arr_35 [i_7] [(signed char)6] [(signed char)11] [i_16] [i_16];
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)-25))));
                arr_85 [i_7] [i_7] [i_16] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            }
            for (signed char i_28 = 0; i_28 < 22; i_28 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_29 = 4; i_29 < 18; i_29 += 2) 
                {
                    for (signed char i_30 = 1; i_30 < 19; i_30 += 1) 
                    {
                        {
                            var_53 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? ((~(((/* implicit */int) (signed char)39)))) : (((/* implicit */int) var_5))));
                            var_54 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))) >= ((+(((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_55 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)55))));
            }
        }
        var_56 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)49))))) ? ((~(((/* implicit */int) arr_81 [(signed char)1] [i_7] [(signed char)14])))) : (((/* implicit */int) var_4))))));
    }
}
