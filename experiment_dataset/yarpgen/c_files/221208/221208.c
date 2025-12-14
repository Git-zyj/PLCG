/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (max(13905, 125));
        var_14 = (min(var_14, ((min((min(var_9, (arr_0 [i_0 - 1]))), (((!((max(1, (arr_1 [i_0]))))))))))));
        arr_3 [i_0] [i_0] = (+-4161757103587652618);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [6] [6] = (min(19, (min(141797263, 13905))));
        arr_8 [i_1] = min(13920, 1);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = (min(-var_5, (max(var_2, 1509944866))));
        var_15 *= (max((!9077332916947648739), var_12));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_15 [i_3] [i_2] [i_2] = (min((min(2213163529, var_8)), (!1519707286)));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_16 = (min(-var_7, (max((arr_24 [i_6 + 3] [10] [i_6] [i_4 + 1] [i_3]), (arr_24 [i_6 - 3] [i_6] [i_6] [i_4 + 1] [i_3])))));
                            arr_26 [4] [3] [i_4] [i_4] [i_4] = ((~(min((arr_6 [i_4 - 1]), var_2))));
                            arr_27 [i_2] [i_2] [6] [i_2] [i_2] [i_2] [3] = ((-(!-12661)));
                            arr_28 [i_2] [i_2] [i_4] [i_4] = ((~(~-28149)));
                        }
                    }
                }
            }
            var_17 = (!115);
            arr_29 [i_2] [i_3] = max(var_0, (max(0, (arr_12 [i_2] [i_3] [i_2]))));
        }
        var_18 ^= ((-(~-23461)));
    }
    var_19 = min((max((~15010933141844551685), ((max(1468300562, 2147483647))))), ((min((max(var_1, var_11)), (~var_1)))));
    #pragma endscop
}
