/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = min((max(546284550, 21972)), (((arr_4 [i_0]) ? (arr_4 [i_1]) : (arr_4 [i_0]))));
                arr_6 [i_1] [i_1] = (max((max((((arr_1 [i_1]) ? -4 : var_3)), (((!(arr_4 [i_0])))))), (max((max(var_12, var_15)), var_3))));
                var_18 = ((-4 + 2147483647) >> (65535 - 65523));
                var_19 &= ((!((var_8 >= (((-(arr_2 [i_0]))))))));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
