/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((((min(161, var_7))) ? var_5 : (var_5 / var_5))) << (var_5 - 35)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = var_3;
                    var_12 = (max(var_12, (max((((((((arr_4 [i_0] [i_0]) ? var_4 : (arr_2 [14])))) ? ((101 >> (var_0 - 28))) : (arr_6 [6] [12])))), ((var_7 ? var_2 : (arr_3 [i_1 + 2])))))));
                    arr_10 [i_0] [i_0] = (((max((~33), 1456165354)) ^ (((var_1 == (arr_5 [i_0] [i_1] [i_2 - 3]))))));
                }
            }
        }
    }
    var_13 = (~2147483647);
    var_14 = var_6;
    #pragma endscop
}
