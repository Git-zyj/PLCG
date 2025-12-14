/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (~221);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += (max((((-(((arr_0 [0]) / 67))))), (((((var_8 ? var_6 : (arr_3 [i_0])))) ? ((3734307662497398014 / (arr_3 [i_0]))) : (arr_0 [i_1])))));
                var_19 = ((-((-22 ? (-1994839119 < -4) : 9))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [17] = (min(((min(((((arr_6 [i_3]) < (arr_5 [i_2] [i_2])))), ((4 << (38 - 29)))))), 434470321));
                    var_20 ^= -4;
                }
            }
        }
    }
    var_21 += (max((((((0 ? 10 : var_14))) ? var_4 : var_3)), (max(var_3, var_4))));
    #pragma endscop
}
