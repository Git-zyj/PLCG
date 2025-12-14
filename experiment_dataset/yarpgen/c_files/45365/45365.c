/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = var_9;
                    var_17 = (max(var_17, ((((((~((var_7 ? 12738247983855447175 : var_2))))) ? (!var_13) : (((!((max(5708496089854104432, 5708496089854104441)))))))))));
                    var_18 &= ((!(!1607026984754279103)));
                }
            }
        }
    }
    var_19 = -var_7;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 = (min(var_20, (((-(!var_15))))));
                    var_21 += var_0;
                    var_22 += (((((var_1 ? 0 : var_11))) ? var_1 : ((-((max(var_6, var_12)))))));
                    var_23 -= var_3;
                }
            }
        }
    }
    var_24 ^= var_8;
    #pragma endscop
}
