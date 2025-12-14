/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248006
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_0 [i_0] [10]))));
                arr_6 [(unsigned short)10] [8] &= ((/* implicit */unsigned short) (~(((/* implicit */int) max((((unsigned short) var_5)), (((unsigned short) var_4)))))));
                var_13 = ((/* implicit */unsigned short) min((max((arr_5 [i_1] [i_1]), (((/* implicit */int) var_1)))), ((-(arr_0 [8] [8])))));
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) + (var_6)))) ? (((max((arr_3 [i_1]), (80249876))) + ((-(1677947675))))) : (max((max((((/* implicit */int) var_9)), (var_3))), (((/* implicit */int) (unsigned short)3642))))));
            }
        } 
    } 
    var_14 &= var_4;
}
