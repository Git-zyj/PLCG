/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (65535 + 0);
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (((((((30009 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_1])))) || (arr_8 [i_1] [i_1]))) ? -65535 : (~32767)));
                            arr_9 [i_3] [i_1] [i_1] [9] = (min(7941069294002932201, 0));
                            var_17 = (min(var_17, ((min(var_5, (((!(arr_5 [i_1 - 1] [14] [i_2] [i_3])))))))));
                            arr_10 [i_1] = 1;
                            var_18 = (arr_6 [i_0] [1]);
                        }
                    }
                }
                var_19 = (max(var_19, (~620384125)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 |= var_5;
                    var_21 = (((((5282 ? 255 : (35 == 4058525806972851319)))) / (((((var_8 ? var_5 : var_7))) ? var_12 : ((((arr_0 [i_4 - 1]) ? var_0 : 2460886951)))))));
                }
            }
        }
    }
    #pragma endscop
}
