/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!((min((arr_0 [i_0 - 3] [i_0]), (var_7 * var_3))))));
        arr_4 [i_0] [i_0 - 2] = (((arr_0 [i_0] [i_0 + 1]) ? (min(2132894646, (arr_2 [i_0] [i_0 + 1]))) : (((min(var_14, (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [1] = (((arr_6 [i_1 - 2] [i_1 - 2]) ? ((((arr_5 [i_1] [i_1]) / (13143 >= 13143)))) : (arr_6 [i_1] [i_1 + 1])));
        arr_8 [14] [14] = 20;
    }
    var_21 = ((var_7 ? (~var_7) : ((var_18 ? 13133 : var_1))));
    var_22 = var_5;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_19 [i_2] [i_2] [i_2] = ((-(arr_2 [i_2] [i_3])));
                    var_23 = (arr_2 [i_2] [i_2]);
                    arr_20 [i_2] [i_3] [i_2] = (arr_14 [i_2] [i_2] [i_4]);
                    arr_21 [i_4] [i_2] [i_2] [i_2] = (min((~13143), ((((((arr_11 [i_2] [i_2]) / (arr_12 [i_2] [i_2] [i_2])))) ? (min(13144, 2162072650)) : 2162072650))));
                }
            }
        }
    }
    #pragma endscop
}
