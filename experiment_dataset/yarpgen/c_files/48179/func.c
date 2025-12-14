/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48179
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) max((var_4), ((unsigned short)34576)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34576)) ? (((/* implicit */int) (unsigned short)4064)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned short)34563)) : (((/* implicit */int) (unsigned char)154)))) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_7))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)14] [(short)11] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_9 [i_0] [i_2] [i_3 + 3] [i_3 + 3]))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_11 [i_3 + 3] [i_3 + 3] [i_3] [i_3]))));
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30972)) ? (((arr_3 [(short)13] [(short)13] [i_4]) & (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0])))))) : ((~(910878854)))));
                        arr_16 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */int) max(((unsigned short)65526), (((/* implicit */unsigned short) arr_14 [(signed char)11] [i_1] [(unsigned short)5] [9]))));
                    }
                    var_16 = ((unsigned short) max((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_0] [i_2])));
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])), ((+(((/* implicit */int) (unsigned short)23472)))))) == ((-(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_5 + 1] [i_6])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [(short)15] [i_1])) : (((/* implicit */int) var_9))))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_9 [i_5 + 1] [i_5] [i_5 - 1] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(signed char)8] [(signed char)8] [i_5 - 1] [i_5]))))) : (((((((/* implicit */_Bool) arr_13 [i_6] [i_1] [i_5] [(unsigned short)12])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)11370)))) - (min(((-2147483647 - 1)), (((/* implicit */int) (signed char)48))))))));
                            var_19 += ((((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [(unsigned short)6] [i_5 - 1])) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1])) : (arr_13 [i_1] [i_5 - 1] [i_5 - 1] [(unsigned short)12]))) & (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 - 1])), (arr_10 [i_5 - 1] [i_5 - 1] [(unsigned char)14] [i_5 - 1] [(unsigned char)14] [i_5 - 1])))));
                            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) (unsigned short)4064)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1])), (var_10))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_21 [i_9] [i_8]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(unsigned short)2] [i_8] [i_10])) ? (((/* implicit */int) arr_25 [i_7] [i_9] [i_10])) : (((/* implicit */int) arr_25 [i_7] [i_8] [i_10]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_7] [i_8] [(unsigned short)4])) != (((/* implicit */int) arr_25 [i_8] [i_9] [i_10]))))) : (((((/* implicit */_Bool) (short)-11370)) ? (1328800075) : (((/* implicit */int) (unsigned char)150))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((+(((((/* implicit */_Bool) arr_13 [i_8] [i_7] [8] [i_8])) ? (((/* implicit */int) (unsigned short)4064)) : (var_6))))) : (((((/* implicit */_Bool) arr_1 [i_7] [i_8])) ? (((/* implicit */int) arr_1 [i_7] [(unsigned short)9])) : (((/* implicit */int) arr_1 [i_7] [i_7]))))));
                arr_30 [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) arr_14 [i_7] [i_8] [i_8] [i_8]);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (short)32765)) + (((/* implicit */int) (unsigned short)65517)))) : ((+(((/* implicit */int) var_9))))));
    var_25 += ((/* implicit */unsigned short) var_11);
}
