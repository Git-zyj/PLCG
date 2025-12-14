/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19828
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
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_0)), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) ^ (arr_6 [i_0] [i_0] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                var_14 += ((/* implicit */int) ((-7436860382546699973LL) > (max((5124365570235222796LL), (7436860382546699972LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((-5124365570235222813LL) / (((/* implicit */long long int) 2192852769U)))), (((max((-7436860382546699969LL), (((/* implicit */long long int) 0)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
}
