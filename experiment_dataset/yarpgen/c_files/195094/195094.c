/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(352252609, (var_1 ^ 0)));
    var_19 = (var_1 >= var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_1 [i_1] [i_0]);
                arr_5 [i_0] [i_1 - 1] [i_1] = ((min(var_9, (((!(arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] [12] [i_3] = (--var_12);
                            arr_13 [i_2] [i_2] = (!1477184723);
                        }
                    }
                }
            }
        }
    }
    var_20 = (min((((2246222039 ? var_17 : 3942714687))), var_3));
    #pragma endscop
}
