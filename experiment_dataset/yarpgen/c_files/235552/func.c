/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235552
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
    var_17 = (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(var_2))))) ^ (((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-1044)) ? (arr_0 [i_0 - 3]) : (max((arr_1 [i_1] [i_0]), (((/* implicit */int) var_2)))))));
                arr_6 [i_1] = ((/* implicit */int) var_5);
            }
        } 
    } 
}
