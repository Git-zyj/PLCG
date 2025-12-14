/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 |= var_13;
            var_16 = ((((min(var_2, 62)) <= (10294728309104979523 == var_3))));
        }
        var_17 = (max(var_17, (arr_1 [i_0] [4])));
        arr_4 [i_0] = (max((((((arr_3 [i_0]) - (arr_2 [i_0] [i_0]))))), (((arr_1 [i_0 + 2] [i_0]) & (arr_1 [i_0] [i_0 - 1])))));
        var_18 = (((((arr_3 [7]) | (~10294728309104979523))) & 8662188747710601769));
        var_19 += var_8;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, ((min(((~(((arr_1 [9] [9]) | (arr_2 [i_2] [i_3 - 2]))))), ((min((arr_6 [i_4 - 1]), (arr_1 [i_3 + 1] [i_3])))))))));
                    var_21 = arr_9 [i_2];
                    var_22 = (((((((arr_12 [i_3 + 1] [i_4 - 1] [i_4]) + 2147483647)) >> (((arr_12 [i_3 - 2] [i_4 + 1] [i_4]) + 1789831616)))) << (((min(-1, (max(var_7, 1514795925827041151)))) - 1514795925827041150))));
                }
            }
        }
        var_23 = (max(var_23, ((min((~-13), 3)))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_24 = 1677442236;
                    arr_21 [i_2] [2] [i_6] [i_6] = var_8;
                    arr_22 [i_2] [i_6] [i_6] = 9223372036854775807;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_25 = (arr_2 [i_7] [i_7]);
        var_26 = ((var_6 | (arr_11 [i_7] [i_7])));
        var_27 = 18858;
    }
    var_28 = (min(var_28, (var_11 * var_2)));
    #pragma endscop
}
