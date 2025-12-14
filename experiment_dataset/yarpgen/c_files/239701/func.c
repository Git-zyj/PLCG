/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239701
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) 11076005286597849858ULL);
                var_13 = ((/* implicit */unsigned short) arr_2 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(3ULL)))) ? (min((((/* implicit */unsigned long long int) -122148239)), (4143052260099714275ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65515)))));
    var_15 += ((/* implicit */unsigned int) min(((+((-(((/* implicit */int) var_0)))))), (((/* implicit */int) ((short) max((var_7), (var_7)))))));
}
