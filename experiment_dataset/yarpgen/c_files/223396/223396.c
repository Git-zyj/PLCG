/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(6559274153722277855, 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = var_2;
                arr_7 [i_0] [i_1] [i_0] = (((((!0) && ((!(arr_2 [i_0] [11]))))) ? (((((!-1836997606) <= ((2140382619 ? 4294967295 : 11347667550731115618)))))) : (~var_14)));
                arr_8 [i_0] = ((((min((var_17 <= 2135967594), (((arr_1 [i_0]) ? -3 : var_11))))) ? var_10 : (-25948 == 2135967594)));
            }
        }
    }
    #pragma endscop
}
