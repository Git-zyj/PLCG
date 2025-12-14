/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(((6564344251663041191 >> (-1710 + 1756))), (arr_4 [i_0] [i_0])));
                    var_12 = (!74);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                {
                    var_13 &= var_5;
                    arr_17 [3] [i_4] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
