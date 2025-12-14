/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_1] [i_1] [i_1]);
                var_21 = -26;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_22 = (max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 - 2] [i_0 - 2])));
                    var_23 = (--33);
                    var_24 *= (min((((-5928 >= ((1 ? var_10 : 2993132834))))), (~39)));
                    var_25 ^= ((((((-37 + 2147483647) << (var_15 - 1137))) * ((-5928 * (arr_3 [1] [i_1 + 1] [i_1 - 1]))))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_26 = (min((((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_1 + 3]) : (arr_1 [i_0 - 1]))), ((1 ? 1 : -3))));
                    var_27 = (min(var_27, (~58)));
                    arr_10 [i_3] [i_1] [i_1] [i_0 - 3] = 2475738727;
                    arr_11 [i_0 - 2] [2] [i_1] = 3870561069;
                }
                var_28 = (((-59 ^ -29109) ? ((-26 ^ (arr_4 [i_0 - 3]))) : (((arr_4 [i_1 + 3]) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0])))));
            }
        }
    }
    var_29 = (min(var_29, (~var_12)));
    #pragma endscop
}
