/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200827
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
    var_10 ^= (unsigned short)35853;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [(unsigned short)6] = arr_4 [i_0];
                var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48211)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1] [i_0]), ((unsigned short)40644)))) : (((((/* implicit */int) (unsigned short)5138)) & (((/* implicit */int) (unsigned short)60390)))))), (((/* implicit */int) ((unsigned short) (unsigned short)59970)))));
            }
        } 
    } 
    var_12 = var_8;
}
