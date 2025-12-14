/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(!-1073741824)));
    var_16 = ((-(min(63946, 18763))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = ((!(!var_3)));
                            var_18 = var_11;
                        }
                    }
                }
                var_19 = (max(var_19, (((!((!(arr_1 [i_1 - 2]))))))));
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
