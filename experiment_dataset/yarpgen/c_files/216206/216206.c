/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((var_9 >> (((((var_11 ? var_0 : var_8))) ? (var_0 >= var_10) : (max(var_10, var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((var_10 != (var_2 * var_0)))));
                var_16 = (max(var_16, ((max(1, 48440)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((~(!var_8)))));
                            arr_12 [i_1] [i_2] = ((var_12 ? ((((var_12 ? var_7 : var_10)))) : ((((var_4 + var_11) || var_0)))));
                            var_18 = (max(((var_2 ? var_9 : var_5)), var_11));
                            var_19 = ((~(!var_8)));
                        }
                    }
                }
                var_20 = (min(var_20, (17095 / var_4)));
                var_21 = (((max(var_7, var_1)) != (((((max(1, var_13)) != 1))))));
            }
        }
    }
    var_22 = ((~(((((max(var_3, var_6))) != ((var_3 ? var_3 : var_6)))))));
    var_23 = (max(var_23, (((((((0 ? 17095 : 2147483647)) > ((var_8 ? var_8 : var_7)))) ? (((~(max(var_13, var_4))))) : (max(var_13, ((1 ? 17095 : 8526052630123491786)))))))));
    var_24 = (max(var_24, ((((2954506908 ? (max(342487414, 0)) : ((max(2026469955, -15))))) == ((1 ? (((1 ? 13027 : 0))) : 7434234718199356871))))));
    #pragma endscop
}
