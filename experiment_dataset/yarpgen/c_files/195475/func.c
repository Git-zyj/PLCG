/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195475
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
    var_11 = ((/* implicit */signed char) max((((short) ((((/* implicit */int) (short)-20123)) == (((/* implicit */int) (signed char)-45))))), (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_1 [i_0 - 1]))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))) : (((/* implicit */int) ((short) (signed char)12)))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0 + 3])) && ((!(((/* implicit */_Bool) (signed char)47))))));
                                var_12 = ((/* implicit */short) ((((/* implicit */int) arr_7 [(signed char)19] [i_1] [i_1])) <= (((((/* implicit */int) arr_7 [i_1] [i_1] [i_0])) * (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1]))))));
                                var_13 = ((/* implicit */short) (((-(((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [(signed char)20] [i_1])))) & (((/* implicit */int) (short)21206))));
                                arr_16 [i_0 - 2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                                var_14 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (short)-20241))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] [(signed char)11] = ((/* implicit */signed char) (~(((/* implicit */int) (short)32755))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) arr_14 [(short)10] [(signed char)8] [(short)10] [(signed char)8])))) : (((((/* implicit */_Bool) (short)-20147)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)120))))));
    }
    for (signed char i_5 = 2; i_5 < 18; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_16 *= ((/* implicit */short) min((((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-81)))))), (((((((/* implicit */int) arr_7 [i_5] [i_8] [i_7])) + (2147483647))) >> ((((-(((/* implicit */int) arr_8 [i_5] [i_5] [i_8])))) + (747)))))));
                    arr_28 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_5] [(short)7] [(signed char)14] [(short)12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) | ((((~(((/* implicit */int) (signed char)48)))) / (((/* implicit */int) arr_1 [i_5 + 3]))))));
                }
                for (signed char i_9 = 4; i_9 < 20; i_9 += 2) 
                {
                    arr_32 [i_5] [i_6] [i_5] [i_5] [i_7] = ((/* implicit */short) min((((((/* implicit */int) arr_11 [i_9 - 2] [i_5] [i_5] [i_5])) / (((/* implicit */int) arr_11 [i_9 + 1] [i_5] [i_5] [i_5])))), (((/* implicit */int) (short)12002))));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)120))))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_5]))))));
                    var_18 = (short)32745;
                }
                for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    arr_35 [i_10] [i_6] [i_7] [(short)6] [i_6] |= ((signed char) arr_1 [i_5]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)-19932)) - ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                    arr_36 [i_5] = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                }
                var_20 = ((signed char) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_0)))) / (((/* implicit */int) (signed char)113))));
            }
            for (short i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                arr_39 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) (signed char)-127);
                var_21 *= ((/* implicit */signed char) (short)-18766);
            }
            var_22 = (i_5 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_5 - 2])) < (((/* implicit */int) arr_25 [i_5 - 2]))))) << (((((((/* implicit */_Bool) ((signed char) arr_14 [i_5] [i_6] [i_5] [i_5]))) ? (((/* implicit */int) arr_5 [i_5])) : (((((/* implicit */int) arr_3 [i_5] [i_5])) % (((/* implicit */int) arr_6 [(short)17] [(short)2])))))) - (73)))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_25 [i_5 - 2])) < (((/* implicit */int) arr_25 [i_5 - 2]))))) << (((((((((/* implicit */_Bool) ((signed char) arr_14 [i_5] [i_6] [i_5] [i_5]))) ? (((/* implicit */int) arr_5 [i_5])) : (((((/* implicit */int) arr_3 [i_5] [i_5])) % (((/* implicit */int) arr_6 [(short)17] [(short)2])))))) - (73))) + (105))))));
        }
        for (short i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            arr_43 [i_5] [i_5] [i_5] = ((short) ((((/* implicit */int) arr_33 [i_5 + 2] [i_12] [i_5] [i_5] [i_12 - 1])) == (((/* implicit */int) arr_33 [i_5 + 2] [i_5] [(signed char)13] [i_5 + 2] [i_12 - 1]))));
            var_23 = (i_5 % 2 == 0) ? (((/* implicit */short) (((((+(((/* implicit */int) var_5)))) << (((/* implicit */int) max((((/* implicit */short) arr_31 [(short)15] [(signed char)20] [i_5] [i_12])), (var_3)))))) & (((/* implicit */int) ((signed char) arr_0 [i_5])))))) : (((/* implicit */short) (((((+(((/* implicit */int) var_5)))) << (((((/* implicit */int) max((((/* implicit */short) arr_31 [(short)15] [(signed char)20] [i_5] [i_12])), (var_3)))) - (61))))) & (((/* implicit */int) ((signed char) arr_0 [i_5]))))));
            arr_44 [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */int) arr_27 [(short)17] [i_5 - 1])) * (((/* implicit */int) var_7)))) & (((/* implicit */int) ((signed char) arr_18 [i_5 - 1] [i_12])))));
        }
        for (short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (signed char i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_24 = ((/* implicit */signed char) max(((short)28300), (((/* implicit */short) min((max(((signed char)(-127 - 1)), (var_9))), (var_10))))));
                        arr_54 [i_5] [i_13] [i_5] [i_15] = ((/* implicit */signed char) max((((/* implicit */short) (signed char)-102)), (arr_53 [i_5] [i_13] [(signed char)4] [(signed char)12] [i_14] [i_14])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_16 = 4; i_16 < 19; i_16 += 1) 
            {
                arr_58 [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_18 [i_5 + 3] [i_16 - 2])))));
                var_25 = ((/* implicit */signed char) min((((((/* implicit */int) arr_52 [i_5 - 1])) & (((/* implicit */int) arr_27 [i_16 - 1] [i_5 - 1])))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_37 [i_5] [(signed char)18] [i_5])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (short)20146)))) : (((/* implicit */int) ((short) arr_5 [i_5])))))));
                var_26 = ((/* implicit */short) (signed char)9);
                arr_59 [i_13] [i_13] [i_13] [i_5] &= ((/* implicit */short) (-(((/* implicit */int) max((max((((/* implicit */short) var_5)), (arr_23 [(short)0] [(short)20] [(short)0] [i_13]))), (((/* implicit */short) ((signed char) arr_38 [i_5] [(short)10] [i_16] [i_16]))))))));
            }
        }
        var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [i_5 - 1] [(short)14] [i_5] [i_5 - 2] [i_5 + 1])) <= (((/* implicit */int) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(short)0] [i_5])))))));
    }
}
