/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247736
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
    var_11 ^= ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || (((/* implicit */_Bool) 2266752471U))));
        var_13 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) ((((/* implicit */int) (signed char)-5)) > (((/* implicit */int) (unsigned char)232))))), (1214640952)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (signed char)111))));
                    arr_8 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */int) (~(max((2343149900U), (((/* implicit */unsigned int) ((int) var_4)))))));
                    arr_9 [i_2] [i_1] = ((/* implicit */unsigned int) (unsigned char)254);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((arr_11 [i_3 - 2] [i_3 - 1]) - (((/* implicit */unsigned int) 262143)))))));
        /* LoopSeq 4 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_16 [i_4] [i_4] [i_3] = ((/* implicit */signed char) (unsigned char)86);
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) ((((/* implicit */int) (short)-26606)) > (((/* implicit */int) var_1))))) : (((/* implicit */int) arr_14 [i_3 - 3]))));
            var_17 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
        }
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 1744154537)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)32)))))));
            var_19 ^= ((/* implicit */unsigned char) ((signed char) (signed char)2));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (1281444068U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99)))))) ? (((unsigned int) arr_17 [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5])))));
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2366664678U)) ? (var_10) : (((/* implicit */int) arr_12 [(short)8]))))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_25 [i_3 + 2] = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_7)))) - (((/* implicit */int) (unsigned char)196))));
            var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) : (3536788896U))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))));
            var_22 *= ((/* implicit */unsigned char) ((arr_23 [(short)9] [i_3 - 1] [i_3 + 1]) > (((/* implicit */int) var_5))));
        }
        for (short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [(unsigned char)16] [i_7])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)252)))) : (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [i_3])))))))));
            var_24 *= ((/* implicit */short) ((4294967279U) == (((/* implicit */unsigned int) (~(var_2))))));
            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3] [i_7] [i_3 + 2])) ? ((~(var_2))) : (((/* implicit */int) var_1))));
            arr_29 [i_3] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
        }
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)127))))) : (((unsigned int) var_4))));
    }
}
