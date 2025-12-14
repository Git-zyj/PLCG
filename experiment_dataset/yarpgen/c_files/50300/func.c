/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50300
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) (-(var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (+((((-(((/* implicit */int) (unsigned short)39050)))) & ((~(var_11)))))));
                var_16 = ((/* implicit */int) (-(((((unsigned long long int) arr_5 [(short)2] [i_0])) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [0LL] [i_0] [0LL])))))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((arr_5 [i_0] [(_Bool)1]) >> (((((arr_1 [i_0]) ? (((/* implicit */int) var_4)) : (((int) 67108832)))) - (67108825)))));
                arr_8 [i_0] = ((/* implicit */int) 2963001254596688161LL);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)1)))))));
    var_18 = ((/* implicit */unsigned short) var_14);
}
