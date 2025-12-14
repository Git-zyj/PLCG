/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = (((var_11 >> var_8) > (((((13778877035882466471 < var_0) >= (!4667867037827085144)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = ((((((var_6 ? (arr_1 [i_0]) : (arr_3 [i_0]))) >> (((arr_0 [i_0] [i_1]) - 4270377002903006687)))) >> (((max((((74 << (15756612325651048516 - 15756612325651048492)))), (~13778877035882466483))) - 4667867037827085106))));
                var_17 = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_18 = (max(var_18, 3));
                                var_19 *= var_4;
                                arr_15 [18] [i_4] [i_2] = (!var_4);
                                var_20 = (var_8 | (max((196 > 65534), (arr_6 [i_2]))));
                            }
                            var_21 = var_8;
                            var_22 = (((max(var_11, (max(var_10, var_11)))) + ((~(arr_0 [i_0] [i_3])))));
                        }
                    }
                }
                var_23 = (min(var_23, ((max((((-2 + 2147483647) << ((((min(var_7, 65533))) - 32392)))), var_0)))));
            }
        }
    }
    #pragma endscop
}
