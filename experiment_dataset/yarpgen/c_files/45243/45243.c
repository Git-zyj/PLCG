/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (((((((max(4611686018427387903, (arr_2 [i_4])))) ? (((4611686018427387899 > (arr_10 [i_4] [i_3])))) : (arr_4 [6] [i_1])))) ? var_6 : ((((34 ? -298 : 18446744073709551612)) << (((arr_7 [i_0]) - 3358706171))))));
                                arr_15 [i_4] [i_4] [i_1] [i_2] [i_4] [i_0] = arr_14 [i_0] [i_3] [i_4] [6] [i_3];
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_17 = var_14;
                        var_18 = ((+(((arr_17 [i_1] [i_2]) ? ((-429670365299683847 ? 255 : -4611686018427387904)) : ((((-127 - 1) ? 98 : 20)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_5));
                                var_20 ^= (min((((var_0 > (arr_0 [i_6])))), 60));
                                var_21 = (min(var_21, ((((62 - -var_10) + ((var_4 ? (arr_10 [i_0] [i_2]) : var_3)))))));
                                var_22 = ((((var_1 ? var_0 : (arr_18 [i_6 + 4] [i_6 - 2] [i_6 - 1] [i_6 - 2]))) - ((min((max((arr_8 [i_7] [i_6] [i_2] [i_0]), 4294967295)), ((4611686018427387903 ? 67462578 : (arr_3 [i_6] [4]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_23 = var_10;
                                arr_30 [1] [i_1] [1] [i_2] [i_1] [0] [i_9] = 1;
                            }
                        }
                    }
                    var_24 ^= (~((((!var_9) > 2693062416))));
                }
                arr_31 [i_1] [i_1] [i_0] = (65529 ? (((((211 && (arr_8 [i_1] [i_1] [i_1] [i_1]))) || (((var_7 ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : 14)))))) : (((82006027 > ((var_13 ? var_2 : (arr_29 [i_0] [i_0] [i_0] [8] [2] [i_0] [i_1])))))));
                arr_32 [i_1] [i_0] = ((3177285342 > ((((var_0 > ((max(var_12, var_8)))))))));
                var_25 = (min((max((arr_17 [i_0] [i_1]), ((((arr_12 [i_0] [i_0] [8] [i_1] [i_1] [2]) ? (arr_10 [i_0] [i_1]) : var_4))))), (((-var_15 > ((var_4 ? 5 : (arr_6 [i_1] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_26 = 3456080111;
    var_27 = ((1117681943 ? 11524 : 10698));
    #pragma endscop
}
