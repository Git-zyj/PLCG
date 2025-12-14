/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = ((-(((((var_6 <= (arr_3 [1] [i_1] [i_2])))) >> (((arr_3 [i_0] [i_1] [i_2]) - 10550343065897226600))))));
                    var_19 = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 = ((-4768 & (((((((arr_3 [14] [i_3] [i_3]) ? (arr_2 [i_3] [i_3]) : 12))) / 24127)))));
        var_21 = ((var_12 ? (((((max(2147483647, var_8))) ? 2147483647 : (!19359)))) : (arr_3 [i_3] [i_3] [i_3])));
        var_22 = -748622705;
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        arr_11 [i_4] [i_4 - 1] = (max(var_10, (arr_8 [i_4] [i_4 - 1])));
        arr_12 [1] = var_3;
        var_23 = var_3;
        var_24 *= (min((-32767 - 1), ((((arr_0 [i_4] [i_4]) < -370510961)))));
    }
    #pragma endscop
}
