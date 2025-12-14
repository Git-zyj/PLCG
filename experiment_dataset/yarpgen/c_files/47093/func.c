/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47093
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_14)) & (((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) ((signed char) arr_0 [(signed char)14] [i_1])))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)5))) ? (((((/* implicit */int) (signed char)5)) + (((/* implicit */int) (signed char)31)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 - 2])) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 1]))))));
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)76))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) min(((signed char)83), ((signed char)-24)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_15 [(signed char)7] [i_3] [(signed char)10] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)28))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (signed char i_6 = 3; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_21 [i_4] [(signed char)0] [i_6] [(signed char)0] [i_6] &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)0))));
                                arr_22 [(signed char)11] [(signed char)12] [i_3] [i_3] [i_2] [(signed char)13] = ((signed char) arr_2 [i_4] [i_4] [(signed char)11]);
                            }
                        } 
                    } 
                    arr_23 [i_4] [i_3] [i_3] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) (signed char)-90)) : (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_4 [i_2]))))))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? ((+(((/* implicit */int) var_13)))) : ((~(((/* implicit */int) var_13)))))) : (((/* implicit */int) var_8))));
                    arr_24 [i_4] [i_3] [i_3] [(signed char)11] = var_15;
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    arr_28 [i_2] [(signed char)1] [i_2] [i_3] = (signed char)43;
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_18 [(signed char)5] [i_3] [(signed char)3] [i_3] [i_3])) : (((/* implicit */int) arr_25 [i_8])))))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_33 [(signed char)1] [i_3] [i_7] [i_8] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_27 [i_3]))));
                            arr_34 [i_8] [i_3] [i_7] [(signed char)8] [i_9] [(signed char)8] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) >> (((((/* implicit */int) (signed char)-16)) + (35)))));
                            var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)57))));
                            arr_35 [i_9] [i_3] [(signed char)4] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)0))) * (((/* implicit */int) arr_10 [i_8] [i_3] [i_2 - 1]))));
                            arr_36 [i_3] [i_3] [(signed char)0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1] [i_2 + 3])) <= (((/* implicit */int) arr_27 [i_3]))));
                        }
                        for (signed char i_10 = 4; i_10 < 13; i_10 += 1) /* same iter space */
                        {
                            var_23 *= ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-77))))));
                            arr_41 [i_2] [i_3] [i_2] [i_2] [(signed char)6] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)96))));
                            var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_2 + 1] [i_7] [i_10 - 2]))));
                        }
                        for (signed char i_11 = 4; i_11 < 13; i_11 += 1) /* same iter space */
                        {
                            arr_45 [i_11] [i_3] [i_3] [i_3] = var_1;
                            arr_46 [i_2] [i_3] [i_3] [i_7] [i_3] [i_8] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_2 + 1])) >= ((-(((/* implicit */int) var_6))))));
                            arr_47 [i_3] [i_3] = arr_32 [i_2] [(signed char)7] [i_7] [i_8] [(signed char)6] [i_8];
                            var_25 = arr_40 [(signed char)2] [i_11 + 1] [(signed char)6] [(signed char)2] [i_11] [i_11];
                        }
                        arr_48 [i_3] = var_9;
                    }
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_26 ^= ((signed char) (signed char)7);
                        var_27 &= ((signed char) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_44 [i_3] [(signed char)0] [(signed char)2] [i_3] [(signed char)4] [i_12]))));
                        var_28 = ((signed char) arr_30 [i_12] [i_7] [i_3] [i_2 + 3]);
                    }
                    for (signed char i_13 = 3; i_13 < 13; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_10 [i_2] [i_3] [i_2]))) ? (((((/* implicit */int) var_17)) ^ (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) (signed char)-65))));
                        arr_53 [i_13] [i_3] [(signed char)10] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) - (((/* implicit */int) (signed char)-21))));
                    }
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2 + 1])))))));
                    arr_54 [(signed char)3] [(signed char)0] [i_3] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) var_14))) + (2147483647))) << (((((/* implicit */int) var_0)) - (108)))));
                }
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                {
                    arr_58 [i_14] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_40 [i_2] [i_2 + 1] [(signed char)7] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) min((arr_40 [(signed char)3] [i_2 - 1] [i_2] [i_2] [(signed char)6] [i_2]), (arr_40 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_2])))) : ((~(((/* implicit */int) arr_40 [i_2] [i_2 - 1] [i_2] [i_2] [(signed char)10] [i_2]))))));
                    arr_59 [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */int) arr_17 [i_2 + 1] [i_3] [i_3] [i_2 + 3])) / (((/* implicit */int) arr_49 [i_2 + 1] [i_2 - 1] [i_2 + 3] [i_2 + 1])))), (((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_49 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 - 1])))))));
                }
                for (signed char i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                {
                    var_31 = (signed char)-71;
                    /* LoopNest 2 */
                    for (signed char i_16 = 3; i_16 < 13; i_16 += 2) 
                    {
                        for (signed char i_17 = 1; i_17 < 10; i_17 += 1) 
                        {
                            {
                                arr_66 [i_2] [i_3] [(signed char)0] [i_2] [(signed char)9] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)72))));
                                arr_67 [i_2] [(signed char)1] [i_15] [i_16] [i_3] [i_2] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_25 [i_2 + 1])))) <= (((/* implicit */int) max((var_1), (max((arr_42 [i_16] [i_3] [(signed char)2] [i_16] [i_16]), (arr_40 [i_17] [i_3] [i_2] [i_16] [(signed char)2] [(signed char)3]))))))));
                            }
                        } 
                    } 
                }
                arr_68 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)0))));
                var_32 ^= ((signed char) ((((((/* implicit */int) arr_56 [(signed char)0] [i_3])) <= (((/* implicit */int) (signed char)113)))) ? (((/* implicit */int) ((signed char) (signed char)-76))) : (((/* implicit */int) (signed char)102))));
                arr_69 [i_2] [(signed char)4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) arr_4 [i_3]))) : (((((/* implicit */_Bool) arr_55 [i_2])) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) arr_50 [(signed char)1] [(signed char)8] [i_2] [i_3]))))))) ? (((((/* implicit */int) arr_14 [i_3])) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_63 [(signed char)2] [i_3] [i_2] [i_2] [i_2])))))) : (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (signed char)-89)))) - (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (signed char)-114))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) (signed char)-74))))) != (((((/* implicit */int) var_8)) + (((/* implicit */int) var_15))))));
}
