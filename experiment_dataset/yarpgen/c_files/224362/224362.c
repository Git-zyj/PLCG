/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (~var_5);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_2] [i_2] [i_3] [i_1] = ((~(var_6 & 14033368644146536750)));
                        var_13 = (min(12881850956325695599, 12881850956325695599));
                    }
                }
            }
        }
        arr_10 [i_0] = (min((~var_0), var_6));
    }
    var_14 = 5564893117383856016;
    var_15 = 2251799813685247;
    #pragma endscop
}
