/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22180
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
    var_12 = ((/* implicit */long long int) ((max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) var_9)))) + (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [13ULL] [i_2] |= ((/* implicit */signed char) (~(6778007348344698369LL)));
                    arr_8 [3LL] [6U] [(unsigned char)8] = (unsigned char)154;
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (unsigned char)7);
}
