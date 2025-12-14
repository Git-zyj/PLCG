/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42034
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
    var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 948514323U)) ? (((/* implicit */int) (unsigned short)4158)) : (((/* implicit */int) var_8)))))))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_7))))))));
    var_14 -= ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)46930))))));
        arr_3 [i_0] = ((/* implicit */signed char) (+((+(var_9)))));
    }
}
