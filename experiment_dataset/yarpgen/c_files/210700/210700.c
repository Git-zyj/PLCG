/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = 204;
                    arr_7 [1] [i_1 + 1] [i_1 - 2] [i_1 - 2] = (min((!var_8), ((var_1 ? (arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 2])))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_11 = (min(var_11, (((((var_8 ^ (arr_9 [i_0 - 1]))) == (~var_5))))));
            var_12 = ((~(1 >= var_8)));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_13 [i_4] |= ((var_0 + 4611686018425290752) ? ((-(arr_10 [24] [i_4] [i_4]))) : ((min(1, var_0))));
        var_13 = (arr_8 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                var_14 = (max((((max(var_8, var_2)) == (1 / var_9))), (((var_9 <= -2035148816400379885) == (var_0 + var_7)))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_21 [i_5] [i_5] = ((((((arr_15 [i_6 + 2]) * (arr_1 [i_6 - 1] [i_6 - 2])))) ? var_3 : (arr_4 [i_6 - 2] [i_6 - 2])));
                    arr_22 [i_7] [i_6] [i_5] &= (((!var_4) ? (min(13510798882111488, var_8)) : ((((var_1 + var_2) + 887251720)))));
                    var_15 = (var_1 && -4294967291);
                }
            }
        }
    }
    #pragma endscop
}
