/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (3584 / 61944);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((-(((max(908008519, (arr_7 [i_1] [i_1] [i_1]))) * (((var_2 / (arr_0 [i_1] [i_2]))))))));
                    var_18 = (min(var_18, (((!(((-(arr_3 [i_2] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
