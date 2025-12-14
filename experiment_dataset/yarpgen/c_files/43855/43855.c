/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max(((min(var_6, ((var_10 ? var_1 : -5253409484496494544))))), (max((((var_6 ? var_6 : var_0))), -var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 *= (((((255 ? -248 : (arr_1 [i_1 - 2] [i_1])))) ? ((((99 || (((4167905773988843405 ? 127 : 31881))))))) : (max((arr_1 [i_1 - 1] [i_1 - 1]), ((243 ? (arr_3 [i_0] [i_1] [i_0]) : var_4))))));
                var_14 = ((((min(114, 240))) ? 21 : -var_8));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 -= var_5;
                            var_16 = ((((min((((arr_9 [i_0] [i_1] [i_2] [i_1] [i_3 - 2]) ? 15 : var_11)), ((((arr_5 [i_0] [i_1]) | (arr_1 [i_1] [i_1]))))))) || ((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_1 + 1] [i_3 + 2]))))));
                            arr_10 [i_0] [i_0] = (((1116681567 & -31885) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (~1)));
                            var_17 = 14710068941484902477;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, (((16 ? ((-3178285749 ? (min(var_4, (arr_17 [10]))) : (((min((arr_13 [i_4] [1]), -115)))))) : -26734)))));
                    var_19 = (min(var_19, (((((min((arr_15 [16] [16] [18]), (arr_11 [i_4 + 1] [22])))) ? (arr_15 [i_4] [i_4 + 2] [6]) : (((arr_11 [i_5] [8]) + (arr_15 [i_4 - 1] [i_5] [1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
