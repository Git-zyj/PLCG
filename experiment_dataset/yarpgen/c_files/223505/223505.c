/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((3019715617 >= 1945527127056146517) == (!-93)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (((((var_7 * (arr_3 [i_1 - 1] [i_1 + 1])))) ? (((!(arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1])))) : var_1));
                    arr_8 [i_1] [i_1] = 1;
                    var_14 = ((1 ? 3866553755 : (38 * 1)));
                }
            }
        }
    }
    var_15 *= var_7;
    #pragma endscop
}
