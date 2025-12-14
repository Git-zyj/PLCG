/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((((~((var_16 ? (arr_0 [i_0 + 1] [i_0]) : 3066725829016046883))))) ? 242 : (arr_4 [i_0 + 1] [i_0])));
                var_20 -= 6144;
                var_21 |= (max(var_16, ((((var_0 ? var_16 : var_13)) >> (-6983 + 7046)))));
            }
        }
    }
    #pragma endscop
}
