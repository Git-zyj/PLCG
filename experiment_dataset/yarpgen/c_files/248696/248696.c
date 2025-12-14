/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_11 = (((arr_1 [i_2 - 1]) ? var_0 : (arr_1 [i_0])));
                    var_12 = (min(var_12, var_8));
                    var_13 = (min(var_13, (arr_4 [i_2 - 1])));
                }
                var_14 = (min(((~(((arr_5 [i_0] [8]) & (arr_6 [i_0] [i_0]))))), ((max((arr_0 [4]), var_9)))));
                var_15 = ((max(18446744073709551595, 11132)));
                arr_7 [i_0] [i_1] [8] |= 11132;
            }
        }
    }
    var_16 = var_4;
    var_17 = (-54403 - 81440210);
    #pragma endscop
}
