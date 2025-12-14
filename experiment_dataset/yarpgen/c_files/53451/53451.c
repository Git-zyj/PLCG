/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = min(-13, 121);
                arr_5 [i_1] [i_1] = ((14035 >> (-2880671495430132795 + 2880671495430132806)));
                arr_6 [i_1] = (var_11 | (max((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_12 [14] [i_3] = (max((7036281760068907761 * -14034), ((((arr_8 [i_3 + 1]) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 + 1]))))));
            var_13 ^= (((((var_4 != ((min(var_12, var_11)))))) * ((((arr_8 [i_3 - 1]) > (arr_8 [i_3 - 3]))))));
        }
        arr_13 [i_2] [i_2] = min(((((arr_8 [i_2]) >= (arr_11 [i_2])))), (max(5437037107318642375, 18446744073709551611)));
        arr_14 [1] = (min(((10459441773503640607 ? 6459049674342492270 : ((18446744073709551615 ? 12 : 1893328615384748268)))), (max(var_2, ((65518 ? 18446744073709551604 : 1594670532930307397))))));
        var_14 = ((15 ? (((51970 < (arr_11 [i_2])))) : ((~(arr_8 [i_2])))));
        arr_15 [i_2] [14] = var_6;
    }
    var_15 = var_7;
    #pragma endscop
}
