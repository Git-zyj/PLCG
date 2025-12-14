/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243749
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517))) : (-2488518600519440258LL)))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) * (arr_0 [i_0])))));
        var_16 += ((/* implicit */int) var_1);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) arr_4 [i_2] [i_2]);
            var_18 = ((int) arr_4 [i_2] [i_2]);
            var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_5 [i_1] [i_2] [i_1]))))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)28)) ? (((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((int) (short)32757))) : ((+(1081424200U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_1] [i_2])))))))));
        }
        for (short i_3 = 4; i_3 < 16; i_3 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_3 - 2] [i_4]);
                var_22 *= ((/* implicit */int) ((_Bool) (~(var_9))));
            }
            arr_12 [i_3] [i_1] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_5))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3815673154U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13365))) : (2110177739U)));
                arr_15 [i_1] = ((unsigned long long int) ((arr_7 [i_3 + 2] [i_3 - 3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 - 2] [i_3 - 2] [i_5])))));
                var_24 = ((/* implicit */_Bool) ((((_Bool) arr_4 [i_3 - 3] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)65280)) : (((/* implicit */int) ((unsigned char) var_1)))));
            }
        }
        var_25 += ((/* implicit */signed char) arr_8 [i_1] [i_1] [i_1]);
        var_26 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_6]))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (short i_8 = 3; i_8 < 18; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)246));
                    var_29 = ((/* implicit */unsigned int) var_6);
                    var_30 = ((/* implicit */long long int) arr_23 [i_7]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_0 [i_6]))));
                        var_32 = ((/* implicit */_Bool) 2262105575U);
                    }
                }
            } 
        } 
    }
    for (signed char i_10 = 3; i_10 < 14; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) (-(((unsigned int) (unsigned short)65261)))))));
            var_34 = 613444070;
        }
        for (short i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10 - 3] [i_12] [i_12] [i_10]))) / (arr_2 [8ULL] [i_12]))))) ? (((((/* implicit */_Bool) arr_1 [i_12])) ? (((((/* implicit */_Bool) -613444071)) ? (16465888832805660877ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10]))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_10]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_12] [i_12])))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_31 [i_10 - 2])) ? (arr_7 [i_10] [i_12 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
            var_36 = min(((+(((((/* implicit */_Bool) arr_13 [i_10 + 2] [i_10 + 2] [i_10 + 2])) ? (arr_3 [i_10]) : (arr_2 [i_10] [11U]))))), (((/* implicit */unsigned int) ((short) ((unsigned int) var_1)))));
        }
        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_11))));
        var_38 = ((/* implicit */long long int) arr_27 [i_10] [i_10] [i_10] [i_10]);
        var_39 = arr_17 [i_10];
    }
    var_40 = ((/* implicit */long long int) (((+(((/* implicit */int) var_1)))) / (((/* implicit */int) var_8))));
}
