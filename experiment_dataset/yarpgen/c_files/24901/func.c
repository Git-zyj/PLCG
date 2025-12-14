/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24901
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
    var_18 = ((/* implicit */int) ((unsigned int) ((unsigned short) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_14))))));
    var_19 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)9)) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_21 = (((-(((/* implicit */int) (unsigned char)242)))) % (((((/* implicit */int) var_4)) | (var_1))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_3 [i_0] [i_0] [i_5]) : (arr_5 [i_0])));
                            var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_16)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [10] [10] [i_2] [i_2])))))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32817)) ? (arr_9 [(short)11] [i_1] [i_1] [i_1] [i_1]) : (arr_8 [i_0] [i_0] [i_0])));
                        arr_19 [i_0] [(unsigned char)11] [i_2] [i_2] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_8 [5U] [i_2] [8]) : (arr_8 [i_4] [i_4] [i_4])));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((arr_5 [i_0]) | (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_2] [i_0])))) : (arr_4 [i_1])));
                        arr_20 [i_0] [(short)2] [i_1] [(unsigned char)7] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -1686025935)) : (arr_3 [i_0] [i_0] [i_2]))) << (((arr_15 [i_0] [i_1] [i_0] [i_1]) - (2021502580)))));
                    }
                    arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29260)) & (((/* implicit */int) var_9))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (unsigned short)7785)) ? (831091945U) : (((/* implicit */unsigned int) -1897216867))))));
                                var_26 = ((/* implicit */unsigned short) var_0);
                                var_27 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) < (((/* implicit */int) var_11))))) + (((/* implicit */int) arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 - 1]))));
                                var_28 = arr_22 [(unsigned short)20] [i_1];
                                var_29 = ((((/* implicit */_Bool) -1793503634)) ? (((/* implicit */unsigned int) 1686025934)) : (2971901599U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                arr_37 [i_0] [i_9] [i_6] [i_9] [(unsigned char)5] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned short)32719)) << (((((/* implicit */int) var_14)) - (11730)))))));
                                var_30 = ((/* implicit */short) min((var_30), (((short) arr_33 [i_0] [i_0] [(unsigned short)20] [(unsigned short)20]))));
                            }
                        } 
                    } 
                    arr_38 [(unsigned short)9] [(unsigned short)9] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32719)) ? (2147483647) : (((/* implicit */int) arr_23 [(unsigned short)5] [i_1] [i_6 - 2]))))) ? (((((/* implicit */_Bool) 2147483640)) ? (-1043694066) : (((/* implicit */int) (unsigned short)32726)))) : (((/* implicit */int) ((-1686025938) == (arr_13 [14] [14] [(unsigned short)9] [i_0]))))));
                    arr_39 [(unsigned short)6] [i_1] [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7772)) & (arr_13 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2])));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_11 = 1; i_11 < 19; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        for (short i_13 = 2; i_13 < 19; i_13 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_11] [i_13 + 2] [i_11] [i_11 - 1])) ^ (((/* implicit */int) arr_42 [i_11] [i_13 - 1] [i_11 - 1] [i_11 - 1]))));
                                arr_47 [i_0] [i_0] [i_0] [(short)8] [i_11] [(unsigned short)1] = ((/* implicit */unsigned short) var_13);
                                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_13 - 2] [19] [i_11 + 2]))));
                            }
                        } 
                    } 
                    arr_48 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_11 + 1] [i_11 + 2] [i_11 - 1])) <= (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 18; i_15 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_42 [i_11] [i_11 + 1] [i_11 + 2] [i_11 - 1]))));
                                arr_54 [i_0] [i_0] [i_11] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)7785)) ? (1259855862U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [(short)0]))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_11 - 1]) : (((/* implicit */int) var_10)))))));
                                var_34 += ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + ((-(1942254229)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_16 = 2; i_16 < 20; i_16 += 2) 
                {
                    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)32719))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 3; i_18 < 18; i_18 += 2) 
                        {
                            {
                                var_36 = var_0;
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_18 - 1])) & (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)32719))));
                    var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-29855)) : (((/* implicit */int) (unsigned short)7785)))))));
                    arr_63 [i_0] [i_1] [i_16] = ((/* implicit */int) var_5);
                }
                arr_64 [(short)0] = ((/* implicit */short) max((max(((~(((/* implicit */int) var_17)))), (-1))), (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_1])) ? (((((/* implicit */int) var_12)) / (1686025934))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_1] [i_1])) < (((/* implicit */int) (short)31868)))))))));
            }
        } 
    } 
}
