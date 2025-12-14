/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248129
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)181)), (1935501437U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] &= (-(((/* implicit */int) ((short) 2359465845U))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-34);
            }
        } 
    } 
}
