/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((((((var_9 ? var_3 : var_5))) ? var_9 : var_0))) ? (((((2328857615 ? var_2 : var_2))) ? ((1 ? 1 : 885224305)) : ((var_6 ? var_4 : 885224296)))) : (((((1 ? -885224298 : 1))) ? var_6 : ((var_8 ? var_6 : -885224306)))))))));
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [10] [10] [i_2] = ((((((((var_9 ? var_5 : (arr_5 [i_0] [i_0] [i_2])))) ? 3300869688 : ((-1276513970 ? var_2 : -83353529))))) ? (((((-885224302 ? var_9 : var_4))) ? ((((arr_3 [i_0] [i_2]) ? 885224285 : 2976667274))) : ((260046848 ? (arr_4 [i_0]) : var_5)))) : (((-1 ? var_8 : var_6)))));
                    var_12 = (((((var_7 ? var_2 : ((1 ? 1 : 4883544776744752193))))) ? (((arr_5 [i_2 + 3] [i_2 + 3] [i_2 + 3]) ? var_9 : (((arr_1 [i_1]) ? (arr_1 [i_0]) : 83)))) : ((((arr_5 [i_2 - 3] [i_2] [i_2 + 2]) ? var_9 : ((28661 ? 18 : var_8)))))));
                    var_13 = (((((var_3 ? 4294967289 : -470394583))) ? ((4920512977251763192 ? var_1 : (arr_2 [i_0] [i_1] [i_2 - 2]))) : (((64 ? 1318300039 : 32765)))));
                    var_14 -= ((((((arr_6 [i_0] [i_0]) ? var_4 : -775357303))) ? (((var_3 ? (arr_6 [i_0] [i_1]) : var_7))) : ((var_6 ? -885224296 : 3918150849))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (((((((((arr_2 [i_0] [i_0] [i_0]) ? 32767 : (arr_1 [i_0])))) ? (((arr_2 [0] [0] [i_0]) ? var_1 : 1189984739)) : (((1276513976 ? -885224287 : 1)))))) ? ((var_8 ? (arr_6 [i_0] [i_0]) : 1)) : ((-3199 ? ((1 ? var_6 : var_7)) : (((arr_6 [i_0] [i_0]) ? var_6 : 1739831361))))));
        var_15 ^= ((12 ? 3086294148 : 39194));
        var_16 = ((((((arr_3 [i_0] [i_0]) ? 22 : (arr_2 [i_0] [i_0] [i_0])))) ? (((arr_2 [i_0] [i_0] [i_0]) ? 2976667272 : (arr_2 [i_0] [i_0] [i_0]))) : ((-32765 ? (arr_2 [i_0] [i_0] [i_0]) : -10))));
    }
    #pragma endscop
}
