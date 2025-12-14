/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (270670074 && (((arr_4 [i_2] [i_1] [i_2]) != (arr_4 [i_2] [i_1] [i_2]))));
                    var_11 = ((~(arr_4 [i_2] [i_1] [i_2])));
                    var_12 = (((~(arr_4 [i_2] [i_1] [i_2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_13 += ((!(arr_10 [i_4])));
                var_14 = ((!(270670074 / -270670066)));
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
