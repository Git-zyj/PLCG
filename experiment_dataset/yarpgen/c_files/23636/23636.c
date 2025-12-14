/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_9 ? (((var_11 - 9223372036854775793) ? var_10 : ((-9223372036854775801 ? -9223372036854775800 : -9223372036854775801)))) : var_12);
    var_15 = (~var_10);
    var_16 = (min(var_16, ((min((!var_3), (min(var_6, ((36011204832919552 >> (var_8 - 106))))))))));
    var_17 = (max((((((32749 ? var_9 : var_12))) ? (min(-1, 9223372036854775799)) : var_3)), (max(1960310316, 20))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] = var_7;
            var_18 += ((min(9223372036854775799, -9223372036854775801)));
        }
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = ((((max((((1 ? (arr_11 [i_0] [1] [i_0]) : var_2))), var_7))) ? ((max(9223372036854775791, 9223372036854775804))) : ((((((arr_2 [i_0] [i_2]) ? (arr_11 [i_0] [i_2] [i_0]) : 1))) ? 1 : (((arr_12 [i_0] [i_0]) ? var_5 : (arr_12 [i_0 - 1] [i_0])))))));
                        var_20 = (min(var_20, (arr_8 [i_3])));
                    }
                }
            }
        }
        arr_13 [i_0] = -var_13;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    {
                        var_21 -= (arr_18 [i_0 - 2]);
                        var_22 = (max((((-(arr_14 [i_0])))), (~11739405771830175364)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
