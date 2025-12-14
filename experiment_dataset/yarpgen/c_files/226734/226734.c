/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((-2147483647 - 1) < (max(-7654150009056033617, 7654150009056033617))))) >> (-7654150009056033594 + 7654150009056033619)));
    var_21 = (max(-4920822721799682999, (((max(1, -7654150009056033617)) - (-7654150009056033632 - 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_22 = (min(var_22, ((min(7654150009056033631, 4778535072130511633)))));
                var_23 = (max(var_23, ((((7654150009056033617 ^ 7654150009056033632) & (((min(28441, -13)))))))));
                var_24 = (-2147483647 - 1);
            }
        }
    }
    var_25 = -7654150009056033633;
    #pragma endscop
}
