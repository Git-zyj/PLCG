/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8361952127566705504;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_8 [i_1] = (((((~1) != (((arr_6 [i_1 + 1]) ? (arr_4 [i_0] [10]) : var_7)))) ? (arr_2 [i_0] [i_0]) : var_8));
                var_11 ^= (((arr_2 [i_0] [i_0]) ? 48024 : var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = ((((max(((~(arr_12 [i_0] [i_0]))), ((min(1, (arr_2 [7] [i_2]))))))) ? -var_6 : (((((1 ? 1 : 1))) ? (arr_2 [1] [1]) : ((-27045 ? var_2 : -12))))));
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_1] [11] |= (max(1, (min((-9 + -87), ((min(1, (arr_13 [i_0] [i_0] [i_2]))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_4] = (((var_9 ? ((var_6 ? 230 : var_8) : var_7))));
                var_13 ^= 1;
                var_14 = (max(var_14, ((((((((((arr_20 [i_4] [9]) * -6))) ? 1 : (max(57, -1))))) || ((min((!-6), (min(64057, var_1))))))))));
            }
        }
    }
    #pragma endscop
}
