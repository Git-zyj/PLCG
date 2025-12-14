/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((((((((2073274539 ? (arr_1 [i_0] [i_0]) : 2633707677))) ? (max((arr_5 [17] [17] [i_2] [i_2 + 3]), var_0)) : ((3159731273 ? var_2 : var_4))))) ? (min(((4294967274 ? 2073274559 : 2221692757)), ((min(var_1, (arr_6 [i_0] [7] [7] [0])))))) : (((arr_4 [i_2 - 1] [i_2 - 1] [i_4]) ? (22 / 24) : (((231 ? (arr_11 [i_4] [18]) : var_15)))))));
                                var_17 = ((((max((7651740289853589984 | 21), ((((arr_11 [i_3] [i_4]) > (arr_4 [i_0] [i_1] [i_2 - 1]))))))) && ((min((min((arr_0 [i_3]), (arr_11 [i_0] [i_1]))), (((((arr_8 [8] [i_1] [8]) + 9223372036854775807)) >> (2563419372 - 2563419341))))))));
                            }
                        }
                    }
                }
                var_18 -= (((((min(5640409826141260236, 0)) | var_4)) <= (-6675558341416034170 / 2563419372)));
            }
        }
    }
    var_19 = (max(((((min(var_4, var_10))) ? (var_0 & var_8) : (max(var_14, -3745402928196355994)))), (min(0, 9223372036854775807))));
    #pragma endscop
}
