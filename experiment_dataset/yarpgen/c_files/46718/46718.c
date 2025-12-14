/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((var_0 | (((min(var_2, var_11)))))), ((((2050 > 2096640) != var_12))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (((((arr_1 [i_0] [i_0]) - var_6)) % ((var_3 + (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] |= (((((var_0 != var_0) ? (arr_4 [1]) : (~var_12))) == var_2));
        var_15 = ((var_8 && (((arr_4 [i_1]) != (var_7 && -2096658)))));
        arr_6 [i_1] = (min((!-2096652), ((((-1 != (arr_4 [i_1]))) ? var_5 : (arr_4 [i_1])))));
        arr_7 [i_1] = ((((8005167693129894651 >= (~var_7))) ? ((max((((0 == (arr_4 [i_1])))), (max(var_0, -2096633))))) : -var_1));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_16 -= (~var_6);
            arr_11 [i_1] [i_2] [i_2] = ((var_3 <= (arr_9 [i_2])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [1] = ((-(var_11 <= var_2)));
            arr_17 [i_1] [i_1] = (var_10 * var_6);
            arr_18 [i_1] = (var_0 == var_12);
        }
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            arr_22 [i_4] [i_4] = -var_5;
            var_17 = ((-2096640 ? 0 : -5700085291839653537));
            var_18 ^= (!var_0);
        }
    }
    var_19 = var_11;
    #pragma endscop
}
