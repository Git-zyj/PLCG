/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 &= ((((!((max((arr_1 [i_0]), (arr_5 [i_0] [i_2])))))) ? 217 : (((arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1]) ? 234 : (arr_7 [0])))));
                    arr_9 [i_2] [i_1] [i_0] = (0 * 25);
                }
            }
        }
    }
    var_15 = (!var_6);

    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_12 [i_3] = arr_6 [i_3 - 1] [i_3] [i_3] [i_3];
        arr_13 [i_3] = ((33 ? 19 : 30));
        var_16 = ((-(arr_3 [i_3 + 1])));
    }
    var_17 = var_4;
    #pragma endscop
}
