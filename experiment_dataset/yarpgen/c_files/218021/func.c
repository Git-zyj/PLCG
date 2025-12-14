/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218021
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (arr_2 [i_0] [i_1])))) : ((-(((/* implicit */int) arr_0 [i_1 + 1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((72057594037927935ULL), (((/* implicit */unsigned long long int) (unsigned char)190))))));
                var_19 += ((/* implicit */long long int) ((arr_3 [i_0] [i_1 + 1]) != (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_1 [i_1])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((var_18) ? (var_1) : (arr_2 [i_1 + 1] [i_1 + 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)27828)) / (((/* implicit */int) arr_0 [i_0]))))) / (arr_3 [i_1 + 1] [i_0]))))));
            }
        } 
    } 
    var_20 += ((/* implicit */short) ((((/* implicit */int) var_16)) <= (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (72057594037927945ULL))) ? (((/* implicit */int) (unsigned char)91)) : (var_3)))));
}
