/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41838
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
    var_17 = ((((((6160980267508978352LL) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) -6160980267508978338LL)) ? (1613120267) : (798286666)))))) != (6160980267508978352LL));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_19 = ((_Bool) ((((/* implicit */_Bool) var_5)) ? (6160980267508978352LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                arr_5 [i_1] [(unsigned char)10] &= ((/* implicit */unsigned short) -6160980267508978353LL);
                var_20 = -1841033233;
                arr_6 [i_0] = ((/* implicit */signed char) ((int) 6160980267508978353LL));
            }
        } 
    } 
}
