/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2053
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
    var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((~(((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((int) var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))));
                    var_11 = ((/* implicit */int) arr_8 [i_0] [i_1] [i_1]);
                    var_12 = (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_2])))));
                }
            } 
        } 
    } 
}
