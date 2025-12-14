/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((4024062897 ? 3479404454 : 14095674451793513572)));
                arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 4] = ((((((var_1 < var_4) <= (arr_1 [i_0 - 1])))) >> (!var_14)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((max(7, (((!(arr_1 [i_0 + 3])))))))));
                            arr_12 [i_0 + 4] [15] [i_2] = ((((((arr_10 [i_0 + 3] [i_1] [i_2] [i_0] [i_1 - 3]) && (arr_10 [i_0 + 1] [i_1] [i_1] [4] [i_1 + 1])))) <= (!-8461665449476395153)));
                            arr_13 [i_0] = 4294967295;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_5] = (-8461665449476395153 / 6);
                                var_18 = (max((min(var_12, (4294967295 / var_4))), ((((arr_15 [i_6] [i_1 - 2] [4]) | ((12 ? (arr_9 [i_0] [i_1] [i_0] [14] [i_0] [i_0]) : var_6)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((4294967279 ? 32757 : 8461665449476395152)) <= (var_4 && 3046425392))));
    var_20 = (((((((max(-12771, 4294967292)) < 8461665449476395148)))) <= var_0));
    #pragma endscop
}
