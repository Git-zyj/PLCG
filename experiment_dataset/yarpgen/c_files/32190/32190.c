/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_2] [i_0]);
                    var_19 = (var_0 >= 7688315044664314168);
                    var_20 -= (max((((10758429029045237477 - 10758429029045237447) <= (((max((arr_5 [i_0 + 2] [i_2]), (arr_3 [i_0 + 1] [i_0 + 1]))))))), (!var_9)));
                    arr_8 [i_0] [i_2] = -29481;
                    var_21 = ((-(arr_3 [i_1] [i_0 - 1])));
                }
            }
        }
    }
    var_22 = (max((~10758429029045237473), var_9));
    var_23 = (((var_8 || var_5) | 1738704796));
    #pragma endscop
}
