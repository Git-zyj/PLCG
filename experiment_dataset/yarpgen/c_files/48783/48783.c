/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= (max(89, -100));
                var_12 = (((27862 / 6) - (min((arr_2 [i_0] [i_1]), -var_2))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_11 [i_2] = max(27862, 84);
                var_13 += ((((((-27862 | 27862) ^ (((arr_1 [i_3]) ? var_11 : (arr_9 [i_3] [i_3] [i_2])))))) ? 149087197 : (((((arr_10 [i_3]) ? (arr_5 [i_2]) : var_11)) - (((min((arr_9 [i_2] [i_2] [i_2]), -90))))))));
            }
        }
    }
    #pragma endscop
}
