/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29789
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((var_9) >> (((((/* implicit */int) var_15)) - (41)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)241)))))));
    var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((arr_0 [i_0 - 1] [i_1]) ? (((((/* implicit */_Bool) (short)21415)) ? (9223371487098961920LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27)))))))) | (((/* implicit */long long int) (~((+(((/* implicit */int) arr_2 [i_0])))))))));
                var_19 = ((/* implicit */int) (-((-((-(6905684959179019310LL)))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_20 = ((/* implicit */unsigned char) (~(111356740U)));
            }
        } 
    } 
}
