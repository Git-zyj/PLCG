/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189924
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
    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) min((max((var_5), (var_16))), (((signed char) (signed char)-97)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (arr_5 [i_0])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (var_0)));
                                arr_14 [i_2] [i_1] [i_2] [i_0] [i_4] [i_0] = arr_0 [i_4 + 2];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((var_20), (var_3)));
                    arr_15 [i_2] [i_1] [i_1] [i_0] = arr_5 [i_0];
                    var_21 = ((/* implicit */signed char) max((var_21), (max((((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) >= (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 - 2] [i_2 + 4] [i_2 - 2]))))), (arr_9 [i_0] [i_1] [i_1] [i_2 - 2] [i_2 - 2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((min((((/* implicit */int) ((signed char) var_3))), ((~(((/* implicit */int) var_14)))))), (((/* implicit */int) var_2))));
    var_23 *= var_14;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 4; i_7 < 22; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        arr_27 [i_5] [(signed char)20] [i_5 + 2] [i_5] [i_5 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                        arr_28 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_7 + 2] [(signed char)13]))));
                        arr_29 [i_5] [i_6] [i_5] [i_8] [i_5 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_24 [i_7 - 1] [i_7 - 2] [i_7] [i_8]))));
                        arr_30 [(signed char)4] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_5 - 3] [i_5] [i_5] [i_5])) <= (((/* implicit */int) (signed char)60))));
                    }
                } 
            } 
            arr_31 [i_5] [i_5 - 3] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_5 - 1])) * (((/* implicit */int) arr_20 [i_5 + 1]))));
            arr_32 [i_5 + 1] [i_5] = arr_24 [(signed char)2] [i_6] [i_6] [i_6];
            var_24 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_5 - 3]))));
        }
        for (signed char i_9 = 1; i_9 < 23; i_9 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_5 + 2] [i_5 + 1] [i_5 - 2] [i_5])) - (((/* implicit */int) arr_24 [i_5 - 2] [i_5 + 2] [i_9 - 1] [i_9]))));
            var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5 - 3] [i_5 - 3])) ? (((/* implicit */int) arr_16 [i_5 - 1] [i_5])) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5]))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_16 [i_5 - 3] [i_9 - 1])))))));
        }
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_24 [(signed char)13] [(signed char)17] [i_5] [i_5 - 2])) : (((/* implicit */int) arr_18 [i_5] [i_5 + 1]))));
        arr_35 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) (signed char)-106))))) || (((/* implicit */_Bool) arr_33 [i_5 - 1] [i_5 + 1]))));
        var_29 = ((/* implicit */signed char) max((var_29), ((signed char)60)));
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_33 [(signed char)14] [i_10]))));
        arr_40 [i_10] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_2))))));
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
        {
            arr_43 [i_10] [i_11] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_10] [i_10]))));
            arr_44 [i_10] [(signed char)3] [(signed char)7] = arr_41 [i_10] [i_10] [i_10];
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
        {
            arr_49 [i_10] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
            var_31 = ((/* implicit */signed char) max((var_31), (arr_23 [i_10] [i_10] [i_10] [i_10])));
        }
    }
    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_14 = 2; i_14 < 7; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                {
                    var_32 = max((max((arr_13 [(signed char)20] [i_14 - 2] [i_14] [i_15]), (min((var_7), (var_12))))), (var_15));
                    var_33 -= ((/* implicit */signed char) ((((/* implicit */int) max((var_12), (arr_17 [i_14 + 3])))) << (((((/* implicit */int) ((signed char) arr_17 [i_14 - 1]))) + (62)))));
                    arr_58 [i_15] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * ((+(((/* implicit */int) var_0))))));
                    var_34 -= ((/* implicit */signed char) ((((/* implicit */int) min((arr_21 [(signed char)4] [i_14]), (arr_11 [i_15] [i_14 + 3] [i_14 + 2] [i_14] [i_14] [i_14 + 1] [i_13])))) % (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_14])) <= (((/* implicit */int) arr_22 [(signed char)9]))))), (arr_26 [i_13] [(signed char)0] [i_15] [i_13]))))));
                    var_35 = ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_14 - 1])) / (((/* implicit */int) arr_42 [i_14 + 2] [i_14 - 2] [i_14 + 2])))), (((/* implicit */int) max((((signed char) arr_22 [(signed char)16])), (arr_47 [i_13] [(signed char)9]))))));
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (~(((/* implicit */int) min((var_3), (arr_53 [i_13] [i_13])))))))));
        var_37 = max((var_15), (var_8));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            var_38 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_13] [i_13] [(signed char)19] [i_16])) << (((((((/* implicit */int) arr_17 [i_16])) + (((/* implicit */int) arr_4 [i_13] [(signed char)0] [i_13])))) + (28))))))));
            var_40 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_50 [i_13] [(signed char)6]))));
            /* LoopSeq 1 */
            for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                arr_65 [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_47 [i_13] [i_16]))) / (((((/* implicit */int) arr_39 [(signed char)7])) * (((/* implicit */int) arr_22 [(signed char)4]))))));
                arr_66 [i_16] = arr_42 [i_16] [i_16] [i_13];
                /* LoopNest 2 */
                for (signed char i_18 = 1; i_18 < 9; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            arr_73 [i_13] [i_13] [i_13] [i_18] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_18 - 1]))));
                            arr_74 [(signed char)6] [i_18] = arr_13 [i_13] [i_16] [i_18] [i_19];
                            arr_75 [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_56 [i_18 + 1]))));
                            arr_76 [i_18] = var_3;
                        }
                    } 
                } 
                arr_77 [i_17] [i_13] [(signed char)7] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) arr_45 [i_13] [i_16] [i_17]))));
                var_41 = ((signed char) arr_61 [i_13] [i_16] [i_17]);
            }
        }
    }
}
