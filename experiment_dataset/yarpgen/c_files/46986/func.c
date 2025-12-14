/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46986
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
    var_10 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_2)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */_Bool) (~(((arr_1 [i_1 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_5 [i_1 - 2] [i_1])))))))));
                var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((3570469682U), (((/* implicit */unsigned int) (signed char)0))))), (min((16067101984116328799ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
            }
        } 
    } 
}
