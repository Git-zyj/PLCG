/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 *= (max(((~(max(0, var_0)))), ((((arr_6 [i_0 - 4] [i_0 - 4] [i_0 - 2] [i_2]) && 41561806885186500)))));
                    var_17 = (min((min((arr_7 [i_0 - 4] [i_1] [i_0 - 4]), (arr_4 [i_0] [i_2]))), (((arr_4 [i_0 + 1] [i_2]) ? (arr_4 [i_0 + 2] [i_0 - 3]) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                }
                for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((+(((arr_8 [i_0 - 4] [i_3 - 1] [i_3 - 2]) ? var_6 : 13130612211126972476))));
                        var_18 = (min((((((max((-127 - 1), (arr_2 [i_0 - 1])))) && ((((arr_11 [14] [i_3]) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : var_8)))))), (((-127 - 1) / (max(1, (arr_9 [i_4] [i_0] [i_0])))))));
                    }
                    arr_16 [i_0] [i_0] [i_0] |= ((((((((arr_0 [i_3 - 3]) + 9223372036854775807)) << (((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) - 4264272251))))) ? (~-var_14) : ((((((arr_8 [3] [i_0] [i_0]) ? 26247 : (arr_7 [i_0] [i_1] [i_3])))) ? -1645162411222718518 : (arr_2 [i_0 + 1])))));
                }
                for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_19 *= (((((((arr_9 [11] [i_1] [11]) / (arr_18 [i_0] [i_0 + 1] [i_0]))) == var_8)) ? 1 : (((arr_18 [i_0 - 4] [i_1] [i_5 - 1]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_1])))));
                    var_20 = (((var_14 ^ (arr_5 [i_0]))));
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = (min(var_21, (!623)));
                    var_22 -= ((-((~((var_12 ? var_5 : 628064573))))));
                }
            }
        }
    }
    var_23 = ((((((((3466547559593511216 ? var_0 : var_7))) ? -117 : -1645162411222718518))) ? -915162828 : var_5));
    #pragma endscop
}
