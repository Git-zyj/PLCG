/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30177
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) (unsigned short)64013);
                    var_19 = ((/* implicit */signed char) (((_Bool)1) ? (1610612736) : (((/* implicit */int) (unsigned short)65535))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_3)) ? (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)1514)))), (((/* implicit */int) (!(((/* implicit */_Bool) -467242778))))))) : (max((((/* implicit */int) min(((unsigned short)1515), (((/* implicit */unsigned short) (short)32767))))), (((((/* implicit */_Bool) (unsigned short)64013)) ? (((/* implicit */int) var_1)) : (var_5))))));
    var_21 = ((/* implicit */unsigned short) var_17);
}
