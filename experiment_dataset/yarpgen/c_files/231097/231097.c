/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= 4294967285;
    var_17 = max((max((((var_10 ? 11 : var_2))), var_5)), var_6);
    var_18 = ((2248906077 ? 17 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] = (((((4294967283 ? (!160) : var_7))) ? (max((arr_8 [i_3] [i_3] [i_1 - 2]), -9188201713303575976)) : (((((4294967281 ? var_5 : 52712)))))));
                            var_19 = (((arr_3 [i_3]) ? (((arr_8 [i_1] [i_2] [i_3]) ? var_14 : ((4194303 ? var_12 : var_12)))) : ((var_8 ? var_8 : 0))));
                        }
                    }
                }
                var_20 *= (min(((((arr_9 [i_1 + 1] [i_1 - 2]) ? (arr_9 [i_1 - 1] [i_1 - 2]) : (arr_9 [i_1 + 1] [i_1 - 2])))), (max((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (~var_15)))));
                var_21 = (min(var_21, (((!(arr_2 [i_0] [i_1 + 1]))))));
                var_22 ^= max(((max(((1 ? (-32767 - 1) : 1)), 12823))), (max((arr_1 [i_1 - 2] [i_1 - 2]), (max((arr_0 [i_0] [i_1 - 2]), (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    var_23 *= ((var_9 ? 0 : ((1 ? var_3 : ((11 ? -5089694478919432936 : 32767))))));
    #pragma endscop
}
