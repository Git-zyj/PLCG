/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] |= (!12673615054019878831);
        arr_3 [i_0] [3] = (((min(1380340565, 12673615054019878817)) <= ((var_5 ? -5773129019689672778 : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0 - 1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 2] [i_2] [i_2] [i_0] = (!137);
                    var_20 &= (!3957338789);
                }
            }
        }
    }
    var_21 = (((var_13 ? -var_12 : 29608)));
    #pragma endscop
}
