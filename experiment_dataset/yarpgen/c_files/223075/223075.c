/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [14] [i_0] = ((!((max((95 || 95), var_4)))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = -42;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_14 = var_10;
                var_15 = (((((~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2])))) ? ((214 << (var_11 - 182))) : (arr_7 [i_1 - 1] [i_1 - 1] [i_0])));
                var_16 = (max(-1, (~-30224)));
                var_17 = (min(var_17, ((((((~(max((arr_7 [i_0] [i_1] [i_2]), 95))))) ? ((0 << (30243 - 30232))) : var_12)))));
            }
            arr_9 [i_0] [1] = ((+(max((arr_2 [10]), -43))));
            var_18 = ((max((arr_4 [i_1 - 1]), (arr_7 [i_1 - 1] [21] [i_1 + 1]))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_0] [i_0] = -32763;
            arr_13 [1] = ((-((~((min((arr_10 [i_0] [i_0] [i_3]), var_12)))))));
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (arr_2 [i_4]);
        var_19 = (-32759 / -122);
        var_20 = (max(((+((((arr_5 [i_4] [i_4]) || var_10))))), ((-(((71 && (arr_10 [14] [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_21 = (min(var_21, ((min((arr_0 [i_5]), (max(4, ((-1 ? var_6 : (arr_4 [i_4]))))))))));
                    var_22 = (min(var_22, var_5));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_23 &= (!12);
        arr_26 [20] [i_7] = (arr_25 [i_7]);
        var_24 = (min(var_24, (((((((~(arr_10 [23] [i_7] [i_7]))) + 2147483647)) >> 30224)))));
    }
    var_25 = (min(var_25, var_4));
    #pragma endscop
}
