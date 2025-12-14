/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [21] [21] = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] = (arr_4 [i_0] [i_0] [i_0]);
                            var_18 = (min((min(var_12, (arr_2 [i_0]))), 252));
                            var_19 = (max(var_19, ((((((((min(1860682935, (arr_11 [i_0] [i_1] [i_2] [6])))) ? (-1860682960 * 25) : -var_9))) ? (((min((!var_15), var_16)))) : (min((~4294967281), var_9)))))));
                            arr_13 [i_0] [i_2] [i_0] = (min(-116, (((!(arr_3 [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (!var_4);
    var_21 = (min((~-1860682935), (var_8 + 699858347)));
    #pragma endscop
}
