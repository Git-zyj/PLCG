/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (-292379379883392174 + (arr_3 [i_0]));
                    arr_10 [7] [7] [7] [i_1] = ((292379379883392172 != (arr_8 [i_1] [i_2] [i_2] [i_2])));
                    var_11 = 242;
                }
            }
        }
        arr_11 [14] [i_0] = var_1;
        arr_12 [7] [i_0] = (arr_6 [i_0] [i_0]);
    }
    var_12 = (max(292379379883392172, ((144 ? (min(-9050385359967061920, var_9)) : ((max(42862, 292379379883392172)))))));
    var_13 -= (min(var_6, ((~((max(11381, var_5)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            {
                arr_18 [13] = (2491717037175067434 ? var_0 : ((292379379883392150 ? -8634889691905686268 : 7303557204833655033)));
                arr_19 [1] [0] [4] &= var_9;
                arr_20 [i_3] [i_3] = 24339;
                var_14 *= (min(10, 292379379883392163));
                var_15 = -292379379883392170;
            }
        }
    }
    var_16 = (max(var_16, var_9));
    #pragma endscop
}
