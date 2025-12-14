/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (7888498134057708109 || var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (min((min((~13), 8140916556093467767)), (((~((min(0, -17))))))));
                var_18 = ((((min(-1, 107))) * (!2143289344)));
            }
        }
    }
    var_19 = 147;
    #pragma endscop
}
