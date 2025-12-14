/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21972
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
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-9669)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))))));
                    var_12 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))));
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) 2018589982);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 2018589987)) ? (2018589982) : (((/* implicit */int) (short)9668))));
}
