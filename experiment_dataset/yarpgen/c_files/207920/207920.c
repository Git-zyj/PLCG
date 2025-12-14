/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(0, ((((min(var_5, 18446744073709551615))) ? var_2 : (!15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (((var_9 ^ var_10) ? (((max(1, var_5)))) : (max(866715359, var_9))));
                    arr_8 [i_2] [10] = (((max(-1, 40)) >> (((((-2542956523139398832 ? -107 : 0))) ? (!3453917129099147715) : (min(-2613391750615803552, 218))))));
                }
            }
        }
    }
    #pragma endscop
}
