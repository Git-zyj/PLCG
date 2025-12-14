/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4256
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)7630)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) max((3542365069U), (((/* implicit */unsigned int) var_13))))) : (-3591750661689326014LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_7))))))) - (var_15)));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -3591750661689326035LL)) - (var_12)));
                arr_6 [i_1] = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (3591750661689326011LL) : (var_8)))))));
}
