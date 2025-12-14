/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_17 = (((1 && 29099) < var_8));
                    var_18 = (min(var_18, (((141 ? -1474492433 : 19)))));
                }
                arr_6 [i_0] = (((~0) & -19));
                arr_7 [i_0] [i_0] [i_1 - 2] = ((((var_9 ? -var_8 : (max((arr_4 [i_1] [i_1] [i_1] [i_0]), -360191356420338004)))) ^ ((var_11 - ((var_0 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : -5273111649099703120))))));
            }
        }
    }
    var_19 = var_5;
    var_20 = var_13;
    #pragma endscop
}
