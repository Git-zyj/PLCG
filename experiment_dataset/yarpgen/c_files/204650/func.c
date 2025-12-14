/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204650
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
    var_10 = ((/* implicit */unsigned short) ((min((0U), (((/* implicit */unsigned int) (unsigned short)0)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59760))))) : (((((/* implicit */_Bool) 414525237U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5776))) : (3880442059U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((((((/* implicit */_Bool) var_7)) ? (var_4) : (3285001751U))), (((((/* implicit */_Bool) (unsigned short)32319)) ? (var_1) : (2580697851U)))))));
    var_12 = max((min((((/* implicit */unsigned int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5776)))))), (var_4))), (((((/* implicit */_Bool) var_6)) ? (min((4294967286U), (9U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
    var_13 = ((((/* implicit */_Bool) 3301594418U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (2639690527U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27947))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0 - 1] [i_0];
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])) ? (1740068809U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5773)))))) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((3227593748U) > (32767U))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_2] = arr_6 [i_0];
                arr_11 [i_0 + 1] [i_0] [i_2] = ((/* implicit */unsigned int) (unsigned short)59759);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (arr_8 [i_0] [i_0] [i_2])));
                arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]) >> (((391823378U) - (391823378U)))));
            }
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_15 = (unsigned short)62031;
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_1 + 1] [i_3])) ? (arr_13 [i_0] [i_0] [6U]) : (arr_13 [i_0 + 1] [i_1 + 1] [i_3])));
                var_16 = ((/* implicit */unsigned short) arr_7 [i_0]);
            }
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_17 = ((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))) : (arr_15 [i_0] [i_1 + 1] [i_1 - 1]));
                            arr_26 [i_0 + 1] [i_1] [i_0] [i_5] [i_6] [i_6] = arr_20 [i_0 + 1] [i_1] [i_0];
                            var_18 = ((/* implicit */unsigned short) 2639690532U);
                        }
                    } 
                } 
                arr_27 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_16 [i_0]);
            }
            for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                var_19 = 1471561766U;
                var_20 = arr_16 [i_0];
            }
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) (unsigned short)54399)) : (((/* implicit */int) (unsigned short)2))));
        }
    }
    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 4) 
    {
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned short) arr_33 [i_8] [i_8]);
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_8 + 2] [i_8] [i_8 + 1])) ? (arr_23 [i_8 + 2] [i_8] [i_8 - 1] [(unsigned short)8]) : (arr_14 [i_8 + 2]))) >= (arr_23 [i_8 + 2] [i_8] [i_8 + 1] [i_8])));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        arr_39 [i_9] = ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9]))) : (arr_37 [i_9]));
        arr_40 [i_9] = ((/* implicit */unsigned short) 3053262577U);
    }
    for (unsigned int i_10 = 3; i_10 < 8; i_10 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) 
        {
            arr_46 [i_10 - 2] [i_10] [i_11] = ((((/* implicit */_Bool) 4294967292U)) ? (arr_43 [i_10 - 1]) : (arr_43 [i_10 + 1]));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29915)) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522)))));
        }
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            arr_50 [i_10] [i_10] [i_12] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_30 [i_10] [i_12] [i_12])), (((((/* implicit */_Bool) arr_14 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50940))) : (64102096U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56237)) ? (((/* implicit */int) (unsigned short)64134)) : (((/* implicit */int) (unsigned short)65533))))) : (((((/* implicit */_Bool) max((arr_29 [i_10] [i_10] [i_10] [i_12]), (arr_22 [i_12] [i_12] [i_12] [i_12])))) ? (min((1040384U), (arr_1 [i_12] [i_10]))) : (38123381U))));
            arr_51 [i_10] = ((((/* implicit */_Bool) 3018658932U)) ? (max((((((/* implicit */_Bool) arr_18 [i_10 + 1] [i_10] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_10 - 1] [i_12] [i_10]))) : (18U))), (((/* implicit */unsigned int) arr_36 [i_10 + 1])))) : (arr_49 [i_10 + 1] [i_10] [i_10]));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [3U] [i_12])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34124))) : (arr_20 [i_10] [i_12] [i_12])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned short)40469)) : (((/* implicit */int) arr_9 [i_10] [i_10]))))) : (min((((/* implicit */unsigned int) (unsigned short)52044)), (arr_8 [i_10] [i_10] [(unsigned short)11]))))) : (arr_29 [i_12] [i_12] [i_12] [i_10])));
            arr_52 [i_10] [i_10] = ((/* implicit */unsigned int) (unsigned short)7217);
        }
        for (unsigned int i_13 = 1; i_13 < 11; i_13 += 1) 
        {
            arr_56 [i_10] [i_10] = ((/* implicit */unsigned short) arr_8 [i_10] [i_13 + 1] [i_13]);
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59762)) ? (min((arr_31 [i_10] [i_13 + 1] [i_10 - 2] [i_13 - 1]), (((/* implicit */unsigned int) (unsigned short)16388)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10])))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            arr_59 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_10] [i_10 - 3] [i_10 + 3])) ? (arr_32 [i_10 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10] [i_10 + 1] [i_10 + 1])))));
            arr_60 [i_10] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_10 + 3] [i_10 - 2] [i_10 + 3])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)28992))))) * (((((/* implicit */_Bool) 1573547197U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_10 - 2]))) : (524224U))));
        }
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3828094871U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_10 + 4] [i_10] [i_10]))) : (466872424U)))) ? (((((/* implicit */_Bool) arr_38 [i_10 - 3])) ? (((/* implicit */int) arr_38 [i_10 + 2])) : (((/* implicit */int) arr_38 [i_10 - 1])))) : (((((/* implicit */_Bool) arr_44 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_44 [(unsigned short)0] [i_10] [i_10])) : (((/* implicit */int) arr_44 [i_10 + 1] [i_10 + 4] [i_10]))))));
    }
}
