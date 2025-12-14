/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((var_1 || 16067498901786947929), 31));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_11;
        var_15 = (((((arr_0 [i_0]) ? var_4 : var_12)) / ((((arr_0 [i_0]) ? 19 : (arr_0 [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    var_16 = (-12 <= 8515455318675761140);
                    var_17 = ((-(((2379245171922603681 <= (arr_8 [i_3] [i_3] [i_3]))))));
                }
            }
        }
    }
    var_18 = ((10804151705186244716 ? 6792097682126259311 : 262143));
    var_19 = var_0;
    #pragma endscop
}
