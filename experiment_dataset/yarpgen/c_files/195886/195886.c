/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = max(((~(~var_9))), (max(((min(var_5, -8510875006895489694))), var_10)));
                    var_13 = 127;
                    arr_9 [i_2] [i_1] [i_0] [i_2] = 54757;
                }
            }
        }
    }
    var_14 = (((((~var_6) & ((var_2 ? 4294967293 : var_0)))) | var_8));
    var_15 = (max(((min((18446744073709551615 == var_2), (min(1225937623405156956, -5485988940664846752))))), ((((max(var_10, 234))) ? var_8 : var_8))));
    #pragma endscop
}
