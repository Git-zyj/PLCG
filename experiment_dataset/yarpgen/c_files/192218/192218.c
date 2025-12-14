/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= min((max(((4 ? var_7 : var_7)), ((max(0, 3755951363))))), ((min((~31), (32767 & -974176793)))));
    var_15 = (((min((max(1, var_7)), var_1)) <= var_1));
    var_16 = (-539015933 == var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (((var_11 | (arr_4 [i_0] [i_0]))));
                var_18 *= ((((max(3755951362, (arr_3 [i_1] [10] [i_0])))) == 131071));
            }
        }
    }
    #pragma endscop
}
