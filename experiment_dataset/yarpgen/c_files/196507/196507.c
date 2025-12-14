/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((var_9 * var_0) ? var_15 : (var_7 <= 570931384)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_1] [2] [i_2] = (((((!(arr_0 [i_1 + 1] [24])))) << (((!((min(-30689, -30674))))))));
                    var_17 = (min(var_17, (((-30689 >= (!30673))))));
                }
            }
        }
    }
    var_18 = max(30673, (((30677 > (max(590459707, 1))))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_19 = (max(36781, 2083743618));
                var_20 = (min(var_20, (~23234)));
                var_21 = (max(var_12, ((min(31, var_6)))));
            }
        }
    }
    #pragma endscop
}
