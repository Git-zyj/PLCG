/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_2, (max(var_11, var_12))))) ? ((((var_1 == var_3) <= (max(15304303430111494880, var_11))))) : var_4));
    var_15 = ((((var_3 ? var_4 : (min(var_5, var_4)))) > (~var_13)));
    var_16 = ((var_4 ? (((((15304303430111494880 ? var_1 : 33514))) ? (((var_7 ? var_5 : var_2))) : (min(618926731, var_9)))) : ((((((var_9 ? var_5 : var_13))) ? ((var_2 ? 78 : var_0)) : ((max(var_7, var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (!-9);
                    arr_9 [i_0] [i_2] [i_2] [2] = ((+(((arr_3 [i_1 - 1]) ? (!var_4) : ((var_6 ? var_12 : (arr_4 [0] [i_1] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
