/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249685
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
    var_13 = ((((/* implicit */_Bool) ((unsigned long long int) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [5ULL] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) >> (((2145991314U) - (2145991294U)))))) && (((/* implicit */_Bool) var_7)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_7);
}
