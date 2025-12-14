/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [11] = 54598;
                        var_10 = (max(54598, (arr_0 [i_0])));
                    }
                }
            }
        }
        var_11 = (10926 * 12579580818149048498);
        var_12 = ((((max((arr_4 [i_0] [i_0] [i_0] [1]), var_3))) ? (((min(54598, 0)))) : ((((-(arr_7 [13] [i_0] [i_0] [1])))))));
    }

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_13 = 1187112370;
        arr_13 [i_4] = var_4;
    }
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        arr_16 [i_5] = arr_2 [i_5] [i_5 - 1];
        var_14 = (arr_4 [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}
