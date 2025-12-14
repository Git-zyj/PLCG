/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (var_12 >= var_8);
    var_15 = 4138564945;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_0] [i_1] [i_1]) <= (16777215 <= 57257)));
                var_17 = (min(var_17, var_8));
                var_18 += ((16777215 ? -19 : 18446744073692774398));
                var_19 = ((-var_13 <= (arr_3 [i_0] [i_1 + 2] [i_1])));
            }
        }
    }
    #pragma endscop
}
