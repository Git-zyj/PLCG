/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202030
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (((min((var_11), (var_11))) >> (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) var_5);
                arr_5 [i_1] [i_0] = var_0;
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_7);
    var_18 = ((((/* implicit */_Bool) ((unsigned long long int) 1044480U))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_10)))));
}
