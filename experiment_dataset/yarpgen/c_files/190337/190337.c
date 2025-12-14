/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_8 [i_0] = (arr_0 [i_0]);
                var_15 |= ((((((~(-127 - 1)))) * 0)));
                arr_9 [i_0] = var_11;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_4] [i_4] = (((var_2 % var_5) <= 9223372036854775807));
                    arr_20 [i_3] [i_4] = (((min(4611686018427387903, 5571307657654846243)) * 30091));
                    arr_21 [i_2] [i_4] = (0 <= 134217664);
                }
            }
        }
    }
    #pragma endscop
}
