/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(1, 1)))) ? ((~((698322304 ? var_4 : var_9)))) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [14] [i_0] [i_2] = (171 ^ 59557);
                                arr_15 [i_0] [i_0] [i_2 + 2] [i_2] [i_0] = 2147483647;
                                arr_16 [i_0 - 1] [i_0] [i_2] [i_0] [i_0 - 1] = ((((max(1336777003, (((arr_3 [i_4]) % var_3))))) ? (-9223372036854775807 - 1) : (max((arr_3 [9]), var_5))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] = (4611686018427387904 & 7674827522621049702);
                            }
                        }
                    }
                    arr_18 [i_2] [i_1] [i_2 + 2] = (((((-((-30630 ? 261671206469554077 : -1))))) ? (((((arr_6 [13] [i_0 - 1] [i_0 - 1]) & 2147483647)) >> (var_0 - 16251422529848310241))) : ((((((max((arr_4 [i_0] [i_0] [i_2 - 1]), 32752))) && (((var_10 ? 2664187865737760950 : 73)))))))));
                    var_18 += ((var_14 ? ((((max((arr_6 [19] [i_1] [i_1]), 0))))) : ((((arr_3 [i_2]) <= var_0)))));
                }
            }
        }
    }
    var_19 ^= ((((((var_0 && 247) ? var_2 : (123 >= var_8)))) ? (min(((max(65535, var_11))), var_12)) : (((((0 ? -18160 : 65)) - (93169205 && -4611686018427387897))))));
    #pragma endscop
}
