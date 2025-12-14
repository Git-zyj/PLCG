/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= max((((!(((var_6 ? 0 : var_4)))))), ((((min(var_14, var_3))) << (((~var_8) + 29)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (arr_1 [i_2]);
                    var_17 = (max(var_17, ((((arr_6 [i_0] [i_1]) - (arr_6 [i_0] [i_1]))))));
                    arr_7 [i_0] [i_1] [1] [i_0] = 1;
                }
            }
        }
    }
    var_18 = 55109;
    var_19 = (((min(-22644, (min(var_11, var_0)))) % (~22661)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_20 = (min(((((min((arr_11 [i_3] [i_4]), var_13)) / (((var_3 ? 1342565648 : (arr_8 [i_3] [i_4]))))))), (max(((max(22643, var_8))), (arr_9 [i_3])))));
                var_21 = (max(((min(-22629, 182))), (arr_10 [i_4] [i_3])));
            }
        }
    }
    #pragma endscop
}
