/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((262016 * (((!var_16) ? -127 : 1397822900))));
        var_21 = ((-(((max(0, 1))))));
        arr_3 [18] [18] = (arr_2 [15]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_22 = (arr_6 [i_0] [i_1] [i_0]);
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((((~(!-1))) == (min(547169388, 304076265))));
                    }
                }
            }
        }
    }
    var_23 = ((var_13 ? -10686 : var_10));
    #pragma endscop
}
