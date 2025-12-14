/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_15 ? 778731867 : var_4))) ? (max(11, 1)) : var_6)) == var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!((((max(127, 14669701633402482827))) && (!var_10)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 ^= ((-1354415584363512983 > (~580780398)));
                    arr_11 [i_1] = (((arr_0 [i_0 - 2]) && (arr_0 [i_0 - 2])));
                }
                arr_12 [i_0 + 4] [i_1] [i_1] = (((((var_0 ? (((arr_8 [3] [i_0] [3] [i_0]) ? (arr_2 [i_1] [12]) : (arr_3 [15]))) : var_12))) ? (min(((var_6 >> (((arr_3 [i_0]) - 3474951780)))), (min(-114881951, 1779362116)))) : ((((((!(arr_0 [i_1])))) <= (((arr_10 [11] [i_1] [i_0]) ? var_6 : (arr_10 [i_1] [i_1] [i_1]))))))));
            }
        }
    }
    var_20 |= (min(var_3, ((((min(var_12, -9128593706079096370)) ^ (~1354415584363512983))))));
    #pragma endscop
}
