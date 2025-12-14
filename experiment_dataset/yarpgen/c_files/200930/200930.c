/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 += ((~(arr_5 [i_2] [i_2] [i_1] [i_0])));
                    var_16 += var_1;
                    var_17 = min(48, (--0));
                    arr_8 [i_0] [i_2] = 9223372036854775786;
                }
            }
        }
    }
    var_18 -= var_7;
    #pragma endscop
}
