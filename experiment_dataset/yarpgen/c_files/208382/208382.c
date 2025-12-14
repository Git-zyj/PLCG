/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((((-31 || 10599128477075744608) || 862)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [4] = (~-31);
                var_20 = (((arr_2 [i_0] [i_1 + 1]) + 1));
                var_21 = (min(var_21, (((31 >= (((((arr_1 [i_1 + 2]) || var_7)))))))));
                var_22 &= (min((arr_1 [i_1 + 2]), var_1));
            }
        }
    }
    #pragma endscop
}
