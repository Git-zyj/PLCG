/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((3859411868 * -28) ? var_2 : (((max(-6, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] = (max(((min(-1, 63174))), (((~(arr_8 [20] [i_1] [i_2]))))));
                    var_15 = ((var_13 ? 64033 : (min(var_5, (min((arr_4 [i_0]), var_4))))));
                    arr_10 [i_2] [i_2] = (max(((((!(arr_7 [5] [5] [i_2]))) ? 1 : ((min(var_10, (arr_3 [i_1] [i_0])))))), ((((var_4 == 127) || (arr_7 [i_0] [i_1] [13]))))));
                }
                var_16 *= (-1373321577 && 144115188075855868);
                var_17 = (-1113618951 / 49152);
                var_18 = (min(var_18, ((max((min(var_5, var_8)), 1)))));
            }
        }
    }
    #pragma endscop
}
