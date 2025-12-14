/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_16 &= (((((+(((arr_7 [i_0] [i_0]) * var_7))))) ? var_9 : (max((var_7 * 0), ((var_7 ? var_6 : (arr_2 [i_0])))))));
                    var_17 = min((((arr_7 [i_0] [i_1]) ? (arr_7 [i_1] [i_2]) : (arr_7 [i_2] [i_1]))), var_2);
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_18 = var_13;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_5] [i_3] = (max((((((arr_14 [i_3] [i_3] [i_3]) || (arr_14 [i_3] [i_1] [i_1]))) ? (506930477 || 41) : 101)), (((((max((arr_7 [i_1] [i_0]), -101))) > (arr_8 [i_5 + 1] [i_5 + 2]))))));
                                var_19 = arr_5 [i_0] [i_1];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_24 [i_7] [i_6] [i_3] [i_3] [i_1] [i_0] = ((+(min((-101 == 101), (((arr_23 [i_0] [i_6 + 1] [i_6 + 1] [i_6] [i_7] [i_6 + 1] [i_6 + 1]) ? var_12 : (arr_1 [i_0])))))));
                                arr_25 [i_0] [i_3] [i_3] [i_0] = arr_18 [i_0] [i_6 - 3] [i_0] [i_6 - 1];
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_20 = (min(((min(-101, (arr_2 [i_1])))), ((((max((arr_0 [i_0]), var_6))) ? var_8 : (arr_27 [i_0] [i_9])))));
                        var_21 = (min(var_21, var_13));
                    }
                    var_22 &= (((((var_13 - (arr_0 [i_0])))) ? (((var_3 << (((arr_18 [i_8] [i_1] [i_0] [i_0]) - 5963689552235855524))))) : ((-(arr_0 [i_0])))));
                }
                var_23 = (max(var_23, ((((((((arr_1 [i_0]) + 9223372036854775807)) >> (((arr_1 [i_1]) + 8320368605353893303)))) + (((-101 ? -101 : -110))))))));
            }
        }
    }
    var_24 = 101;
    #pragma endscop
}
