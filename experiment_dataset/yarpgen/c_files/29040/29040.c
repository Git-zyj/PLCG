/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (max(var_8, var_10));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (arr_0 [i_1]);
                    var_12 &= (((!(~9551009539915289908))));
                    arr_9 [i_0] [i_1] [i_1] = var_9;
                    var_13 = var_7;
                }
            }
        }
    }
    var_14 = (max(var_8, var_6));
    #pragma endscop
}
