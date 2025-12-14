/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] = -3614247132398592057;
                    var_12 = (((((((1 && (arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_1]))) ? (var_1 != 2125988327) : 3614247132398592059))) ? var_2 : ((var_11 ? (arr_8 [i_1]) : var_1))));
                    var_13 += (max((!-3614247132398592057), 0));
                    arr_10 [i_1] [i_1] [i_2 - 2] = (((-127 - 1) / 96));
                }
            }
        }
        var_14 = (min(var_14, (((~((var_11 - (arr_1 [i_0] [i_0]))))))));
        arr_11 [i_0] = 0;
        var_15 = var_6;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = 16384;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_16 *= (-89 & -2125988327);
                arr_22 [i_5] = (((arr_6 [i_5] [i_4]) ? -2092756307 : (-2147483647 - 1)));
            }
            arr_23 [i_3] |= (arr_15 [i_3]);
            arr_24 [i_4] [i_3] = ((-97 ? var_9 : 13532405619082393054));
        }
    }
    var_17 = ((-(max(var_2, ((0 ? 524224 : (-127 - 1)))))));
    var_18 |= (~var_1);
    var_19 = min(var_0, ((13532405619082393054 ? var_6 : ((var_3 ? var_2 : 8386560)))));
    #pragma endscop
}
