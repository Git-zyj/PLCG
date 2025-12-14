/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44469
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
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [5] = 45204;
                    var_11 = (min((min((arr_4 [i_0] [i_1]), -1245412624)), 1245412624));
                    arr_11 [14] [1] [18] [1] = (((5770289256631579056 ? -1245412624 : 1248937287)));
                }
            }
        }
    }
    var_12 = (~(!var_10));
    var_13 = (~59);
    var_14 = var_3;
    #pragma endscop
}
