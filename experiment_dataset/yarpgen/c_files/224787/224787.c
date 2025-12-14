/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 += ((+((min((arr_4 [i_1 + 1] [i_1] [16]), 127)))));
                    var_18 = (min(var_18, ((max(var_12, (arr_3 [i_0 - 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((min(9223372036854775807, (arr_3 [i_3] [i_3]))), (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])));
                                arr_13 [i_0] = (min((min((min(15430442445572648684, var_7)), ((max(-2366891840675756784, (arr_4 [i_0] [i_1] [i_0])))))), ((max((arr_2 [i_0] [i_0]), (max(1834807725616556346, var_5)))))));
                                arr_14 [i_0] [i_0] [i_3] [i_2] [i_0] [i_0] &= (min(((min(var_12, var_5))), (max(var_13, -9223372036854775802))));
                                var_19 = -9223372036854775802;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= var_6;
    var_21 ^= (max((min(((max(var_5, 416298001))), var_10)), ((min((min(var_15, 2546169286)), ((min(var_1, var_15))))))));
    #pragma endscop
}
