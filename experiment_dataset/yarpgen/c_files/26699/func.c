/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26699
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
    var_18 = ((/* implicit */int) min((var_18), (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), ((+(((((/* implicit */_Bool) ((arr_2 [i_0] [10]) & (arr_0 [i_1])))) ? (((arr_3 [i_1] [2]) & (62914560))) : (min((arr_2 [i_0] [14]), (400050048)))))))));
                var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) (~(-62914534)))) ? (max((arr_1 [6]), (arr_0 [i_1]))) : ((((-(62914550))) % ((~(400050059)))))))));
                var_21 = 400050060;
                arr_4 [i_0] [i_1 + 1] [i_0] = -1257069133;
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (-((+(-950865216)))))) ? ((~(min((400050035), (var_8))))) : ((+(((((/* implicit */_Bool) 208094006)) ? (33554431) : (-33554432))))));
}
