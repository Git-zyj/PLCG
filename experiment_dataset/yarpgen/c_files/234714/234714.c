/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (-4311 | 6215271750893043781);
                    var_18 = ((13 ? var_5 : 11759736781429940258));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 -= max(18270, (arr_9 [18] [18] [i_2] [i_1] [i_0]));
                                var_20 = (max(var_20, var_9));
                            }
                        }
                    }
                    var_21 = (max(var_21, ((max((max(4961820475963461956, -32342)), ((((~1) ? -2762416323 : -5626880521355930983))))))));
                }
            }
        }
    }
    var_22 -= 192661920442910688;
    var_23 = (min((((0 ? -21208 : 18270))), (max(2, var_6))));
    #pragma endscop
}
