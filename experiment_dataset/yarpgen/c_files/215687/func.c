/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215687
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 *= ((/* implicit */long long int) ((arr_8 [i_2] [i_1 + 1] [i_1 + 1] [i_0]) == (arr_8 [i_3] [i_1 + 1] [i_1 + 1] [i_0])));
                        var_14 *= ((/* implicit */unsigned long long int) ((arr_3 [i_1 + 1] [i_1 + 1]) % (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_2] [8ULL] [i_3])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32767))))));
                    }
                } 
            } 
        } 
        arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
        arr_10 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0]))));
    }
    for (short i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        var_15 &= ((arr_12 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_1)), (var_2))))));
        var_16 -= ((/* implicit */int) arr_11 [i_4] [(unsigned short)18]);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52)))));
        arr_18 [(unsigned char)11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_4)))))));
    }
    var_18 = ((/* implicit */long long int) min((((min((4184107538U), (((/* implicit */unsigned int) (short)12405)))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((2291142041U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30568))))))));
    var_19 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    arr_30 [i_6] [i_7 + 1] [i_6] = ((/* implicit */_Bool) arr_20 [i_7 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_4 [i_7 - 1] [i_9] [i_10])), ((~(var_9))))) % (((/* implicit */unsigned long long int) var_8))));
                                var_21 += ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_6 [i_7 - 1] [i_7])), (arr_3 [i_7 - 2] [i_7 - 2])))));
                                var_22 |= ((/* implicit */unsigned long long int) arr_3 [i_7 + 1] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            var_23 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-32765)) || (((/* implicit */_Bool) (unsigned short)34968)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1324335993U)) : (var_8)))) : (var_0)));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (((-(var_0))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_6]))))))))));
            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_23 [i_6] [i_11] [i_11]) : (arr_23 [i_11] [i_6] [i_6])));
        }
        /* vectorizable */
        for (unsigned short i_12 = 4; i_12 < 15; i_12 += 1) 
        {
            arr_44 [i_6] [i_12] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 343903839U)) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (short)-28459))));
            arr_45 [i_6] = ((var_8) | (((/* implicit */long long int) arr_5 [i_6] [i_12 - 3] [i_12 + 1])));
        }
        var_26 = ((/* implicit */signed char) var_1);
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_40 [(short)0]))));
        var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3907)) == (((/* implicit */int) arr_29 [0ULL] [0ULL]))));
    }
}
