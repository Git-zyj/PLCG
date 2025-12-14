/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min((arr_2 [i_1]), ((((((arr_0 [i_0] [i_1]) << (var_18 - 8989758891452451126))) <= (!-1422329477))))));
                var_20 -= -105;
                var_21 = 22267;

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, var_11));
                    arr_8 [i_1] [i_2] = ((min(((127 ? var_2 : (arr_0 [i_0] [i_0]))), 0)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_1] [i_0] = (arr_1 [i_0 + 2]);
                    arr_14 [16] [i_3] [i_1] [16] &= ((2091598326 > (((~(arr_1 [i_3]))))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_1] [i_4] = (arr_12 [i_1]);
                    var_23 = (27413 ? 1649884352 : 221360448022476392);
                }
            }
        }
    }
    var_24 = ((min(var_13, 1601338021)));
    #pragma endscop
}
