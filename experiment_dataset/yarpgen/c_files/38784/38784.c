/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 += 3240573371;
                        var_15 = (max(var_15, (16799 <= 100663296)));
                    }
                }
            }
        }
        var_16 = (min(var_16, var_7));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4] = (min(var_4, (((!(arr_14 [i_4 + 1]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = ((!(((((var_12 ? var_8 : var_13))) && ((max(1700469228, -31)))))));
                    var_17 = 7;
                    var_18 *= (arr_19 [i_4 - 1]);
                    var_19 = max(((((var_12 ? var_7 : 13633244802765058498)) * 4813499270944493117)), (((((!(arr_19 [i_4])))))));
                    var_20 = (max(var_20, ((max((48748 || 4813499270944493110), (~1))))));
                }
            }
        }
        var_21 += (((((-(arr_19 [i_4 - 1])))) ? ((-(arr_14 [i_4 - 1]))) : var_5));
        arr_22 [i_4] = (arr_20 [i_4] [i_4] [i_4] [i_4]);
    }
    var_22 ^= -var_8;
    #pragma endscop
}
