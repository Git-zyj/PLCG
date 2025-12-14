/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23851
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)7)))), ((-(arr_2 [i_1 + 1] [i_1] [i_1 + 1])))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) (+(max((((/* implicit */unsigned long long int) (unsigned short)0)), (7189245830594048007ULL)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(min((min((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))))))));
}
