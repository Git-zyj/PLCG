/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((23 ? (((((min(var_8, var_6))) ? 23 : -var_9))) : var_5));
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 ^= (max((4294967268 % 103), (((((arr_1 [i_1]) - 17839334886633217829)) + 65420))));
                    arr_7 [i_0 + 4] [i_0 + 4] [i_2] = -1;
                    var_13 -= ((607409187076333787 * (((((max(var_4, (arr_3 [i_0 - 1])))) ? (83 * 103) : (arr_5 [i_2] [i_2] [i_0 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
