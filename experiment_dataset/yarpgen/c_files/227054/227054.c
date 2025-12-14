/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min((arr_3 [i_0]), (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_15 = (arr_6 [i_0] [i_0]);
                                var_16 = (((arr_6 [i_1 - 1] [1]) ? (arr_7 [i_3 - 1] [i_0] [i_1 - 1] [i_1]) : (arr_11 [i_1 + 1] [i_0] [i_3 - 1] [7] [i_3] [i_4] [i_4])));
                            }
                            arr_13 [i_3] [i_2] [i_0] [i_0] [15] [i_0] = -808463673;
                            var_17 = ((((((arr_8 [i_3] [i_1] [i_1] [i_0]) ? 16247061977872184407 : (arr_6 [i_3 - 2] [i_1 + 1]))) - 4496229161363551943)) % (((3305339431232101941 ? 25665 : (~66)))));
                            var_18 = (((((2059371802 ? 2147483647 : 1))) ? ((max((arr_10 [i_0] [2] [i_2] [1] [i_2] [i_3]), var_6))) : (14081933780740666241 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_3 ^ 9236092641660880477);
    var_20 = (min(var_9, ((((var_8 ? var_8 : 137514268)) * (max(2072839680, var_7))))));
    #pragma endscop
}
