/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192223
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) max((0), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)20]))) : (min((107325592U), (107325595U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)24]))))))));
                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (13253208928322769615ULL))) : (min((17677671886270282794ULL), (((/* implicit */unsigned long long int) var_17)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((+(arr_5 [i_0] [i_0] [i_1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) arr_0 [9U] [i_0]);
                    arr_9 [i_0] = ((/* implicit */short) (~(arr_8 [i_0] [i_2] [i_2 + 3])));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3 + 1] [i_2 + 3] [i_2 - 1])) <= (((/* implicit */int) arr_4 [i_3 - 1] [i_2 + 3] [i_2 + 2]))));
                        var_24 = ((((/* implicit */_Bool) (~(arr_8 [0] [i_2] [i_3])))) ? (arr_2 [i_2 + 1]) : (((/* implicit */long long int) (+(var_7)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */short) arr_13 [i_2] [i_1] [i_0]);
                        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) var_16);
                        var_27 = ((/* implicit */unsigned long long int) (short)19740);
                    }
                    arr_18 [(unsigned short)22] [6] [i_0] &= ((/* implicit */short) var_8);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                for (short i_9 = 2; i_9 < 14; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) var_10);
                            arr_33 [i_6] [i_7] [i_6] [i_6] [i_9 - 2] [i_10] [i_10] = ((/* implicit */_Bool) var_5);
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((/* implicit */long long int) -2147483633)), (((((arr_8 [i_6 + 1] [i_8] [i_10]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)106)) - (62))))))))));
                            var_30 = ((/* implicit */unsigned short) arr_5 [i_6] [(unsigned char)2] [i_6]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_19)), (arr_5 [i_6] [i_6 - 1] [i_6 - 1]))))));
                            arr_37 [i_7] [i_11] |= ((/* implicit */short) arr_36 [i_6] [i_7] [i_8] [i_7] [i_9 + 1] [i_11]);
                        }
                        arr_38 [i_7] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (min((((/* implicit */unsigned long long int) 107325592U)), (510818808402860016ULL)))));
                        arr_39 [i_6] = ((/* implicit */signed char) (-(-1052665114)));
                        arr_40 [i_6] [i_6 + 3] [i_6] [(short)3] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6] [i_8 + 2])) ? (max((((/* implicit */int) arr_11 [i_6 + 2] [(unsigned short)1] [i_8 - 1])), (1057020926))) : (((((/* implicit */int) arr_11 [i_6 + 3] [10U] [i_8 - 1])) / (((/* implicit */int) arr_11 [i_6 + 2] [i_8] [i_8 + 1]))))));
                    }
                } 
            } 
        } 
        var_32 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_6] [i_6] [17] [i_6])), (arr_28 [(_Bool)1] [i_6 - 1] [i_6 + 1] [i_6 - 1])));
    }
}
