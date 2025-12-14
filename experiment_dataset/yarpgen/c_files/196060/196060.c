/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max(var_10, (!var_13))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (arr_1 [5] [i_0]);
        arr_2 [i_0] = ((((~(20264 <= var_15)))) ? 643734761 : 0);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = min(((2 ? 5 : -4080815787830169120)), 18014398508433408);
            var_19 = ((254 ? ((max(((max(255, 1))), 643734741))) : (((arr_0 [i_0]) ? (!18446744073709551607) : (max(var_2, (arr_4 [i_0])))))));
            var_20 = ((var_1 == (max(-18014398508433410, 2628859307))));
        }
        var_21 = (max(((503316480 ? -41 : 4294967274)), (((-(!var_5))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = max((min(var_8, 64605)), (((var_11 ? (arr_1 [i_0] [i_2]) : (arr_1 [i_0] [i_0])))));
            var_23 = ((((max(((max(1, 6))), (arr_4 [i_2])))) ? (!18014398508433408) : 1162339173821857560));
            arr_11 [i_0] = var_9;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_24 = ((!(!49)));
            var_25 = max(8160, -643734751);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_26 = (min(var_26, ((((arr_3 [i_0] [i_4 - 1]) >> (((arr_3 [i_0] [i_4 + 1]) - 29341)))))));
            var_27 = (((arr_3 [i_4 + 3] [7]) & (arr_3 [i_4 - 1] [7])));
            var_28 = (min(var_28, 13936));
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            arr_19 [i_5] = 4294967283;
            var_29 = (min(var_29, (arr_1 [i_0] [i_5])));
            arr_20 [i_0] [i_5] = (max((3722760303814470512 | -25), ((((((4294967295 ? 4294967279 : var_13))) ? ((0 ? 13938 : (arr_12 [i_5]))) : var_9)))));
            var_30 = (((arr_15 [i_5 + 1]) ? ((min(var_4, (926609970 || 13)))) : (~21990)));
            var_31 = -26;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            var_32 = (arr_21 [i_7 - 1]);
            var_33 = (max(var_33, var_15));

            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                arr_31 [i_8] [i_8] = ((1666107982 > (arr_22 [i_6] [i_6])));
                var_34 *= (arr_30 [1] [i_6] [4] [i_8]);
            }
        }
        var_35 = (!var_4);
    }
    #pragma endscop
}
