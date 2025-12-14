/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_10, ((((-16069 - 0) || var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (max((((((1 ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0])))) ? (max((arr_1 [i_0]), 1604768283)) : (arr_1 [i_1 + 1]))), (max((451488854 < -1106237192504298984), 693286406))));
                arr_5 [i_0] [i_1] [i_1] = ((((((arr_2 [i_1 + 1]) | (arr_2 [i_1 + 2])))) ? (arr_2 [i_1 - 2]) : (((arr_2 [i_1 - 3]) ? (arr_2 [i_1 - 2]) : 14046900782987965168))));
                arr_6 [i_1] = (((((1 / 1604768283) ? -13838 : (min((arr_0 [i_0]), 63)))) ^ var_8));
            }
        }
    }
    #pragma endscop
}
