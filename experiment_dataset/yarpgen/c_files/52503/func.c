/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52503
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) 1898377665959771844LL);
                    arr_7 [i_0] [i_1] [(signed char)4] = ((/* implicit */signed char) arr_0 [i_2 - 1]);
                    var_17 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 5270935607314726082ULL)) ? (arr_5 [i_1] [i_2 - 1] [(signed char)14] [10ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11499)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (max(((~(((/* implicit */int) (short)-11499)))), ((~(((/* implicit */int) (signed char)31))))))));
}
