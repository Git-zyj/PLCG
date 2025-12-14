/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201684
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
    var_11 = var_4;
    var_12 = min((min((((unsigned char) var_2)), (((/* implicit */unsigned char) var_9)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)238)), (2683107242U))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((2147483647) <= (((/* implicit */int) (short)32756))));
                    arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1611860047U)))) ? (min((var_7), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))) ? (((((unsigned int) var_1)) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9))))));
                }
            } 
        } 
    } 
}
