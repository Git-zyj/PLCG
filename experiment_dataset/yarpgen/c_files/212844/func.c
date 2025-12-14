/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212844
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */unsigned char) ((unsigned int) (+((-(((/* implicit */int) arr_3 [i_0])))))));
                var_13 ^= ((max((((/* implicit */long long int) (signed char)28)), (arr_2 [i_1] [6LL]))) * (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) >> (((((var_1) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59173))))) + (6744312771796083026LL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 0U)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (101882829036378200ULL))))));
    var_15 ^= var_10;
}
