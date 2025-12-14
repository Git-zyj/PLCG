/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((32764 ? 2017268094 : 7915))) ? 20350 : -var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 2] [i_1] [i_2] [i_2] = (2727120834 << (((45191 - -183874118489736653) - 183874118489781822)));
                    var_20 *= (183874118489736679 < 1);
                }
            }
        }
    }
    var_21 = (min(var_21, -3733586485155127502));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            {
                var_22 = (max(var_22, (((((!511) ? (((183874118489736679 ? 1 : (arr_7 [i_3])))) : 70351564308480))))));
                var_23 = (min(var_23, ((((arr_9 [i_3 + 2]) % var_4)))));
            }
        }
    }
    #pragma endscop
}
