/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 -= -51;
                    var_11 *= (((arr_6 [i_2] [i_1 + 2] [i_2]) ? var_0 : var_7));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_12 = (((max((arr_10 [i_3]), var_6)) % (arr_10 [i_4 - 3])));
                    arr_19 [i_3] [i_3] [i_3] [i_3] = (((((var_2 << (arr_14 [i_3] [i_3])))) != (arr_14 [i_3] [i_3])));
                    arr_20 [i_4 - 3] [i_4] [i_3] [i_3] = (23742 & 63910);
                    var_13 += (min(69, 51));
                }
            }
        }
    }
    #pragma endscop
}
