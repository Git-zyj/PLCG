/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204391
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 + 2]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        arr_11 [(signed char)7] [i_3] [i_3] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)6)) != (((/* implicit */int) (signed char)-24))));
                        arr_12 [i_3] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-1))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)11))))));
                        arr_15 [i_2] [i_4] = ((signed char) arr_13 [i_0 + 3] [i_0 - 1]);
                    }
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        arr_18 [i_5] [i_2] [i_2] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
                        arr_19 [i_5] [i_1] [i_2] = var_9;
                        var_13 = ((signed char) arr_7 [i_0 - 1] [i_0 - 1] [i_5 - 1]);
                        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_5 - 1] [i_0 + 3]))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_15 = var_1;
                        arr_22 [i_0 + 1] [i_1] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 + 3] [i_0 - 1])) ? (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) arr_0 [i_6])))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 4; i_7 < 21; i_7 += 3) 
                        {
                            arr_27 [i_7 - 1] [i_6] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_7] [i_6] [i_2] [i_1] [i_1] [i_0])) * (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)127))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)110)) << (((/* implicit */int) (signed char)7))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_7))) * (((((/* implicit */int) arr_9 [i_7 - 3] [i_7] [i_2] [i_2] [i_1] [i_0])) >> (((((/* implicit */int) var_3)) + (40)))))));
                            arr_29 [i_0] [i_1] [i_1] [i_6] [i_7] [i_7 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))) : (((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_26 [i_7] [i_6] [i_2] [i_1] [i_0 + 1]))))));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_23 [(signed char)15] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)-111))))));
                        arr_32 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_0 + 3] [i_2] [i_2])) * (((/* implicit */int) ((((/* implicit */int) (signed char)105)) == (((/* implicit */int) (signed char)62)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)89)) & (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) ((signed char) arr_30 [i_0]))) : (((/* implicit */int) arr_25 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 3]))));
                        arr_35 [i_0 + 3] [i_1] [i_2] [i_9] = ((signed char) (signed char)13);
                    }
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        arr_38 [i_0] [(signed char)0] [(signed char)7] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-23))));
                        arr_39 [i_0] [i_1] [i_2] [i_10 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (signed char)70))))) ? ((+(((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_10] [i_10])))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (signed char i_12 = 3; i_12 < 20; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    {
                        arr_51 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_11] [i_12] [i_13] [i_12] [i_12 - 2])) ? (((/* implicit */int) arr_36 [i_13])) : (((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-19))))));
                        /* LoopSeq 4 */
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_21 = ((signed char) (signed char)-113);
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0 + 1]))));
                        }
                        for (signed char i_15 = 3; i_15 < 20; i_15 += 2) 
                        {
                            arr_57 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_11] [i_15 - 3] = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_11] [i_11])) | ((~(((/* implicit */int) var_0))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-114)) == (((/* implicit */int) ((signed char) arr_3 [i_0] [i_12] [i_15 - 1])))));
                        }
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            arr_62 [i_11] [i_11] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (signed char)127)))));
                            arr_63 [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-117))));
                            arr_64 [i_0 - 1] [i_11] [i_0 - 1] [i_12] [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_12 + 1] [i_11] [i_0 + 2])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_24 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 - 1] [i_12 + 2]))));
                        }
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            var_24 = ((signed char) ((((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_12 + 1] [i_13] [i_17] [i_17])) * (((/* implicit */int) arr_42 [i_11] [i_11] [i_11]))));
                            var_25 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_6 [i_13])) <= (((/* implicit */int) var_9))))));
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)70))));
                        }
                        var_27 = var_7;
                    }
                } 
            } 
        } 
        var_28 = ((signed char) (signed char)-104);
    }
    for (signed char i_18 = 1; i_18 < 19; i_18 += 4) /* same iter space */
    {
        arr_70 [i_18] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_3 [(signed char)21] [i_18 + 3] [i_18 - 1])))), (((/* implicit */int) max(((signed char)74), ((signed char)31))))));
        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_13 [i_18 + 2] [i_18 - 1]), (max((var_7), (arr_47 [i_18] [i_18] [i_18 + 2] [i_18 + 2]))))))));
        arr_71 [i_18] = ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-41))))) ? (((((/* implicit */int) arr_37 [i_18] [i_18] [i_18] [i_18] [i_18 + 3] [i_18])) / (((/* implicit */int) arr_55 [i_18] [i_18] [i_18 - 1] [i_18] [i_18])))) : (((/* implicit */int) min(((signed char)93), ((signed char)9))))));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-44)) | ((+(((/* implicit */int) (signed char)127))))));
    /* LoopNest 3 */
    for (signed char i_19 = 1; i_19 < 13; i_19 += 3) 
    {
        for (signed char i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            for (signed char i_21 = 1; i_21 < 13; i_21 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_22 = 0; i_22 < 14; i_22 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                        arr_81 [i_19] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_41 [i_19] [i_21 + 1] [i_21])) / (((((/* implicit */int) (signed char)-99)) / (((/* implicit */int) (signed char)-38))))))));
                    }
                    arr_82 [i_19] [i_19] [i_20] [i_21 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) min((min((arr_9 [i_19] [i_19] [i_19] [i_19] [i_21 - 1] [i_21]), ((signed char)120))), ((signed char)122))))));
                    arr_83 [i_19] = max((((signed char) (signed char)-1)), (min(((signed char)-80), ((signed char)-32))));
                    var_32 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-52))));
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        for (signed char i_24 = 0; i_24 < 14; i_24 += 3) 
                        {
                            {
                                arr_89 [i_19] [i_20] [i_21] [i_19] [(signed char)13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_16 [i_24] [i_21 - 1] [i_19 + 1])))));
                                arr_90 [i_19] [i_19] [(signed char)6] [i_23] [i_24] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_43 [i_19 - 1])) : (((/* implicit */int) arr_43 [i_23]))))) ? (((/* implicit */int) arr_43 [i_19])) : (((/* implicit */int) min(((signed char)1), ((signed char)83))))));
                                var_33 = min(((signed char)124), ((signed char)-72));
                                arr_91 [i_19] [i_24] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)60)) ^ (((/* implicit */int) (signed char)127))))) || (((/* implicit */_Bool) arr_60 [i_19] [i_19 + 1] [i_21 - 1] [i_24] [i_24]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min(((signed char)32), ((signed char)31)))) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((signed char) var_3)))));
}
