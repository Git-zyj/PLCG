/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((2652496980 & (((min(var_10, var_1))))))) == -0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((min((((0 ? -17474 : (arr_7 [i_0] [i_0] [i_0] [i_0])))), (max((-2147483647 - 1), 0))))))));
                    arr_8 [i_0 - 1] [i_1] [i_0 - 1] = ((((-2147483629 / (arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))) * (763045513 * 0)));
                    var_16 = (max(var_16, ((((min((((2147483647 != (arr_3 [i_0] [i_0])))), (arr_3 [i_0 - 1] [i_1]))) / ((var_6 ? var_3 : (arr_3 [i_1] [i_2]))))))));
                    var_17 = ((((arr_2 [i_0 - 1] [i_1]) & (4 ^ 17479))));
                }
            }
        }
    }
    #pragma endscop
}
