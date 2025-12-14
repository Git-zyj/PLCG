/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] |= var_4;
                    var_15 = (min(var_15, var_6));
                    var_16 = (max(var_16, (((!((min((arr_3 [i_0]), (arr_9 [i_2 + 1])))))))));
                }
            }
        }
    }
    var_17 = (max((((!(1 >= -56)))), var_14));
    var_18 = var_3;

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_19 -= (439573056 ? (3176092711377671428 & 241) : var_8);
        arr_14 [i_3] [15] = (((min((arr_9 [i_3]), (arr_1 [i_3])))));
    }
    #pragma endscop
}
