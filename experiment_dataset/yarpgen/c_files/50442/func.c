/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50442
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(var_12)))), (((((/* implicit */_Bool) 4321854473134768168LL)) ? (arr_3 [(signed char)10] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((((/* implicit */short) max((((signed char) arr_2 [i_0])), (max((arr_1 [i_0]), (arr_1 [4U])))))), (((short) max((((/* implicit */long long int) var_3)), (4321854473134768174LL)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_4))))));
    var_17 = ((/* implicit */int) (((+(var_7))) - (((max((-8938600199701492652LL), (((/* implicit */long long int) (short)31607)))) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
}
