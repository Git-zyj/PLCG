/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = 95;
                var_14 = (max(var_14, var_1));
                arr_6 [i_1] [12] = 8626397300902331016;
            }
        }
    }
    var_15 = (max(var_15, var_4));
    var_16 = (~var_8);
    var_17 = (min(var_17, ((min((((min(63, 5305601654538497100)))), ((-2 ? 1893231534 : 202)))))));
    var_18 = ((((13141142419171054516 ? 72 : 13141142419171054510))));
    #pragma endscop
}
