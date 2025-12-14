/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((min(var_6, (((arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 1]) : (arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 2]))))))));
                    arr_6 [i_2] = (arr_2 [i_0 - 1] [i_1] [i_2]);
                }
            }
        }
    }
    var_21 |= ((var_14 ? 133 : ((((max(3, 3005196563))) ? var_6 : (~var_16)))));
    #pragma endscop
}
