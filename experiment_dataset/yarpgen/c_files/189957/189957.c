/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((65535 ? 1 : 65535))) ? 5 : ((11 ? -120 : var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((((((arr_1 [i_0]) ^ var_8)) + 2147483647)) >> (((var_1 & 28796) - 46))));
                arr_7 [i_0] [i_0] = 250;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 &= (min((max((arr_4 [20] [i_2] [i_2]), ((65533 ? 4294967276 : 31)))), (max(0, 1))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 0;
                                var_17 = (max(var_17, (((((min(0, 198))) ? ((((arr_1 [i_2]) != (var_3 - 49510)))) : ((62 >> (91 / 127))))))));
                                arr_16 [i_3] [i_3] [i_3] [i_4] [i_3] = ((!(arr_2 [i_0] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 &= var_7;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_19 = (max(var_19, ((((((119 * -4108) ? -1 : (arr_20 [i_5] [i_6]))) > (18 == 36))))));
                var_20 = ((((min((arr_13 [8] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (var_3 >= var_0)))) <= 88));
                var_21 = (max((min((((3531199253 ? 1 : 463991174))), (min(var_12, 186)))), ((max(-32752, 0)))));
            }
        }
    }
    #pragma endscop
}
