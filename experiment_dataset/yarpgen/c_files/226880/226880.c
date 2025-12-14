/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((+(((-2147483647 - 1) ? var_1 : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = (-32767 - 1);
                var_16 = (max(var_16, ((max(((-94 ? var_0 : 1)), (max(-483487406, (((-26082 + 2147483647) >> (14871 - 14851))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 = 1;
                    arr_16 [i_2] [i_3] [4] = var_14;
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
