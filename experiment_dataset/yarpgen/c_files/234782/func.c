/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234782
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) 2044440024)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (261166636U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20964)))))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65532)))))));
            }
        } 
    } 
}
