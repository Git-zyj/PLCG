/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max((((-55 & var_2) >= ((4294967295 ? 14269429209043435714 : 14269429209043435714)))), (!912604813)));
                var_19 = (!16384);
            }
        }
    }
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = ((-12735 ? (!5) : (max((((!(arr_4 [i_2] [i_5 - 1] [i_6])))), -92))));
                                arr_17 [i_2] [i_4] [i_2] [i_3] [i_6] [5] [1] = ((!(arr_16 [i_2] [i_4] [i_4] [i_5])));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((~(min(0, 0))));
                                var_22 = (min(var_22, (((!((((arr_3 [i_2] [i_5 - 3] [i_5 + 1]) ? (arr_8 [i_5 - 1]) : (arr_3 [i_4] [i_5 - 1] [i_5 - 1])))))))));
                            }
                        }
                    }
                }
                var_23 = ((!((!(~3758096384)))));
            }
        }
    }
    #pragma endscop
}
