/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35505
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
    var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_4))), (((/* implicit */unsigned long long int) ((signed char) var_8)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 - 4] [i_2 - 1] [(short)1] [i_3 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_1 + 3] [i_2 + 1] [i_3] [i_3 + 3]))))))));
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) var_2)), (arr_5 [i_4] [(short)11] [(short)10])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6)))) - (54598))))))));
                        var_18 |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_3])) / (((/* implicit */int) var_11)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (((var_0) << (((((/* implicit */int) arr_15 [i_1 - 1] [i_1] [i_1])) - (2894))))))))));
                        arr_16 [i_1] [i_2] [i_3] [i_3] [(unsigned short)5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_4) : (arr_9 [i_3 - 1] [i_2] [i_3]))) % (min((arr_9 [i_3 + 2] [i_2] [i_5]), (((/* implicit */unsigned long long int) var_12))))));
                    }
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_11 [i_2 + 1] [i_3 + 2] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) var_12)) - (65)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1 + 3] [i_1 + 2] [i_1])) & (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) <= (((/* implicit */int) arr_11 [(signed char)1] [i_1] [i_1]))))))) : (((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_12 [i_1] [i_1] [i_1] [i_1])))) << (((((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) - (11)))))));
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 2] [i_1])))))) & (((/* implicit */int) ((((((/* implicit */int) var_5)) + (((/* implicit */int) var_6)))) >= (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_12))))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_7)))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        for (signed char i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            {
                arr_21 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) ((short) var_10))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_8)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) arr_5 [i_6] [i_7] [i_6])))))));
                arr_22 [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_14 [i_7 + 2])) ? (((/* implicit */int) arr_0 [i_7 - 1])) : (((/* implicit */int) arr_15 [i_7 + 1] [i_7 - 1] [i_7]))))));
                var_24 &= var_0;
            }
        } 
    } 
}
