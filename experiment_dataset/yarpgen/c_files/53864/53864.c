/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53864
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
                var_15 -= var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = 120;
                            var_16 = (-32761 ? 1 : 32760);
                            var_17 = (((var_13 ^ (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]))));
                        }
                    }
                }
                arr_11 [i_0] = ((!((((3 == -15492) ? ((-12221 ? -1 : 8)) : (arr_2 [i_0]))))));
            }
        }
    }
    var_18 = ((((min(3, 985871750))) ? var_6 : -15862));
    var_19 = ((var_10 ? (var_5 <= 32755) : (((var_3 ? 18446744073709551606 : var_10)))));
    var_20 = 1;
    #pragma endscop
}
