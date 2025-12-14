/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (min(8064461362985816900, 6615));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (max(((((var_3 ? 3743265178 : 788018370)) << (5497016195304597813 - 5497016195304597808))), ((((arr_7 [i_0] [11] [11] [i_0]) ? 6941 : ((-110 ? -16 : var_10)))))));
                    arr_8 [i_2] [i_0] [i_1] [i_0] = ((1 ? -1962640399 : 170030982));
                }
            }
        }
    }
    #pragma endscop
}
