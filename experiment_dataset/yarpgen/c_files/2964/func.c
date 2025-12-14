/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2964
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned short)2] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1] [i_2])))));
                    arr_8 [(short)11] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_5 [i_0] [i_1] [(short)6] [i_1])), ((+(((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) 786432ULL);
    var_19 &= ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)19783)))) + (5513)))))) < (((((/* implicit */_Bool) (-(786432ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_11))) : (max((786432ULL), (((/* implicit */unsigned long long int) (short)29306)))))));
}
