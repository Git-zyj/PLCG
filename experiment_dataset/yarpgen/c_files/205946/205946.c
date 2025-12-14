/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(251, 8616)));
    var_11 *= (max(41827, (max((~2147483647), (max(var_9, var_5))))));
    var_12 = ((((min(((var_8 ? var_8 : 13162654426377810501)), (!4294967295)))) ? var_7 : var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_0;

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = (((((((min((-2147483647 - 1), var_0))) ? (((245 ? 25 : 255))) : (min(1, 5206317070327947924))))) && 1));
            arr_8 [i_0] = (min(((((max(56913, 2367990965332356280))) ? (((max(var_8, 8616)))) : ((var_2 ? var_0 : -4447635756286858646)))), (!-var_9)));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_13 = (max((((26365 || 16078753108377195336) ? 74 : 2367990965332356286)), 1868862202));
                            arr_20 [i_3] [i_3] [i_3] [i_3] [2] = (max(1, (min(27967, 26365))));
                            var_14 += ((~(!5126203477421861978)));
                            var_15 = (max((max(((max(var_0, 250))), 3416504520925852356)), ((min((max(56920, 126)), 8592)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_16 ^= (!-7872249924427217874);
                            arr_30 [i_0] [i_5] [i_6] [i_7] [5] [i_8] = 110;
                        }
                    }
                }
            }
            var_17 = (max(var_17, ((((((939524096 ? 126 : 56920))) ? ((var_3 ? 3569871704 : var_8)) : var_7)))));
        }
        var_18 = (-(max(56360, 6878905715498672721)));
        arr_31 [i_0] &= (((((9176 ? 5126203477421861978 : 5126203477421861976)) != ((min(4294967274, 36647))))));
        arr_32 [i_0] [i_0] = (max((((~(-9223372036854775807 - 1)))), ((((max(0, 250))) ? (max(1, 9223372036854775807)) : (((992 >> (8613 - 8602))))))));
    }
    #pragma endscop
}
