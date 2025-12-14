/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48937
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
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
    var_18 = ((3189936815U) << (((8489040509327267672LL) - (8489040509327267665LL))));
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (var_6))))))) ? (min((8489040509327267691LL), (-8489040509327267672LL))) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_2), (var_2))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_15))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(signed char)3] [(unsigned char)2] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_2])), ((-(arr_2 [i_0])))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) -1426059749))), ((~(8489040509327267672LL)))))));
                    var_20 -= max((arr_8 [i_1 - 2] [i_2 + 1] [i_2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -716503427))))));
                }
            } 
        } 
    } 
}
