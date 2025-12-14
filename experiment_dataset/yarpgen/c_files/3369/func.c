/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3369
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
    var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && ((((!(((/* implicit */_Bool) (unsigned short)23243)))) && (((/* implicit */_Bool) var_3))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_0))) != (((/* implicit */int) (unsigned short)33593))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21218)) | (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] |= ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) arr_2 [i_1 - 2])))), (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [(unsigned short)11])))))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1])) < (((/* implicit */int) arr_3 [i_1 - 2])))))));
                arr_5 [i_0] [i_0] [i_1] = ((unsigned short) arr_3 [i_0]);
            }
        } 
    } 
}
