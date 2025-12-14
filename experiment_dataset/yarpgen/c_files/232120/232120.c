/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((var_4 == 18446744073709551610) % (((2143289344 * 1) ? 18446744073709551591 : 49))));
                arr_6 [i_1] [i_1] = 2147483647;
                var_22 = (((min(var_16, (arr_3 [i_0] [i_1]))) & (!var_5)));
                arr_7 [i_1] [i_1] = 16926921497695192937;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    arr_16 [4] [i_4] [4] [4] |= (((~18446744073709551592) ? (((((max(var_9, (arr_11 [i_2]))) > ((13 << (((((-2147483647 - 1) - -2147483598)) + 88)))))))) : (max(var_16, (arr_9 [i_2])))));
                    var_23 = ((var_3 % (arr_8 [i_2 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
