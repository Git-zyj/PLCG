/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -89;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min(((5081272288774062235 / ((min(2147483647, 2147483647))))), (((min(43616, var_1))))));
                arr_6 [i_1] = (((((arr_0 [i_0 + 2]) | (arr_3 [i_0 + 1]))) <= ((~((min(13370, 21922)))))));
                arr_7 [i_0] [i_1] = var_4;
            }
        }
    }
    var_11 = var_6;
    var_12 = var_5;
    var_13 += (((((var_4 & var_4) ? (max(50820, -1132745762)) : -43620))) ? var_6 : -var_0);
    #pragma endscop
}
