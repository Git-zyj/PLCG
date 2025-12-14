/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198232
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) 1917232435U);
                arr_7 [i_1] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 8068669578664946185LL)))));
                arr_8 [i_0] = ((/* implicit */unsigned int) max(((+(9223372036854775792LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(4294967274U)))))))));
            }
        } 
    } 
    var_13 -= ((/* implicit */long long int) -1422450069);
}
