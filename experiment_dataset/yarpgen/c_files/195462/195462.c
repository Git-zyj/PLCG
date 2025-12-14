/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 -= ((var_4 > (var_8 || var_8)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 += ((((17364652015880806796 ? 281773468 : var_4)) / ((max(0, 1129399259)))));
                    var_18 = (arr_7 [i_0 + 3] [i_1] [i_0 + 3] [i_1]);
                    var_19 = (~1);
                    var_20 += ((!((max((var_11 & 9058343815197014770), (~var_11))))));
                }
            }
        }
    }
    var_21 += var_9;
    #pragma endscop
}
