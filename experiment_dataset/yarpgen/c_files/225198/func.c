/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225198
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))) - (((arr_1 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) | (((arr_1 [i_0] [i_0]) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2]))) / (arr_3 [i_0])))))));
                var_13 += ((((/* implicit */unsigned long long int) ((arr_4 [(unsigned char)18]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)12])))))) * (((((/* implicit */unsigned long long int) ((arr_4 [(short)18]) / (arr_4 [(signed char)16])))) / (((((/* implicit */unsigned long long int) arr_4 [4ULL])) * (arr_3 [(unsigned char)10]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_9);
}
