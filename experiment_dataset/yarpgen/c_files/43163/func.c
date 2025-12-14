/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43163
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) + (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_13)))) : ((~(var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2)) ? (17) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -23)), (max((((/* implicit */long long int) (+(9)))), (((((/* implicit */_Bool) -18)) ? (((/* implicit */long long int) -1)) : (arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_4);
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) max((3786044313329262774ULL), (15980310929818700156ULL)))) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)201)))) : (26)));
}
