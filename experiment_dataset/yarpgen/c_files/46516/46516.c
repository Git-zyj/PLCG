/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((min(-15, 10824)), ((max(((max(11, 244))), (min(5, 26517))))))))));
    var_13 = 26216;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (min(((max((-2147483647 - 1), 1))), (min(3383911292, ((min(1, 19019)))))));
                arr_6 [i_0] [i_0] = (min(1, (max(1, (min(150, 242))))));
            }
        }
    }
    var_15 = (max((min(((min(65532, 33107))), (max((-2147483647 - 1), 16)))), 3271500562));
    #pragma endscop
}
