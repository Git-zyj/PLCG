/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3911
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
    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)95))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (unsigned short)37718)))))), ((-(var_10)))));
                    var_17 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)160))))));
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (((_Bool)1) ? (13730851590595052517ULL) : (var_10)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_19 = ((/* implicit */long long int) (~((~(848061038)))));
        arr_12 [i_3] [i_3] &= ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))), ((~(((/* implicit */int) (_Bool)1))))));
    }
    var_20 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_2))))));
}
