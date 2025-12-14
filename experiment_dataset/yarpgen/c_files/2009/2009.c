/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (0 && 1);
    var_13 = ((((max(var_6, -15079)) != var_2)));
    var_14 = (max((252 <= 3481674829), (min(((var_8 ? var_3 : var_8)), (7675538526511010200 > 31)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [0] [i_1] [i_2] = 137170518016;
                    arr_10 [i_1] [i_2] = 18446744073709551615;
                    var_15 *= (((min(((var_2 ? 0 : var_6)), var_7)) != ((((!997112980) ? 0 : (arr_5 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
