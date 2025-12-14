/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (21152 ^ 1593961725);
            var_21 |= (((arr_0 [i_0 + 1]) ? 12536131087780289385 : 1));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = (max(var_22, (!0)));
            var_23 = 16893132172385177071;
        }
        arr_8 [0] |= (-1 <= 12536131087780289385);
        arr_9 [i_0] = ((((min(21, 5910612985929262231))) && ((((5910612985929262233 ? -1 : 21173)) != ((469660756 ? 1 : 13))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_16 [i_3] = (min((min((arr_15 [i_3 - 2] [i_3] [i_3 - 2]), (((arr_15 [i_3] [i_3] [i_4]) ? (arr_15 [23] [i_3] [23]) : 686722453)))), ((((((var_4 ? 5910612985929262231 : 2147483647))) ? -8843 : ((~(arr_15 [i_4] [i_3] [i_3]))))))));
                var_24 = (min(var_24, ((((arr_13 [i_3] [i_4]) ? (-32767 - 1) : -var_16)))));
                var_25 = 29428;
            }
        }
    }
    var_26 = (min(var_10, 12536131087780289385));
    var_27 = ((((((var_5 + 1) >> (var_9 - 45080)))) ? ((((var_10 && var_14) || -32762))) : var_3));
    #pragma endscop
}
