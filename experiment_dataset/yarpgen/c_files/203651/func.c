/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203651
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) min((-4624889636274093403LL), (((/* implicit */long long int) (unsigned short)48139))));
                    var_17 = var_10;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_18 -= var_1;
        arr_10 [i_3] = ((/* implicit */int) arr_8 [i_3]);
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3] [i_3 - 1]))))) || (((/* implicit */_Bool) var_9)))), (((((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 2])) >= (((/* implicit */int) arr_9 [i_3] [i_3 - 2]))))));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((arr_8 [i_4]), (var_1)))))) > ((+(((/* implicit */int) var_4))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_14)))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)17397)) ? (((/* implicit */int) (short)-4623)) : (((/* implicit */int) var_6)))))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */_Bool) var_2);
    }
}
