/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(99, var_8));
    var_14 = ((+((min((!5911519588331965727), (min(var_11, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((((min(111, (arr_10 [1] [i_0] [1] [i_1] [i_0])))) > 32757));
                                var_16 = (arr_0 [0]);
                                var_17 ^= (min(var_5, (((~44) ? (arr_4 [i_2]) : -7424472433420172866))));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, (arr_12 [i_1 + 1] [i_1 - 1] [i_0] [i_0] [i_0] [i_0])));
                var_19 = min(((((max(var_6, var_8))) ? (min(127, (arr_9 [i_0] [i_0] [i_0] [8] [8] [i_1 + 1]))) : 531399665)), 2394030496);
                var_20 = (arr_6 [i_0] [i_0]);
            }
        }
    }
    var_21 = ((var_6 ? 11022271640289378733 : 2987912389));
    #pragma endscop
}
