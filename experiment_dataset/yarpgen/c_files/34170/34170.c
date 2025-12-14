/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (arr_0 [i_0])));
                var_16 = (max(var_16, (((~(((arr_4 [i_1]) ? 25763 : 63)))))));
                arr_7 [17] [1] = (((((~(arr_4 [i_0 - 2])))) ? ((min(28, 51549))) : (((arr_1 [i_0] [17]) ? ((-(arr_4 [1]))) : ((255 ? (arr_5 [i_0] [i_0 - 1] [i_0]) : (arr_2 [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_17 [i_2] [4] [i_3] [i_4] = 61362;
                    var_17 = (max(((79 >> (((arr_9 [i_3]) - 3799)))), (((~0) ^ (arr_4 [i_4])))));
                }
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}
