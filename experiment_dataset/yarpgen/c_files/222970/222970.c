/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] &= (max((((((min((arr_2 [i_0] [i_1] [i_0]), (arr_10 [i_0] [i_1 - 2] [i_2] [i_3]))))) & var_3)), 4294967295));
                            var_11 = -64;
                        }
                    }
                }
                var_12 = ((((min((((arr_3 [i_0] [i_0]) % 113)), ((max((arr_4 [i_0]), (arr_10 [i_0] [i_0] [i_0] [3]))))))) ? var_6 : (var_2 & var_0)));
                var_13 = ((var_5 >= (((var_3 != (-11 >= 170))))));
            }
        }
    }
    var_14 = var_6;
    var_15 = var_5;
    #pragma endscop
}
