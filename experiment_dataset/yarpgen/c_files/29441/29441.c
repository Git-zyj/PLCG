/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_1] [i_2] [i_3] = (((((min(9223372036854775807, (arr_0 [12] [i_3 + 4]))) + (arr_0 [i_3 + 1] [i_3 - 1])))) ? ((28 ? ((4655386808055596591 ? 9223372036854775807 : 1)) : 25)) : var_2);
                            var_18 |= -3772063953;
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0 - 2] = var_17;
                arr_13 [i_1] [i_1] [i_1] = -20752;
                var_19 = (((((-(arr_10 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))) == ((~(arr_1 [i_0 + 1] [i_0 - 2])))));
            }
        }
    }
    var_20 = (max(var_20, (((((((3772063960 == 1) ? -var_11 : var_0))) ? var_2 : (((~(var_11 >= var_6)))))))));
    #pragma endscop
}
