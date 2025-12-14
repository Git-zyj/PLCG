/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1;
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_13 ^= 30547;

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                arr_6 [i_1] [i_2] = var_7;
                arr_7 [5] [i_1] [i_1] [4] = (((arr_1 [i_0 - 2]) - 635500984));
            }
            var_14 *= 3659466312;
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_4] = (((arr_14 [i_0 + 1] [i_3 + 1]) ? (arr_14 [i_0] [i_4]) : 18014398509481983));
                arr_16 [i_3] [i_3 + 2] = (min(((((((var_1 <= (arr_8 [8] [i_3] [i_4]))))) % ((var_8 ? 635500994 : var_9)))), (max(((-23238 ? 1073610752 : 3659466312)), ((max((arr_1 [i_0]), (arr_3 [i_4] [i_4]))))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_15 = ((arr_3 [i_6] [i_3]) ? -196 : ((~(arr_17 [6] [i_3] [i_4] [i_5 - 2]))));
                            var_16 = ((-(max(196, (arr_18 [i_0 - 1] [i_0] [1] [i_0] [i_3 - 1] [i_5 + 2])))));
                            var_17 = ((((((arr_2 [i_0 - 1]) ? var_10 : (arr_14 [i_0 - 1] [i_5 - 2])))) ? (((6135 / (arr_2 [i_0 - 1])))) : ((14 ? 635500974 : var_3))));
                            var_18 ^= ((((((arr_20 [i_0]) / ((var_7 + (arr_2 [i_0 - 1])))))) || (arr_14 [1] [i_4])));
                            arr_21 [i_0] [i_3] [i_6] [i_4] [i_6] [i_5] [i_6] = (max(((((((min(60, (-32767 - 1))))) / (var_5 / 188460143)))), (((min(-1, -720489131)) + (50107 - var_9)))));
                        }
                    }
                }
                var_19 *= var_1;
            }
            var_20 = (min(var_20, (((+(((arr_8 [i_0] [5] [i_3]) ? ((1966080 ? 219 : 188460143)) : (1966080 < 4153027480))))))));
        }
        var_21 |= var_0;
    }
    var_22 = var_10;
    #pragma endscop
}
