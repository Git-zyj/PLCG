/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_11 ? var_13 : var_8))) ? (var_10 & 3) : ((17213 ? var_7 : var_0)))));
    var_21 = var_5;
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_23 = ((16 << (374486841 - 374486840)));

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_24 -= 4294967283;
                    var_25 = ((((((((var_17 ? var_5 : (arr_5 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0]) : -374486841))) ? (arr_2 [i_0]) : ((+(((arr_3 [i_0] [i_1]) ? 374486840 : 4590843999282486366))))));
                }
                var_26 = (min((arr_4 [i_0 - 1] [i_0 + 1]), (((!(((var_10 >> (((arr_4 [3] [i_1]) + 4009446576399118281))))))))));
                var_27 = (max(var_27, ((max((((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1]) | (arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 1]))), var_5)))));
            }
        }
    }
    #pragma endscop
}
