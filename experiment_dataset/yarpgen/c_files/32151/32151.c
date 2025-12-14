/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(121, (!var_13)))) ? (!var_3) : (max((((6 << (255 - 247)))), ((var_13 ? -5822147105404895104 : 134217727))))));
    var_19 = ((+(((!var_6) ? var_2 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (!1792289572);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = ((var_11 ? (~var_3) : (((((max(-1792289573, 127))) ? var_7 : 1)))));
                                var_21 = ((((max(var_8, (~1)))) ? ((-(max(var_9, (arr_14 [i_0] [i_1 - 2] [i_0] [i_1] [i_4 + 1]))))) : var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
