/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_8 ? var_8 : (~4194303))))));
    var_12 = ((-1503609063 ? -100 : (1 < 1503609062)));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min((min(196, 1387434768)), 0));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 1])));
                            arr_13 [i_0] [i_2] [i_2] = (!100);
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_3 - 2] [i_2] = (-(3798962404 || 65535));
                        }
                    }
                }
                var_15 |= ((-1503609063 / ((~(arr_10 [i_0] [i_1] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
