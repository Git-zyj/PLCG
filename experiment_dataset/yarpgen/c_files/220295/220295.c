/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_12 = (((((var_0 ? 0 : var_7))) - var_3));
        arr_2 [i_0] = (((!0) ^ ((((var_11 && 44930) || (9377182637558416016 || 22))))));
        var_13 += ((20611 ? (((38026 ? -67 : 44930))) : -3940954695));
    }
    var_14 = ((((((((146 ? 3940954695 : 8091497950352974944))) ? 20586 : 154))) ? 44930 : 3940954692));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((3940954690 << (44937 - 44925)));
        arr_6 [i_1] [i_1] = 20606;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_15 ^= 354012605;
                    arr_13 [i_1] [i_2] [i_1] = ((3940954695 ? 5 : 3940954716));
                    var_16 = (((18446744073709551593 ? 3940954690 : var_8)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = var_3;
        arr_19 [i_4] = (1 / 354012586);
        arr_20 [i_4] = -3940954690;
        arr_21 [i_4] = ((4268787716 ? 5850710227738293719 : 117));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_17 = ((((!(!12596033845971257896))) || (!1)));
        var_18 = -354012605;
        var_19 = (max(var_19, -1));
        arr_24 [i_5] [i_5] = (44938 & 44525);
    }
    var_20 = (((((354012607 ? 20582 : 5850710227738293736)) * var_10)));
    #pragma endscop
}
