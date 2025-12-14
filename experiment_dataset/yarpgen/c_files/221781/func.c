/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221781
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
    var_10 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_11 = (unsigned char)175;
                    var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -970125316)) ? (((/* implicit */int) (signed char)115)) : (-1936133580)));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((var_3) - (arr_5 [i_3] [i_2 + 1] [i_1] [i_0])))) == (var_8))) ? ((((!(arr_1 [i_3] [i_3]))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_4 [(short)8] [i_3] [i_3] [(short)8])), (-970125316)))) : (((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))) : (arr_7 [4U] [4U] [4U]))))) : (((/* implicit */long long int) -978545779)))))));
                        arr_10 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_0 - 1] [i_0] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) (short)-21059)) : (((/* implicit */int) var_9))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_2 + 2] [i_2] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / (((/* implicit */int) var_1))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 + 2] [i_0 - 3] [i_1 + 3])) * (780866516)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_2 + 2] [i_0 - 3] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_0 - 3] [i_1 - 1])))) : (((arr_3 [i_2 + 2] [i_0 - 2] [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_2 + 3] [i_0 - 2] [i_1 - 1]))))));
                        arr_14 [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (780866527)));
                        var_15 = ((/* implicit */short) max((arr_7 [i_0] [i_2] [(short)8]), (((/* implicit */long long int) var_6))));
                    }
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
}
