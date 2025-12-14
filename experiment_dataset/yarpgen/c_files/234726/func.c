/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234726
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
    var_14 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((int) var_11))) ? ((~(((/* implicit */int) var_6)))) : ((+(var_5))))));
    var_15 = ((int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_3))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -313673955)) ? (-12905060430719132LL) : (((/* implicit */long long int) -1073741824))))) ? (var_3) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1610612736)) ? (33554432) : (2034211495)))) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((int) (~(var_4)))) : (((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_10))) : (var_7)))));
                arr_4 [i_0] = ((((/* implicit */_Bool) -245724904)) ? (-1087995827) : (((/* implicit */int) (_Bool)0)));
                arr_5 [i_0] [2] |= ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
                arr_6 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
}
