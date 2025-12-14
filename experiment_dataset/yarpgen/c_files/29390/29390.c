/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((46836 ? 30172 : 35361)) << (35338 - 35334)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = ((1015509062 ? 8191 : 1015509075));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = ((8219 ? -8210 : 18700));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (((((arr_5 [8] [i_2]) >= (arr_7 [i_0] [i_0] [i_2] [i_2]))) ? var_4 : (arr_5 [i_0] [i_2])));
                }
            }
        }
        arr_10 [i_0] = ((~(arr_7 [i_0] [i_0] [i_0] [i_0])));
    }
    var_21 = var_13;
    #pragma endscop
}
