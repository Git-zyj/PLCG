/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [7] [i_0] [i_0] [i_0] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        var_16 += 1489800418;
                    }
                }
            }
            var_17 = (max(var_17, ((((~2805166891) <= (arr_10 [i_1] [i_1] [i_1] [14] [i_1]))))));
            var_18 = (arr_8 [i_0] [i_0] [i_1] [i_1]);
            var_19 = (((arr_3 [i_0] [i_0]) ? var_8 : (((arr_6 [i_0] [i_0] [i_0]) ? 118 : 1875575607))));
        }
        arr_12 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
        var_20 = (min(var_20, (((3950521611 ? 10866047336246745817 : 3193916325)))));
    }
    #pragma endscop
}
