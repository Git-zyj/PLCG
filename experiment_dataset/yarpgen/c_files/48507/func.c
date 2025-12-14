/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48507
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)1)));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1])) << (((((/* implicit */int) var_11)) + (49))))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            arr_11 [i_0] [i_2] [i_0] [i_3 - 1] [i_4 + 3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_2])) + (53)))));
                            var_22 = ((signed char) ((((/* implicit */int) arr_2 [i_2])) << (((/* implicit */int) (_Bool)1))));
                            var_23 -= ((signed char) (~(((/* implicit */int) arr_2 [i_0]))));
                        }
                        for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_3 - 1])) / (((/* implicit */int) arr_0 [i_3 - 1]))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (var_3)));
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_17 [i_2] [i_1] [(_Bool)1] [i_1] [i_2] = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)63)));
                        var_26 = ((/* implicit */_Bool) max((var_26), (max(((_Bool)1), ((_Bool)1)))));
                        var_27 ^= ((signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2]))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) var_16)), (((signed char) arr_3 [(signed char)2] [(signed char)11]))))) >> (((unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        arr_22 [i_2] [(signed char)9] [i_1] [i_2] = ((((/* implicit */int) arr_5 [i_0] [i_0 - 4])) >= (((/* implicit */int) (signed char)-1)));
                        var_29 = ((/* implicit */signed char) arr_1 [i_0 - 4]);
                    }
                    for (signed char i_8 = 3; i_8 < 13; i_8 += 4) 
                    {
                        var_30 = (signed char)8;
                        arr_25 [i_2] = ((/* implicit */signed char) arr_1 [i_0 - 2]);
                        arr_26 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_0] [(_Bool)1])) || (((/* implicit */_Bool) (signed char)-80)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+(var_3))) : (arr_6 [i_0])))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_31 = ((signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */signed char) arr_12 [(signed char)6] [i_1] [i_1] [(signed char)14] [(_Bool)1] [i_10]);
                            var_33 = arr_0 [10U];
                        }
                        for (signed char i_11 = 3; i_11 < 12; i_11 += 3) 
                        {
                            arr_36 [i_0 + 2] [(signed char)5] [i_0] [i_2] [i_0 + 2] [i_0 - 2] = ((/* implicit */_Bool) ((arr_27 [i_0] [i_0] [i_11 - 2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) arr_27 [i_1] [i_1] [i_11 - 3] [i_2]))));
                            var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1])))) ? (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-125)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_9] [i_11 + 3] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (signed char)-19)) / (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_15 [i_0] [(signed char)1] [i_2] [i_9 + 2] [i_9 + 2]))))));
                            var_35 = ((/* implicit */signed char) ((min(((+(((/* implicit */int) var_1)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))) ^ (((arr_31 [i_0 - 2] [i_9 - 1] [i_0 - 2] [i_9] [i_11 - 3]) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_0] [(signed char)8])))) : (((/* implicit */int) max((arr_10 [0U] [0U] [0U] [(_Bool)1] [i_11]), (var_1))))))));
                            var_36 = ((/* implicit */signed char) ((_Bool) var_3));
                            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_3 [i_0 - 2] [i_0 - 3])))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_12 = 3; i_12 < 12; i_12 += 4) 
                        {
                            arr_40 [i_0] [i_1] [i_1] [i_2] [i_9] [(signed char)4] = ((/* implicit */signed char) min(((-(arr_38 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] [i_9] [i_2])) ? (((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_0] [i_2] [i_2] [i_12 - 2]))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)120)))))))));
                            arr_41 [i_12 - 3] [(_Bool)1] [i_12] [i_12] [i_12] [i_2] [i_12 - 3] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_9))))), (((((/* implicit */int) (signed char)79)) * (((/* implicit */int) (signed char)93))))));
                            arr_42 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_9 + 2])) ? (((/* implicit */int) arr_4 [i_9 + 2])) : (((/* implicit */int) arr_4 [i_9 + 2])))) != ((+(((/* implicit */int) (signed char)-1))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_45 [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (0U))));
                            arr_46 [i_0] [i_1] [i_2] [i_9] [i_0] = ((/* implicit */signed char) ((268111036U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [13U])))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-10))) | (((/* implicit */int) (signed char)48))));
                        }
                    }
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */signed char) (!(((_Bool) (-(((/* implicit */int) var_7)))))));
    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_14 = 2; i_14 < 15; i_14 += 2) 
    {
        for (unsigned int i_15 = 2; i_15 < 14; i_15 += 1) 
        {
            {
                var_41 = ((/* implicit */signed char) var_2);
                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) (((+(((/* implicit */int) arr_49 [i_15 - 2])))) / (((((/* implicit */int) arr_49 [i_15 + 2])) + (((/* implicit */int) arr_49 [i_15 + 2])))))))));
                arr_52 [i_15] [i_15] &= arr_48 [i_15];
            }
        } 
    } 
    var_43 = var_10;
}
