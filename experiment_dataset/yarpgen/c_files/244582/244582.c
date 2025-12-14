/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (4768851220911266982 != 1);
                    var_21 = (max(((-(min((arr_4 [i_0] [i_0] [i_2]), (arr_0 [i_0] [i_2]))))), (max(1, (min(21, (arr_5 [i_0] [i_1] [1])))))));
                    var_22 = (min(var_22, ((((((~(arr_5 [i_2 + 1] [i_0 + 1] [i_0])))) ? (min((((arr_5 [i_0] [i_0] [i_0]) | 549487378432)), ((max(var_10, -18630957))))) : ((((!((min(1, (arr_2 [i_2])))))))))))));
                    var_23 = (((((arr_5 [i_0] [i_1] [i_2]) * var_14)) / (arr_1 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
