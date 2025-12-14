/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = var_8;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 = (min(var_22, ((((((((arr_0 [i_0] [i_0]) & var_8)) * var_19)) != var_2)))));
        var_23 = (37176 != -1513021682);
        var_24 = ((min(var_0, 1)));
        var_25 = arr_2 [i_0] [i_0];
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_26 = var_11;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_27 = (min((max((var_4 & 1), (min(0, -3186)))), (~240)));
                        var_28 = (min(var_28, (((+((((((arr_5 [1]) ? 1 : var_9))) ? (max(-1513021682, var_3)) : ((var_8 ? 695380590 : 243)))))))));
                    }
                }
            }
        }
        var_29 = ((((var_1 || (arr_7 [i_1] [0] [i_1 - 2]))) || 4294967295));
        var_30 = ((((min((max(1, var_11)), (arr_13 [12] [12])))) ? (arr_1 [i_1 - 1]) : (!10018)));
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_31 = (max(var_31, var_6));
        var_32 = (min(((5638 ? var_12 : 8227)), 1));
        var_33 = (((2147483647 ? 6634 : -4036)));
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_34 = (var_6 - var_19);
            var_35 = (32748 ? 1202924705 : 0);
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_36 *= (255 + -32767);
                    var_37 = ((((arr_22 [i_8]) ^ 63)) / 695380585);
                }
            }
        }
    }
    #pragma endscop
}
