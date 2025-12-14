/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54060
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)112)) ^ (((((/* implicit */int) (signed char)95)) >> (((/* implicit */int) (signed char)22))))));
                var_14 = ((/* implicit */_Bool) max((min((max((8278173130151388526LL), (((/* implicit */long long int) (signed char)-98)))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max(((unsigned short)58113), (arr_5 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (var_11) : (((/* implicit */int) ((_Bool) 2772843146U)))))));
}
