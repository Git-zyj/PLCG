/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_5;
    var_16 = (var_14 ? var_0 : var_12);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [13] [i_0] = ((65206 == (arr_1 [i_0] [i_0])));
                var_17 = (max(var_17, ((((((((-12 ? 95 : -12))) ? -12 : (var_7 == 9150)))) ? ((~((9154 ? var_13 : 0)))) : (~var_3)))));
            }
        }
    }
    #pragma endscop
}
