/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (var_3 - var_13);
                    arr_8 [i_0 - 3] [i_1] [i_2] [i_1] |= ((((~(min(var_8, (arr_3 [i_1]))))) ^ var_7));
                    arr_9 [i_0] = (-((((((arr_1 [i_1] [i_1]) ? var_2 : 5383612322471609834)) != ((((arr_4 [i_0]) ? 898312753 : 0)))))));
                    arr_10 [i_0] [i_0] = ((((((min(65531, (-2147483647 - 1)))) ? 34084860461056 : ((min(638702418, 51398))))) % ((max(var_9, var_8)))));
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
