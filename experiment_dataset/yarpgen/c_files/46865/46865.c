/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (max(var_12, 218));
    var_15 = ((((((((255 >> (var_8 - 3420847404776525361)))) ? var_9 : var_11))) ? 24285 : (~var_10)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((!(arr_1 [i_0 - 1])))));
        var_17 |= max(var_3, (arr_1 [18]));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = (max(var_0, (arr_1 [i_1])));
        arr_5 [i_1] = (!24304);

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_18 = (arr_1 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = (arr_12 [i_1] [i_1] [i_3] [i_2] [i_2]);
                        var_20 += max((max((arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_3 + 1]), 0)), ((((arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_1] [i_3 + 1]) || (((var_8 ? 116 : var_9)))))));
                        arr_13 [i_2] [i_2] [8] = ((((arr_9 [i_1] [i_1] [i_3 - 1] [6]) ? var_5 : (arr_9 [4] [i_2] [i_3 - 1] [10]))));
                        var_21 = -28754;
                    }
                }
            }
        }
    }
    #pragma endscop
}
