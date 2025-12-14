/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = 2147483647;
                    arr_6 [i_0] = -1;
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (((min((arr_3 [i_0 + 2]), (arr_4 [i_1] [10] [i_1] [i_0]))) >= var_1));
                    var_11 = (max(var_11, ((min((((14880 ? var_0 : var_5))), (arr_0 [i_0]))))));
                    var_12 = (min(var_6, (arr_3 [i_0 + 1])));
                }
            }
        }
    }
    var_13 = (max(((min(((min(var_0, var_5))), var_1))), ((((max(var_8, var_1))) ? var_0 : (!var_9)))));
    #pragma endscop
}
