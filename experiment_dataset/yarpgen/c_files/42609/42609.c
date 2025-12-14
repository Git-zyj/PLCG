/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (min(1, (max((max(242, var_12)), var_12))));
                var_18 = (min(((min(1, (!var_10)))), var_14));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_19 = (((-1509527264166320039 ? (var_8 + -18652343274773062) : (var_1 + 18652343274773062))));
                    var_20 = (min((((var_15 ? var_4 : 18756))), (((-18652343274773054 ? 563 : 3031645622)))));
                    var_21 = (min(-var_3, -563));
                }
            }
        }
    }
    #pragma endscop
}
