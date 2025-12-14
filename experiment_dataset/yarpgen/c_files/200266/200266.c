/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = ((!(((var_10 >> (var_11 - 15709690509225907524))))));
        var_13 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = (var_0 ? (arr_3 [i_1 + 1]) : 73);
        var_15 = ((116 ? (arr_4 [i_1 + 1] [i_1 - 1]) : 140));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_7 [11] = ((-8022372651823616409 ? 24622 : 255));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 *= (arr_2 [i_4]);
                        arr_16 [i_2] [i_4] [i_2] [i_2] = ((((((((var_9 ? var_3 : 123))) ? var_1 : var_5))) & ((-(var_11 + var_2)))));
                    }
                }
            }
        }
        var_17 -= var_10;
    }
    var_18 = (-9223372036854775807 - 1);
    #pragma endscop
}
