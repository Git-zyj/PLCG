/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((((min(var_4, 18446744073709551615)) | (1 || 1283724202))) >> (((max((min(var_8, var_6)), (((var_4 ? 25 : 1))))) - 118)))))));
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [4] [i_1] [i_2] [i_0] = ((((var_3 + (min(var_9, 3)))) * (max(3, 7903292564743788007))));
                    var_12 &= (max((((arr_1 [i_1] [6]) ? var_2 : (arr_1 [i_0] [i_2]))), (((~((9 & (arr_8 [i_0] [i_0] [i_2]))))))));
                    var_13 -= (1 ? 1 : 1);
                }
            }
        }
    }
    var_14 ^= (min((max(var_0, var_5)), var_6));
    #pragma endscop
}
