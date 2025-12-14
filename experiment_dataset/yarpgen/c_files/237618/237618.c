/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_7;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = (5401 && 5404);
            var_17 &= var_7;
            arr_7 [i_0 + 1] [i_1] = (~-5401);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_0] [i_0] &= (((((max(5408, -5402))) ? 8229683688434501536 : (arr_5 [i_2] [i_2] [i_0]))) << (var_9 - 6235510223269911648));
            var_18 &= (var_13 + 5402);
            var_19 = (~1);
        }
        arr_11 [i_0] |= (~-5398);
    }
    #pragma endscop
}
