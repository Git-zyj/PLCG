/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = ((arr_9 [i_2] [i_3]) - ((~(arr_5 [i_1 + 1] [i_3]))));
                        var_14 -= (((45120 || ((2119780183 || (arr_0 [i_3]))))) ? 1704401897 : (min(((var_0 ? 850073193 : var_10)), 805454429)));
                        arr_10 [i_0] [i_1] [i_2] [i_0] [i_2] [i_1] |= 57951864;
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((16396 ? ((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) <= 18374))) : 40372));
        var_15 = var_2;
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_16 &= min(3997800966, 64265);
                arr_17 [i_4] [i_5] [i_5] |= 3206336030;
            }
        }
    }
    var_17 = (min(var_17, var_7));
    var_18 += ((-((1550686482 ? 49145 : var_11))));
    #pragma endscop
}
