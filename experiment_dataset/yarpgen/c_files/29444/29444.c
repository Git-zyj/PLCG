/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_4;
        arr_3 [2] |= 1;
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_8 [18] &= ((((18446744073709551615 ? var_6 : ((var_5 ? -1 : var_5)))) / var_9));
            var_11 = min(((((arr_5 [i_2 - 1]) >= (arr_4 [i_1])))), (((arr_4 [i_1]) ? 12356 : -14479)));
            arr_9 [i_1] = 742026290;
            var_12 = (arr_6 [i_2 - 1]);
        }
        arr_10 [i_1] = min(var_0, (1893956309 / 742026290));
    }
    #pragma endscop
}
