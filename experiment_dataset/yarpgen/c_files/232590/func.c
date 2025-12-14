/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232590
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)16397)))) ? (((/* implicit */int) max(((unsigned short)49138), (((/* implicit */unsigned short) (short)12272))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-43)), ((short)-32298))))));
                    var_18 = ((/* implicit */short) (-((~((-(((/* implicit */int) (unsigned short)16397))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned short)49130))));
}
