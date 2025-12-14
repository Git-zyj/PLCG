/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220341
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(-1976559535)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0 + 1] [i_0] [i_2] = ((signed char) ((short) (signed char)-1));
                    arr_7 [i_0] [i_1 + 1] [i_0] [i_1 + 1] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0 + 2])), (min(((signed char)127), ((signed char)-121)))))), (min((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
}
