/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(!3436618946)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = -1;
                var_15 = 8192;

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 = (((4294967286 ? 38 : var_12)));
                    var_17 = (((var_12 ? -var_6 : 8374999550941724886)));
                    var_18 -= -8202;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_19 = (((((var_11 ? 1384627634 : -1269952840))) ? 0 : (!844970995)));

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_3] [i_3] [i_4] = min(1721899531, (((-90 / (-49 - 1)))));
            var_20 += (!15032228027959142162);
        }
        var_21 = 1756210881;
        arr_17 [i_3] [i_3] = 13063;
    }
    #pragma endscop
}
