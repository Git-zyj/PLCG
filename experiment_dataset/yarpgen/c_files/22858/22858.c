/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = (((((var_5 % var_9) ? ((max(0, (arr_10 [i_0] [i_0] [i_0] [i_0])))) : ((var_5 ? var_7 : var_0))))) ? (((min((arr_9 [i_0] [10] [i_0]), 1441096681)) - (((21441 ? 12487 : -4))))) : ((((min((arr_1 [i_0]), (arr_0 [i_0])))) ? (15179 ^ var_7) : (arr_2 [i_0] [i_2]))));
                    arr_11 [i_0] [i_0] = ((((((arr_4 [i_2 + 1] [i_0] [i_2 + 1]) ? ((min(23315, var_9))) : 28920))) | (~-1774013610031511598)));
                    arr_12 [i_0] [i_0] = ((!(((-(arr_8 [i_0]))))));
                }
            }
        }
    }
    var_11 = (((var_6 ? 1883579791 : 1100739232)) > 113);
    var_12 = (max(var_12, (((+(((!-6239) ? 1 : var_1)))))));
    var_13 = (((-var_6 / ((var_3 ? var_7 : var_8)))) % ((var_6 ? (min(var_9, var_1)) : (((var_4 ? 16 : 10227))))));
    #pragma endscop
}
