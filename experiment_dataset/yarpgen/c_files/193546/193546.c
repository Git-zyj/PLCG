/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(var_4, (1 + var_2))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = var_11;
                var_21 = (max(var_21, (((~((max((arr_2 [i_0 - 2] [i_0 + 4]), (arr_2 [i_0 - 2] [i_0 + 2])))))))));
                arr_5 [i_0] [i_0] = ((!(3462659003 * var_3)));
                var_22 &= (((var_4 ? (arr_2 [i_0 + 2] [i_0 + 2]) : (arr_2 [i_0 - 2] [i_0 + 2]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_23 &= (max(((((((var_6 ? var_14 : (arr_9 [i_2])))) && (((12779540742381031962 << (((arr_1 [i_3]) - 3940106088)))))))), ((((min(1, 1))) ? ((((arr_9 [i_2]) % (arr_9 [i_2 + 1])))) : 12779540742381031990))));
                    var_24 = (((15244 ? 59947 : ((((arr_2 [i_4] [i_4]) > (arr_9 [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
