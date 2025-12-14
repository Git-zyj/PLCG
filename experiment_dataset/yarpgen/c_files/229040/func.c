/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229040
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
    var_13 = ((((/* implicit */unsigned long long int) -1517650250)) <= (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-2277274161385979766LL)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_7))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [(_Bool)1] = (~(((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) (_Bool)0)), (15LL))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 13545306116695698670ULL)) || (((/* implicit */_Bool) (unsigned short)62660)))))) : (((((arr_4 [5]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_10);
}
