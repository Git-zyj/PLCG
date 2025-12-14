/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_17 = (((56 / 96) << ((((((((arr_1 [i_0] [i_0]) ? var_12 : var_7))) ? (arr_0 [i_0 + 2]) : (((219 ? var_2 : 37))))) - 2956376428))));
        var_18 = (min(var_18, (((-((((!(arr_0 [i_0 + 1]))))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = ((-(((((25 ? (arr_5 [i_2] [11]) : (arr_3 [i_3])))) ? (((((arr_6 [i_3] [i_2]) && var_14)))) : (var_12 & var_15)))));
                    var_20 = ((-(~0)));
                    var_21 = ((((((((arr_2 [i_1]) - 8263897830081765678))) ? (1 - -1164260285731394276) : ((var_13 - (arr_6 [i_1] [10]))))) * (!-254604313)));
                    arr_8 [i_1] [i_2] [i_3] [i_3] = ((((((((var_7 ? 0 : (arr_4 [i_3] [i_2] [i_1])))) ^ ((var_10 ? var_7 : -8263897830081765693))))) | ((+(((arr_7 [i_1] [i_1] [i_1]) ? 49597212755541711 : -8263897830081765679))))));
                }
            }
        }
    }
    var_22 = ((((((-254604323 / var_13) ? (((4720446800123075958 ? var_9 : var_11))) : (var_8 - var_8)))) ? (((!((((var_8 + 9223372036854775807) >> (213 - 204))))))) : ((-((6454 ? 42 : var_1))))));
    var_23 += ((((((((254604306 ? 1 : 149))) ? ((-8263897830081765678 ? var_8 : var_0)) : 93))) ? (((-var_1 + 2147483647) << (!249))) : (((((((-127 - 1) ? 65011712 : -8263897830081765678))) || 16)))));
    #pragma endscop
}
