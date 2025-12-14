/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 ^= ((((((-118 / 24473) / ((0 ? 97 : 158))))) == (min((min(var_11, (arr_5 [i_0] [i_0]))), 98))));
                arr_6 [i_0] [i_1] [i_0] = (((((max(var_2, (arr_0 [i_0]))))) == (((var_11 == (~17683218740063260277))))));
                var_15 = (max(var_15, (((((max((arr_2 [16]), 452574570)) - 0)) >> ((((((((arr_1 [i_0] [i_1]) ? (-9223372036854775807 - 1) : var_8))) ? (~14285448180073161492) : (arr_4 [i_1 + 2] [i_1 - 2]))) - 4161295893636390092))))));
            }
        }
    }
    var_16 *= ((var_5 ? ((((min(931564970, 255))) - (max(-1580861925272191138, -2294338995401036132)))) : ((-(-3193024821012690349 + var_9)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = (max((((((159 ? 3222839699261553554 : 0))) ? (arr_4 [i_2] [i_3]) : -6405892863411871721)), ((((((arr_0 [5]) & 9223372036854775807))) ? (min(3825009053920490741, var_1)) : (max(var_7, (arr_3 [i_2] [i_3 + 2] [i_3])))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] = (min((((3842392725 ? -3825009053920490742 : 33752))), ((-(((arr_21 [i_6] [i_6] [i_2] [i_6] [i_2]) - 1774312408993677337))))));
                                var_17 = (min(var_17, (((~((min((arr_17 [i_5 + 1] [i_6 + 2] [i_6] [i_6] [i_6] [i_6 + 3]), (arr_17 [i_5 + 2] [i_6 + 3] [i_6] [i_6] [i_6] [i_6 + 1])))))))));
                                arr_23 [i_2] [i_3] [3] [i_5] [i_6] [i_3 - 1] = -1;
                            }
                        }
                    }
                }
                var_18 += (min((max((arr_5 [i_3 - 1] [i_2]), (((arr_17 [i_2] [i_2] [i_2] [i_2] [15] [i_2]) + var_9)))), 158));
            }
        }
    }
    #pragma endscop
}
