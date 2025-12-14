/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27423
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(6425813622566744756ULL)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) != (((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_1])));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) (signed char)-102)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))) ? ((~(((/* implicit */int) (unsigned char)187)))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((((/* implicit */long long int) arr_0 [i_0] [i_0 + 2])) % (-4275901325733758141LL))), (((/* implicit */long long int) ((unsigned int) (unsigned char)224))))))));
                var_17 = ((/* implicit */unsigned char) (((+(14410003052046166922ULL))) > (((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1]) ^ (arr_2 [i_0 - 1]))))));
            }
        } 
    } 
}
