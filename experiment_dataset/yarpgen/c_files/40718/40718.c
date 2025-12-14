/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 = ((~(((arr_3 [i_0]) ? (1 & 256) : 1))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = ((((((-28714 + 2147483647) >> ((((64 ? 35 : -24109)) - 24))))) ? (((arr_2 [i_3]) ? (arr_7 [i_3]) : (0 % 549755813888))) : ((((max(var_9, 12347)))))));
                            arr_12 [7] [i_0] [i_0] [i_0] = (arr_8 [i_3] [i_0] [i_0]);
                            arr_13 [5] [10] [5] [i_0] [1] = (arr_11 [i_2] [i_2] [i_2] [i_2 - 4] [i_2] [i_2]);
                            var_20 &= ((((((((-252 / (arr_8 [9] [9] [9])))) ? (arr_7 [i_0]) : 1))) ? (25580 && -257) : (((9221580870924349674 < (arr_6 [i_3] [i_3]))))));
                        }
                    }
                }
                var_21 = 1;
                var_22 = (((((var_16 ? (arr_0 [i_0 + 1] [i_1]) : (((1 << (66 - 47))))))) ? 224 : (arr_10 [i_0])));
            }
        }
    }
    var_23 *= ((((((min(-58, var_14))) + 2147483647)) << (1022 - 1022)));
    var_24 = ((var_17 >> (var_0 - 826955812)));
    var_25 *= (((~-var_0) ? (((((var_10 ? var_0 : -1830818639))) ? ((1 ? 134217726 : var_3)) : 0)) : var_2));
    #pragma endscop
}
