/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (var_7 < var_5);
    var_11 = ((((max((~1073741824), var_1))) || (((((var_4 ? 16777215 : var_1)) % (var_4 & var_2))))));
    var_12 = (min((((((var_0 ? var_6 : var_6))) ? ((var_4 ? 0 : var_9)) : (max(-594512476111664784, 4622176959812117278)))), (((var_4 >> (var_2 - 49))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min((min(-16777216, 1099511627772)), (~4294967293)));
                    var_14 = (min(-628675860, (arr_3 [i_0 + 1])));
                    var_15 &= (arr_0 [4]);
                }
            }
        }
    }
    #pragma endscop
}
