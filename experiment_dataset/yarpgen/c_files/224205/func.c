/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224205
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = -110976465;
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3))))))) & (((/* implicit */int) (signed char)-1)))))));
        arr_3 [i_0 - 3] [i_0] &= ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) var_14)))));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min(((+(-110976459))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))))), (max((((/* implicit */unsigned long long int) arr_6 [i_1 - 1])), (18446744073709551600ULL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_17 -= ((/* implicit */short) ((((arr_11 [i_4] [i_1] [i_3]) << (((((/* implicit */int) arr_13 [i_4] [i_2])) - (55648))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3]))))))));
                        arr_16 [i_1] [i_2] [i_2] [i_2] [i_4] &= ((/* implicit */short) arr_12 [i_1] [(short)2] [i_1] [i_3] [i_4]);
                        var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((var_6) >> (((((/* implicit */int) arr_6 [i_1 + 1])) - (26517)))))) ? (((arr_1 [i_2] [i_2]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) var_6))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [(short)11] [i_4])) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (unsigned short)17357)))) : ((~(((/* implicit */int) (signed char)-119)))))))))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)3] [9U])) ? (131071U) : (arr_15 [i_1])))))), ((!(((/* implicit */_Bool) ((unsigned int) (unsigned short)14122)))))));
    }
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((max((var_11), (((/* implicit */int) (short)255)))), (((/* implicit */int) (short)-1))))) & (((((/* implicit */_Bool) min((416329880), (2065611968)))) ? (var_3) : (((4294836225U) & (var_0)))))));
}
