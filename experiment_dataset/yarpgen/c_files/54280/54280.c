/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (arr_4 [i_0] [i_0]);
                    var_10 ^= ((-1544953585400305224 ? (~41307) : 72));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_11 = (arr_8 [i_3]);
                var_12 = ((+(((~-401044006394110275) << (((((arr_9 [i_4]) + 1902386300)) - 51))))));
            }
        }
    }
    var_13 = (min(var_13, var_3));
    #pragma endscop
}
