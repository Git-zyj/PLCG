/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = (1 >= var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_0] [i_3] [i_3] = (min(((!(arr_3 [i_0] [i_2 - 2]))), (arr_7 [i_0] [i_0] [i_0] [17])));
                        var_20 = 0;
                    }
                    var_21 = (max(var_21, ((max(var_9, (!var_6))))));
                }
            }
        }
    }
    var_22 = ((min((-30 <= 1914932278), (~1))));
    #pragma endscop
}
