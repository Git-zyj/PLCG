/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = ((~(!var_10)));
    var_21 = 63;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_22 ^= (min((min((max(var_17, var_14)), (arr_2 [i_0] [i_0]))), ((((arr_0 [i_0]) >= (((!(arr_1 [i_0] [i_0])))))))));
        var_23 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_24 = (var_17 != var_17);
                    var_25 *= var_12;
                    arr_7 [i_2] = var_15;
                }
            }
        }
        var_26 = (((((((max(var_3, var_16))) >> (var_1 - 29652)))) ? ((var_6 ? -119 : var_17)) : ((var_10 ? (var_18 == 11237) : ((max(var_4, var_18)))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_27 += ((min(var_7, var_13)) < var_16);
        arr_11 [i_3] = (((14321 || 204) ? ((var_3 >> (((((arr_9 [i_3] [i_3]) ^ -1557736186773544688)) + 1557736186773544677)))) : var_12));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_6] [i_5] [i_6] = (((((!(arr_17 [i_4] [i_5 - 3] [i_5 - 3])))) / var_17));
                        arr_21 [i_6] [i_4] [i_4] [i_5] [i_6] = (arr_2 [i_3] [i_4]);
                        var_28 = var_16;
                        arr_22 [i_6] [i_3] [i_3] [i_3] = (max((3312440088850970487 % -1438175846), var_10));
                    }
                }
            }
        }
    }
    #pragma endscop
}
