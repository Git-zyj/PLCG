/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = min(var_4, (min(((56927 | (arr_0 [i_0]))), ((min(56934, (arr_2 [i_0])))))));
                    var_10 -= ((65535 > (arr_6 [i_0] [i_1] [i_2] [i_1])));
                }
            }
        }
    }
    var_11 = var_1;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [4] |= (((!-4652067224280049209) ? ((~(arr_11 [i_3]))) : (-574777650573064368 || var_1)));
        var_12 = (arr_11 [i_3]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_15 [i_4] = 8610;
        arr_16 [i_4] [i_4] = (max(var_1, (((arr_10 [i_4]) + (arr_11 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_13 = (1 || -1);
        var_14 = 56936;
        var_15 = (min(((16804969261933753314 ? (45369 + var_5) : (((((arr_18 [i_5]) < (arr_18 [i_5]))))))), var_4));
    }
    #pragma endscop
}
