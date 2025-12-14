/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22798
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (max((((unsigned int) var_11)), (((/* implicit */unsigned int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((short) var_8)))));
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (((unsigned int) var_0)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) var_8);
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((unsigned int) arr_11 [i_0] [i_2]));
                            var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_20 [i_2] [i_2] [(unsigned short)18] = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
                            arr_21 [i_0] [i_0] [i_5] [(signed char)16] [17U] [i_0] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_0 [i_5])) <= (((/* implicit */int) var_10)))));
                            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_0] [i_5])) / (((/* implicit */int) arr_4 [(short)15] [i_1] [(signed char)8] [i_3]))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_24 [i_6] [i_2] [i_2] [i_0] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_6]))));
                        var_23 = var_6;
                        arr_26 [i_6] [(unsigned short)2] [(unsigned short)2] [(unsigned short)12] [i_6] [i_2] = ((/* implicit */unsigned int) var_14);
                        arr_27 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [(short)0] [i_1] [i_2] [i_6]);
                    }
                    for (short i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        arr_30 [(signed char)9] [(unsigned short)17] [i_2] [i_2] [(signed char)9] = ((/* implicit */unsigned short) var_13);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_7 - 2] [(unsigned short)17] [i_2] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_2] [8U] [i_7 + 1]))));
                    }
                    var_25 = ((unsigned int) arr_24 [i_0] [i_0] [i_2] [i_2] [i_2]);
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned short) var_5);
        arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
        /* LoopSeq 1 */
        for (unsigned int i_8 = 3; i_8 < 17; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (signed char i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        {
                            arr_42 [10U] [10U] [10U] [i_8] [i_11 - 2] = ((/* implicit */unsigned short) var_7);
                            arr_43 [i_0] [i_8] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_4)) != (((/* implicit */int) arr_19 [i_0]))))));
                            var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_0])) ? (((/* implicit */int) arr_34 [i_8 + 1])) : (((/* implicit */int) arr_34 [i_0]))));
                        }
                    } 
                } 
                arr_44 [i_0] [i_8] = ((/* implicit */short) ((unsigned short) ((unsigned int) var_12)));
                arr_45 [i_0] [9U] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_8 - 3] [i_8] [i_8] [i_8 - 3])) || (((/* implicit */_Bool) arr_6 [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 3]))));
            }
            arr_46 [i_8] = ((/* implicit */signed char) ((unsigned int) var_12));
            /* LoopNest 2 */
            for (unsigned short i_12 = 2; i_12 < 17; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 18; i_13 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) var_7);
                        var_29 |= ((/* implicit */unsigned short) ((arr_23 [i_13 + 1] [i_13 + 1] [i_12 + 1] [i_12 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13] [i_13 - 1] [i_13] [i_13 + 1] [i_13 - 1])))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) << (((((((/* implicit */int) arr_38 [i_12 - 2] [i_12 + 2] [i_12] [16U] [i_12])) + (81))) - (10))))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_14 = 4; i_14 < 23; i_14 += 2) 
    {
        arr_55 [i_14] &= ((/* implicit */unsigned int) max((((/* implicit */short) ((((((/* implicit */_Bool) arr_52 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_14] [(unsigned short)4]))))))))), (arr_54 [i_14 - 2])));
        var_31 &= ((/* implicit */short) var_15);
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                {
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_60 [i_14] [i_14 - 3] [i_14] [(unsigned short)6])))) : (((unsigned int) max((var_10), (((/* implicit */unsigned short) arr_54 [(short)13]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 2; i_18 < 22; i_18 += 3) 
                        {
                            {
                                arr_67 [i_17] [i_18] [i_18] [i_17] [i_14] [i_17] [i_17] = min((((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_58 [15U] [15U] [i_18]), (arr_57 [i_15] [i_18]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_14]))) ^ (var_11))))), (((/* implicit */unsigned int) var_8)));
                                var_33 += max((((/* implicit */unsigned int) ((signed char) arr_63 [i_14] [i_14 - 2] [i_18 + 1] [i_17]))), (((unsigned int) var_3)));
                                var_34 = ((/* implicit */signed char) min((var_34), (arr_64 [i_15] [i_14 - 2] [i_16] [i_16] [2U])));
                                var_35 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) min((((/* implicit */short) arr_56 [i_14 + 1])), (var_9)))) : (((/* implicit */int) ((unsigned short) arr_59 [i_15] [i_17] [i_18 - 1])))));
                                var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_53 [i_14 - 4] [i_14 - 4])) < (((/* implicit */int) arr_53 [i_14 - 4] [i_14 - 4]))))), (arr_62 [i_14 - 4] [i_14 - 4] [i_14 + 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_19 = 2; i_19 < 19; i_19 += 4) 
    {
        var_37 = ((/* implicit */short) max((var_37), (((short) ((signed char) var_3)))));
        arr_70 [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
        var_38 *= ((((/* implicit */_Bool) arr_53 [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12)))))) : (arr_60 [i_19] [i_19 + 2] [i_19] [i_19 - 1]));
    }
}
