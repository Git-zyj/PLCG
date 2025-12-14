/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35794
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
    var_11 = ((/* implicit */int) ((unsigned long long int) 942420794));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2479249318U)) ? (((/* implicit */unsigned long long int) 942420793)) : (14912737063338132442ULL)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [14] = ((/* implicit */unsigned long long int) min(((((~(9223372036854775807LL))) | (((/* implicit */long long int) max((-942420793), (((/* implicit */int) arr_4 [i_0 - 2]))))))), (((/* implicit */long long int) var_7))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 + 3]);
            }
        } 
    } 
}
