/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max((((var_7 ? ((min(var_4, var_4))) : var_5))), (~3942952803)));
    var_16 = (((((352014500 ? 32536 : 352014463))) ? (((!var_5) ? var_4 : (max(var_11, var_9)))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_17 = (((min(-40, 20)) / 922064806));
                    var_18 -= (+((((((arr_7 [i_2] [i_2] [i_0] [i_0]) ? 14710022566911268698 : var_7))) ? ((var_8 % (arr_5 [i_2] [i_0] [i_0] [i_0]))) : var_8)));
                    var_19 = var_11;
                    var_20 = (((((arr_5 [i_2 - 1] [i_2 + 2] [9] [i_2 + 3]) ^ (arr_5 [i_2 - 1] [i_2 + 2] [i_2] [i_2]))) >> (-1278602355 + 1278602385)));
                }
                var_21 = (max((((arr_4 [i_0] [i_1] [i_1]) * (arr_4 [i_0] [i_0] [i_1]))), (((((33 << (16206 - 16189)))) ? 0 : -40))));
                var_22 &= ((((((((!(arr_0 [9])))) * (arr_0 [i_0])))) / (min((arr_4 [i_0] [15] [i_0]), (~var_3)))));
                var_23 = (min(var_23, (((-25 ? (arr_6 [i_0]) : 128)))));
                var_24 = (max(var_24, ((((min((arr_0 [i_1]), (arr_0 [0]))) ? (((var_3 ? (arr_1 [i_1]) : (arr_1 [i_1])))) : (min(var_1, var_11)))))));
            }
        }
    }
    var_25 = (((((var_5 % ((27633 ? 65514 : var_1))))) ? var_2 : var_7));
    #pragma endscop
}
