/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_9, var_13);

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((min(7333822322287997803, var_2))) ? ((((-29910 + 2147483647) << (13142754589656281265 - 13142754589656281265)))) : (min(4072922350, 13142754589656281256)))) ^ 1);
        arr_3 [i_0] = var_10;
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0 - 3]);
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_4] |= (max(((max(var_5, (arr_1 [i_3])))), var_10));
                        arr_16 [i_1] = ((10258 ? -23741 : 10));
                        var_16 = var_10;
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_4] = (max((!23759), 65533));
                    }
                }
            }
        }
        arr_18 [i_1] = (!var_3);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                {
                    arr_23 [i_1] [i_5] [i_1] = (arr_6 [i_1]);
                    var_17 = (((26 ^ 23781) ? var_9 : (23747 ^ -13562)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((arr_9 [0] [16]) - -13538)))));
        arr_27 [i_7] = var_4;
        arr_28 [i_7] = (!16777215);
        arr_29 [i_7] = -13555;
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            {
                var_19 = (max(var_19, (arr_30 [i_8] [7])));
                arr_36 [i_8] = (min((((!(((-1 ? var_14 : var_13)))))), var_14));
            }
        }
    }
    var_20 = (max((((min(var_6, 222)))), (var_5 | var_14)));
    #pragma endscop
}
