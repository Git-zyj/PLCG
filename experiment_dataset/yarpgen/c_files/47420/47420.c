/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 &= (8 >> 0);
                var_12 -= 63;
            }
        }
    }
    var_13 = (!var_8);
    var_14 &= (~-3186123009671985648);

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        arr_8 [i_2] = (arr_6 [i_2]);
        arr_9 [i_2] = ((~(arr_1 [i_2] [i_2])));
    }
    #pragma endscop
}
