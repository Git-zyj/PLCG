/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+((+(((var_12 + 2147483647) >> (var_11 - 34912)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((min(178, -5614764407751778933)) != (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 += var_13;
                                arr_11 [i_0] [i_4] [4] [i_0] [10] = (min(((var_14 ? var_6 : (arr_5 [i_2 + 1] [i_1] [i_3 - 2] [i_3]))), ((min(var_12, (arr_9 [i_3 - 3] [i_2 + 1] [i_2] [i_4 - 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
