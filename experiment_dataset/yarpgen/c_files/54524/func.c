/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54524
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~((+(arr_6 [i_0] [0U] [0U]))))))));
                    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)2))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_4);
}
