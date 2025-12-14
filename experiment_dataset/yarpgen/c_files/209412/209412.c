/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max((var_17 | 7312073629558605452), ((((var_8 / var_8) == (549755813884 / 222638273))))));
                    arr_7 [i_0] = (min(var_0, var_15));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = (arr_4 [i_3] [i_4]);
                    var_21 = (max(var_21, (((((min(var_5, (arr_4 [i_3] [i_4])))) ? (arr_0 [i_3] [i_4]) : ((-7312073629558605453 ^ (max(var_10, var_10)))))))));
                    var_22 = (max((min(var_10, (max(9223372036854775786, var_15)))), var_8));
                }
            }
        }
    }
    var_23 += (max(-25703, ((min((!var_12), var_13)))));
    #pragma endscop
}
