/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (3819161696 & 1278);
    var_20 *= (var_7 != var_7);
    var_21 &= ((var_8 | (((!var_3) << (2578657650 - 2578657619)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 &= arr_3 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 13;i_4 += 1)
                            {
                                var_23 = ((((511 ? 494 : 3974511736)) >> (((~12) - 4294967278))));
                                var_24 = arr_12 [i_0] [i_4] [i_2] [i_4 + 2];
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [8] [i_3] [i_3] = (max(792046523, (!31)));
                                arr_21 [i_3] [i_2] [i_0] = ((((((arr_14 [i_0] [i_0]) + (arr_4 [i_1] [14] [14]))) | (26906 == 26211))));
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_25 = (min(var_25, (arr_6 [4])));
                                arr_24 [i_0] [i_0] [i_1] [11] [i_2] [i_3] [9] = max(3974511736, -494);
                                arr_25 [i_1] [i_2] = (((((-32767 - 1) | -27499))) % 4276174147);
                            }
                            arr_26 [2] [i_2] [i_2] [14] = (max((((min(32767, (arr_16 [i_0] [i_1] [i_1]))) >> ((((~(arr_17 [i_3] [i_2] [i_2] [13] [i_0] [i_0] [i_0]))) - 27517)))), ((((arr_2 [i_2]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                            var_26 = (((-32767 - 1) % (arr_12 [i_3] [i_2] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
