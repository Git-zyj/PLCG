/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~8672342530835112773) ? 211764184956836602 : -8522928318928932605);
    var_14 = (~((-211764184956836602 & (var_9 & var_12))));
    var_15 = ((!((((211764184956836602 ? (-9223372036854775807 - 1) : 211764184956836602)) <= ((9223372036854775807 ? var_1 : var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = max(((-5053269878072069772 ? (arr_4 [i_0 + 4] [i_0 + 2] [i_0 + 2]) : var_9)), ((~(~var_4))));
                arr_6 [21] [16] [i_1] = (((arr_4 [i_1 + 3] [i_1] [i_1]) && ((max((arr_0 [i_1 + 3] [i_1 - 1]), -4303594930557087309)))));
                var_16 = min(5053269878072069772, 9223372036854775807);
                var_17 = (min(var_17, ((((arr_3 [i_0 - 1] [i_1]) && 1970416810917225994)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((~((-(arr_7 [14] [i_2 - 1] [i_1 - 3] [i_0 + 2])))))));
                            var_19 = ((((((arr_8 [i_0] [i_1] [1] [20]) & ((~(arr_8 [i_0] [i_0] [16] [i_0])))))) && (var_11 % -9223372036854775807)));
                            var_20 = 4502500115742720;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
