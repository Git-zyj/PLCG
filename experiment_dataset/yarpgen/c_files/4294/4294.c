/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_2 << (806056796 - 806056778)))) ? -var_16 : ((127 ? 8389357039644846815 : var_12))))) ? var_2 : ((((806056796 | var_3) << ((((var_15 ? var_7 : var_0)) - 7020159376396467486)))))));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [8])));
        var_19 = ((((max(-var_5, (arr_1 [i_0])))) ? ((min((arr_1 [i_0]), -122))) : (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_20 = var_0;
        var_21 = (max(-20902, 6790949721834227911));
        var_22 ^= 5749906007016157683;
        var_23 = (max(var_23, ((max((((((((arr_3 [i_1]) ^ (arr_3 [i_1 + 1])))) ? (27654 | 1) : 2007755647))), (max((arr_4 [i_1]), var_8)))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_12 [6] [i_2 - 2] [i_2] = (max((max((1474883316 | 65517), ((((arr_6 [i_3]) ? var_1 : var_16))))), (((24576 >> (-17277 + 17283))))));
                var_24 = (((arr_8 [i_2] [i_3] [i_3]) + ((((!((((-107 + 2147483647) << (((var_16 + 14) - 1)))))))))));
                var_25 = (max(var_25, (((((min((min(var_9, var_5)), (arr_4 [i_2])))) ? var_3 : 3526960213631523976)))));
            }
        }
    }
    var_26 = ((var_15 ? ((max((var_14 != var_2), var_5))) : var_7));
    #pragma endscop
}
