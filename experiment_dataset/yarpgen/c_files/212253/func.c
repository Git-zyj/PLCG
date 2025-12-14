/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212253
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
    var_13 = ((/* implicit */int) var_3);
    var_14 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1))))) / (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) / (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6))) / (((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = max((arr_3 [i_1 + 1] [i_1 - 2] [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_1 - 1] [i_0]))) || (((/* implicit */_Bool) (+(arr_2 [i_0]))))))));
                arr_4 [i_0] &= ((/* implicit */short) ((((/* implicit */int) (short)-18008)) + (((/* implicit */int) (short)18008))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18008)) ? (((/* implicit */int) (short)32)) : (((/* implicit */int) (unsigned char)138))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) - (((/* implicit */long long int) ((arr_1 [(_Bool)1]) >> (((arr_2 [i_0]) + (741236069)))))))) == (((((((/* implicit */long long int) arr_3 [i_0] [(unsigned char)2] [i_1])) / (arr_0 [i_0] [i_1]))) << (((((((/* implicit */_Bool) 1742271284)) ? (1742271284) : (((/* implicit */int) (short)32763)))) - (1742271242)))))));
                var_17 = ((/* implicit */unsigned char) ((((arr_0 [i_1 - 2] [i_1 - 1]) - (((((/* implicit */long long int) arr_2 [i_1 - 2])) / (arr_0 [i_0] [i_1]))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [21U])) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_2 [(short)7]))))))))));
            }
        } 
    } 
}
