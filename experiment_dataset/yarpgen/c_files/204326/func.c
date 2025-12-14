/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204326
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((var_4) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-3545)) : (((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) -507367327)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65535)))) : (max((5716203783335028628LL), (var_4)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (5716203783335028656LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((arr_3 [i_0]) >> (((((/* implicit */int) var_12)) - (86))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [(short)16])))))));
            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (17982971431213365111ULL))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_18 += ((/* implicit */short) var_11);
        arr_8 [0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [16U]))))) ? (arr_4 [(unsigned char)14] [(unsigned char)14]) : (((/* implicit */unsigned int) (-(27385278))))));
        arr_9 [5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_3 - 1] [(unsigned short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 2])))));
        arr_14 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_3] [i_3 - 1] [i_3])) - (var_4))))));
        var_20 = ((/* implicit */short) var_3);
        arr_15 [(_Bool)1] = ((short) arr_6 [i_3]);
        var_21 = ((/* implicit */long long int) ((arr_3 [i_3 + 2]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (-1702123297) : (-2147483642))))));
    }
}
