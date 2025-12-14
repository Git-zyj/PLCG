/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (2865 - 4348059159538084712);
    var_19 = ((max(65512, (65533 | 1180377590))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(1, 1))) == -18276));
        var_20 = (max(var_20, 992));
        arr_3 [i_0] = ((((min(23718, (arr_0 [i_0] [9])))) + ((max((arr_1 [i_0]), 963)))));

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_21 = -40484;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = (max(var_22, (max(255, ((((((max((arr_7 [i_1 - 2] [i_0] [3]), -43))) + 2147483647)) >> (3269 + 87)))))));
                        arr_12 [6] [13] [i_1] [i_3] [i_3] = ((-127 - 1) & 197);
                    }
                }
            }
            arr_13 [i_1] = (1 > -636048484);
        }
        var_23 = (min(var_23, ((((arr_1 [i_0]) ? 53 : -932696630)))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_24 = (max(((-(((arr_14 [i_4]) ? -23741 : 1)))), 25052));
        var_25 = min(62267, 29863);
        var_26 = 61720;
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((((((!(arr_15 [6])))) >> (((((max(-636048484, 112)))) - 109)))))));
        var_28 = (max(var_28, (((~((min((max(62272, -23719)), 23718))))))));
    }
    #pragma endscop
}
