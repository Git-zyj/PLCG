/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226588
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((min(((-(2886387338U))), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_3 [5ULL] [5ULL])))))) << (((1719581026451572923LL) - (1719581026451572920LL)))));
                var_19 &= ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_1 - 1])), ((~(((/* implicit */int) max(((short)14336), ((short)3172))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 6795672589057829966LL))));
}
