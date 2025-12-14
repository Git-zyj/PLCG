/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (!27526);
                    var_21 = (min(var_21, ((((-3701294935754396714 ? 7970784234978943838 : 0))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                {
                    var_22 = ((39039 ? (2755633083 | var_13) : (arr_6 [i_3 + 1])));
                    arr_15 [4] [4] [i_4] &= ((-1002091221 < (arr_2 [i_3 + 1])));
                    var_23 = -1680523156726091713;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_6 - 1] = var_6;
                arr_23 [i_5] [i_6] = (!-10475959838730607777);
            }
        }
    }
    var_24 |= ((2204683504908535893 >> (((max((44241 * -27527), ((1497813122352561680 ? 27526 : var_19)))) - 27502))));
    #pragma endscop
}
