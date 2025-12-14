/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((~(arr_3 [i_0] [i_0])));
                    arr_8 [i_2] [i_1] [i_0] = ((67041713313974852 / (((((67041713313974848 ? -12403 : -6901575978452397934)))))));
                }
            }
        }
        arr_9 [i_0] = min((((max(2305843009213693952, 90)))), (var_13 - 6901575978452397934));
        var_20 = ((-(!-67041713313974853)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_21 = (min(-54, 6390));
                    arr_15 [i_4] [i_4] [i_3] [i_0] |= 67041713313974876;
                    var_22 = ((((!(((-4 ? 129 : 2505121068))))) ? 9032 : (!-32757)));
                    arr_16 [i_0] [i_0] [i_0] = ((((-(max(67041713313974852, 226)))) + (((min(11985, -4))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_20 [i_5] [i_5] = ((~((64 << (2499826167 - 2499826165)))));
        arr_21 [i_5] [i_5] = (((!4803317285969465181) | (min(2305843009213693954, var_1))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_23 = ((4294967281 < (arr_22 [i_6] [i_6])));
        var_24 = (!-28171);
        var_25 = (arr_0 [i_6]);
        var_26 -= ((((18762 <= 6320883135423374733) - (arr_4 [i_6] [i_6] [i_6]))));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_27 = ((max(((min(var_5, (arr_11 [i_7] [i_7])))), (var_2 - 1))));
        var_28 = (min((((~((max(75, (arr_22 [i_7] [i_7]))))))), (max(((var_13 ? -6901575978452397963 : 0)), (((-4253 ? 53568 : var_6)))))));
        arr_26 [i_7] [i_7] = ((-(101 / 1)));
        arr_27 [i_7] = ((!((((1 || var_3) ? var_2 : 2088960)))));
    }
    #pragma endscop
}
