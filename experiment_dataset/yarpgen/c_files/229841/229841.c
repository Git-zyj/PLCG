/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 ^= ((((!(arr_5 [i_0 - 1] [i_0 - 1]))) ? (((((2147483646 ? 18446744073709551615 : (arr_0 [i_0])))) ? 1 : (!27456))) : (((~42434) ^ 65535))));
                var_18 += ((((((((arr_4 [7]) % 3389873792530827174)) << (-10556 <= 42430)))) ? (0 > 2924977907) : (arr_2 [i_0])));
                arr_6 [i_0] [i_0] = (((!16896869804269057219) ? 1779103734 : 23097));
            }
        }
    }
    var_19 = (--3);
    #pragma endscop
}
