/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [8] [i_1] [i_1] [i_1] |= (((((var_7 ? (arr_1 [i_0 - 1] [i_1 - 3]) : (arr_1 [i_0 - 1] [i_1 - 3])))) ? (((9151614437509681876 ? 9151614437509681867 : 9151614437509681882))) : (!-var_10)));
                    var_15 = (min(((9151614437509681893 ? var_1 : (arr_1 [i_1 - 2] [i_1]))), (((var_12 ^ (arr_3 [i_1 - 2] [i_1] [i_2]))))));
                    var_16 = (min(var_16, ((+((((((arr_4 [i_1] [6]) ? var_2 : var_8)) == var_3)))))));
                }
            }
        }
    }
    var_17 = (((((min(var_5, var_14)) | ((var_6 ? var_3 : 9151614437509681881)))) << (((min(-9295129636199869729, var_1)) - 514124803023790938))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_18 *= (min((((arr_11 [i_3] [i_4] [i_4]) % var_9)), ((max((arr_12 [i_3] [i_4]), var_9)))));
                var_19 = (max((min(((((arr_12 [i_3] [i_4]) ? (arr_9 [i_4]) : var_0))), (9295129636199869755 + var_0))), (min(9151614437509681876, ((((arr_11 [i_3] [i_4] [i_3]) == var_4)))))));
            }
        }
    }
    #pragma endscop
}
