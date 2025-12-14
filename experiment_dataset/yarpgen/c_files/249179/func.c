/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249179
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
    var_18 = ((/* implicit */long long int) ((_Bool) ((unsigned int) ((unsigned long long int) 1296937187))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) & (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) ((max((((/* implicit */long long int) -1296937187)), ((~(arr_3 [i_1] [i_0] [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])))))) != (((long long int) 1296937155))))))));
                var_21 = ((/* implicit */short) (~(1296937146)));
                arr_7 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1296937186)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) + ((+(2080374784U))))) - (((unsigned int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (2314541383U))))));
            }
        } 
    } 
}
