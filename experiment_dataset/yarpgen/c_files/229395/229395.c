/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!255);
    var_14 &= (min((min(((var_1 ? -766091537 : 0)), (~var_3))), ((~(~var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((!((!((766091536 || (arr_4 [i_1])))))));
                var_16 = -646949843;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = ((((!((((arr_9 [i_0] [9] [i_0]) ? 55 : (arr_9 [i_3 - 2] [i_2] [i_1 - 1])))))) ? 9926574115612722906 : ((((((arr_10 [i_1] [i_2]) || (arr_6 [i_0] [i_1]))) ? var_1 : (((766091535 ? var_9 : (arr_5 [i_0] [i_1] [i_2] [0])))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = -31193;
                        }
                    }
                }
                arr_12 [i_1] = (max((((((min(var_12, (arr_8 [i_0] [i_1 + 1] [10])))) - (((arr_1 [i_0] [i_0]) ? 28987 : (arr_7 [i_0])))))), ((var_8 ? -1 : (((var_8 ? 2047 : (arr_5 [i_0] [i_1] [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
