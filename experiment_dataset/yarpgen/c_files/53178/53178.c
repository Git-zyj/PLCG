/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (!2831617200);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            var_11 = 2147483632;
                            arr_15 [i_0] [i_4] [i_2] [i_3] [i_4] [i_4] [i_4 + 1] = (8387584 ? -1 : (4286579712 || 37));
                            var_12 -= 8387584;
                        }
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = (((3705 ? var_5 : (arr_1 [i_1] [i_1]))));
                        var_13 -= 306765700;
                    }
                }
            }
        }
    }
    var_14 = 8436;
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_16 = ((((max(12288, 216358512))) ? (((-8387591 - (arr_14 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) : ((+(min((arr_19 [i_6]), (arr_1 [i_5] [2])))))));
                var_17 = (max(var_17, ((((((((0 ? 1067376656 : -3691)) | (((1 < (arr_18 [i_5]))))))) ? 443332122 : (((((~(arr_18 [16])))) ? (arr_6 [i_5] [i_5] [i_5]) : (((arr_9 [i_5]) ? (arr_8 [i_6] [i_5] [i_5]) : 1670)))))))));
            }
        }
    }
    #pragma endscop
}
