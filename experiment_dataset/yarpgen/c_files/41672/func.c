/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41672
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
    var_13 = ((/* implicit */short) max((((unsigned short) (unsigned short)53180)), (((/* implicit */unsigned short) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */short) 5563533649364799045LL);
                var_15 = ((/* implicit */unsigned long long int) (~((~(arr_0 [i_0] [i_0])))));
                arr_4 [i_0] [i_0] [i_0] = (unsigned short)53195;
                arr_5 [i_0] = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)53180))))));
            }
        } 
    } 
}
