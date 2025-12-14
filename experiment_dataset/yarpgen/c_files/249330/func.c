/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249330
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
    var_10 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-14))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-22341)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) var_3)))))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-22312)) || (((/* implicit */_Bool) (short)1563))));
                var_12 *= (!((!(((/* implicit */_Bool) (short)7943)))));
            }
        } 
    } 
}
