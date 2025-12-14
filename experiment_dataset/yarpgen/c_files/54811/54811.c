/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-((max(var_12, 4129337640))));
    var_19 = 1920;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((((16226108745920927314 || var_9) & (arr_3 [i_1]))));
                                arr_15 [i_3] [i_1] [i_2] [i_3] [i_2] [i_4] = 96;
                                arr_16 [i_2] = var_17;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_21 = ((var_3 % ((((arr_14 [i_0] [i_0] [i_1] [i_2] [i_5]) || (arr_14 [i_5] [i_5] [i_2] [i_1] [i_0]))))));
                        var_22 = (((((~(max(var_12, -67108864))))) ? ((((max(233, var_12))) ? ((18 ? 64596 : var_7)) : (!var_12))) : -96));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_23 ^= var_17;
                                var_24 = ((((max(79, 95))) ? (max(1179886458, (arr_14 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))) : (max((arr_14 [i_7] [i_7 - 1] [i_7] [4] [i_7 - 1]), (arr_14 [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1])))));
                                var_25 = (max((((~(!var_17)))), (((~(arr_20 [i_0] [i_0] [i_2]))))));
                            }
                        }
                    }
                    var_26 = var_14;
                }
                var_27 = (arr_18 [i_0] [i_0] [i_0] [2] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
