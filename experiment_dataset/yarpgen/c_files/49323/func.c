/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49323
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1615035256)), (((arr_2 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))))) ? (min((((/* implicit */int) (unsigned char)56)), ((-(((/* implicit */int) (unsigned char)56)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_9)))))));
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [9LL] [i_0])) || ((_Bool)1)))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)200)) >> (((((/* implicit */int) arr_3 [i_0])) + (35)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)116)))) : (((/* implicit */int) ((((/* implicit */_Bool) -5052426945566824211LL)) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
                var_16 = arr_4 [i_0] [i_0] [i_1];
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(max((min((((/* implicit */int) (signed char)127)), (var_9))), (var_9)))));
}
