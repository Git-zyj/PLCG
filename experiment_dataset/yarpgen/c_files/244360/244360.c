/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_1 ? ((255 ? ((max(var_3, 3457037604))) : var_4)) : var_0)))));
    var_15 = ((837929689 ? (!var_2) : 837929705));
    var_16 = ((((((8689973366340340744 != 26965) + var_7))) ? ((((8689973366340340727 / 79) || (-26966 >= var_5)))) : (((((var_8 ? var_5 : var_10)) != 13726)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((!((min(var_3, (arr_1 [i_1]))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((((((32251 ? 1286551469 : 3457037585)))) ? (arr_0 [i_1] [i_3]) : (min((arr_0 [4] [i_1]), 12147199635465491046))));
                        var_18 = ((+(min((~var_3), (max(0, 1286551469))))));
                        var_19 = (arr_9 [i_0] [i_1] [i_2] [11]);
                        arr_12 [i_0] [i_1] [i_2] = (max(((((arr_8 [i_2]) != (((arr_7 [i_1] [i_2] [4]) | (arr_7 [i_0] [13] [i_2])))))), ((-(arr_4 [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_20 = (1 * ((((((arr_1 [7]) > (arr_9 [i_0] [i_1] [i_2] [i_4])))) * (min(36227, (arr_10 [i_2] [i_2] [i_2]))))));
                        arr_15 [i_1] [i_2] = (min(0, 32232));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] = 3008415827;
                        var_21 += (((arr_13 [i_0]) * (min(1286551480, (var_7 / 63050394783186944)))));
                    }
                    var_22 = ((((max(610854937, 63))) ? 14216372854676412268 : (arr_8 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
