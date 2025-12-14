/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22058
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
    var_10 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((15522787694364076163ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_1 [i_1] [i_2]) != (arr_1 [i_1] [i_0])))) <= (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_1] [i_0] = (+((-(((((/* implicit */_Bool) 15522787694364076163ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30696)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) var_5);
}
