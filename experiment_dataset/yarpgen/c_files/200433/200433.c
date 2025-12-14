/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 += (!((max((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = (min(10, 27));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_18 ^= (arr_6 [i_2] [i_2] [i_3]);
                    var_19 += ((((((min(-1296, -23130)))) ^ 0)));
                }
            }
        }
        arr_11 [i_1] = (arr_5 [i_1] [i_1]);
    }
    var_20 = (((23130 ? (var_8 & 7528665283466760864) : var_1)));
    var_21 = -183905876758031942;
    var_22 |= (min((((70 ? var_13 : var_5))), (((var_13 ? 2377081132 : var_10)))));
    #pragma endscop
}
