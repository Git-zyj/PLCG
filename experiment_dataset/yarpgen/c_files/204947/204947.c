/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] = (arr_9 [i_1] [i_1] [i_0] [i_3]);
                            arr_13 [i_0] [i_3] [i_2] [i_3] = (!var_11);
                            var_16 = ((+((((((arr_8 [i_0] [i_1] [i_3]) ? var_8 : 255))) ? ((max(0, (arr_10 [i_3] [i_1])))) : (min(var_13, (arr_9 [i_0] [i_1] [i_2] [i_3])))))));
                        }
                    }
                }
                arr_14 [15] [i_0] [i_1] = var_4;
            }
        }
    }
    #pragma endscop
}
