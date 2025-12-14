/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((-((((max(9918, 55598))) >> (-46654 + 46683)))));
                    var_11 -= (max((arr_4 [i_0] [i_1] [i_2] [i_0]), ((min((arr_4 [i_0] [i_0] [i_0] [i_0]), -29045)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] [i_4] &= (min((((~(arr_5 [i_3] [i_3])))), (arr_5 [i_3] [i_4])));
                arr_15 [i_3] = ((!((((((((arr_9 [i_4]) + 2147483647)) >> (9928 - 9928))) << (((arr_1 [i_3 - 1] [i_3 + 1]) - 1542851724)))))));
            }
        }
    }
    #pragma endscop
}
