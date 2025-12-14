/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = 54732;
                    arr_6 [i_0] [13] = (((!1784831248) ? ((((((~(arr_0 [i_1])))) < (6138980800773273078 % var_7)))) : (((!((max(var_3, var_6))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    arr_18 [i_5 - 1] [i_3] [i_3] [i_3] = 653238001;
                    arr_19 [i_3] [i_4] [i_3] = ((6138980800773273056 << ((((2055279752 ? 3047134196600065507 : 8833)) - 3047134196600065507))));
                }
            }
        }
    }
    #pragma endscop
}
