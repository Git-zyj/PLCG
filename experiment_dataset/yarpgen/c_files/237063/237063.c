/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((((((-127 - 1) ? ((0 ? 229 : 0)) : 0))) ^ (min((var_10 | var_6), (max(var_5, var_9))))));
        var_15 += (((0 * 6) ? (!var_4) : (((!(arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_16 = ((~(((2148436275 != var_8) ? var_12 : (min(0, 8519517975314292277))))));
            var_17 = (((~(arr_3 [i_0] [i_1]))) * (((-2935861659072752605 == (max(var_6, 6792928676968258390))))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_18 = (((~-7773515787792214191) | ((((arr_0 [i_0]) << (((arr_4 [i_0] [i_0]) + 30653)))))));
            var_19 = (max(((var_4 * ((max(var_12, (arr_5 [i_0] [i_2])))))), (arr_3 [i_0] [i_2])));
            var_20 *= (!var_6);
            var_21 = (max((((arr_1 [i_0]) ? (max(var_5, var_12)) : 68)), ((max(((((arr_5 [i_0] [i_2]) ? var_12 : var_2))), 5998687483066228618)))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_22 -= (!(((var_7 ^ (arr_5 [i_2] [i_3])))));
                var_23 = (max(((((max(var_10, var_12))) / (8184 + 32768))), ((((((arr_3 [i_3] [12]) > var_9)) || (((0 ? var_3 : var_3))))))));
                var_24 = (min(var_24, (!var_10)));
            }
        }
    }
    #pragma endscop
}
