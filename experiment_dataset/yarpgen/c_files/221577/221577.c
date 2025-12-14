/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [17]), (max(((var_12 ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((~(arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (((arr_4 [i_0]) || ((max((arr_7 [i_1 + 2] [i_1 + 1]), (((!(arr_11 [i_0] [i_0] [i_3] [i_0] [i_0])))))))));
                        var_18 = ((var_7 ? (~var_10) : var_9));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_19 = var_13;
        var_20 = ((-(-2025829340 <= 0)));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_21 = arr_1 [i_5];
        var_22 &= var_8;
    }
    var_23 = var_9;
    #pragma endscop
}
