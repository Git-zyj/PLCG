/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49599
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
    var_15 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 13899955574827397528ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_16 = ((/* implicit */_Bool) min((var_0), (((/* implicit */short) (signed char)0))));
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) -4872621399197663244LL)))), (((/* implicit */unsigned long long int) ((short) var_8)))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) min((var_10), (min((((/* implicit */unsigned short) arr_3 [i_0 - 2] [i_0 - 2])), (arr_1 [i_0 - 1])))));
            }
        } 
    } 
}
