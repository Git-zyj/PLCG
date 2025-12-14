/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219190
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 = (~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)10)))));
                    arr_9 [i_0] = ((/* implicit */signed char) 18446744073709551604ULL);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) var_5)) : (((11ULL) | (11925868714159283111ULL))))))));
    var_13 = ((/* implicit */signed char) var_4);
    var_14 = ((/* implicit */short) var_8);
}
