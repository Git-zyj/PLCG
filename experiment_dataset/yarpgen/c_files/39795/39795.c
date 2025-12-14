/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = var_0;
                    var_20 &= (min((max(((((arr_2 [7]) < 13756))), 7000754270415589165)), ((((((arr_0 [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_2] [i_2]))) + (((arr_8 [6] [i_1] [i_2]) << (((((arr_5 [i_0] [i_0 - 1]) + 90)) - 4)))))))));
                    var_21 = (arr_2 [i_0 - 2]);
                }
            }
        }
    }
    var_22 = (min(5, 1));
    #pragma endscop
}
