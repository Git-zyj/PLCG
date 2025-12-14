/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_11 ? ((((max(21, -2548))) + ((min(var_17, var_3))))) : var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 &= 2152142280862451648;
                    arr_7 [i_0] = ((!(((var_15 ? var_0 : var_10)))));
                    arr_8 [i_2] [i_1] [i_0] = ((!(!var_17)));
                }
            }
        }
    }
    var_20 |= var_8;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_21 = ((((((arr_13 [i_3] [i_4]) ? var_15 : var_17))) ? (((!(-9174828738741897430 + 9223372036854775807)))) : 8710));
                    var_22 = max((((((-(arr_3 [i_3] [i_4] [i_5])))) * 18446744073709551615)), (-9223372036854775807 - 1));
                    var_23 = (min(var_23, ((min((((-21521 >= (arr_9 [i_3] [i_3])))), (((arr_9 [i_5] [i_4]) | var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}
