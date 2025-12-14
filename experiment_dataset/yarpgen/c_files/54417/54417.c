/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_9 ? var_0 : var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = var_2;
                arr_7 [i_0] [i_1] = (((arr_6 [i_0] [i_1 - 2] [i_0]) > 243));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_22 = (14041228972591934729 == 239);
                                arr_17 [i_1] [i_3] [i_2 + 2] [i_3] [0] = (((((min(3695007399, 1765525939)))) ? ((((arr_10 [i_1] [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3]) << (((((arr_2 [i_3] [i_4]) ? (arr_13 [1] [1] [i_2] [i_4]) : var_7)) - 4294939666))))) : ((((max(var_10, var_14))) ? ((var_5 ? var_16 : (arr_5 [i_0] [9] [i_0]))) : (arr_14 [i_2] [i_2 + 1] [2] [i_2 + 1] [3] [i_2 + 2])))));
                                arr_18 [14] [14] [i_2] [i_3] [i_4] = (min((arr_9 [i_4] [i_1] [i_0]), ((((max((arr_4 [i_0] [i_1]), (arr_1 [3] [i_2])))) ? -var_19 : var_8))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_3] = ((var_5 | ((-679970625 ? 243 : ((1 ? 1765525950 : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_23 = (max(var_23, (((((((1 >> 1) + -13))) ? 18446744073709551615 : 1162835878889618735)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
