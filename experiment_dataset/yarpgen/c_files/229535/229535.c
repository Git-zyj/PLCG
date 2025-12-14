/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 + var_5);
    var_13 = var_4;
    var_14 = (min(((16564382764142742058 ? var_11 : ((var_10 ? 11877354016865487647 : var_0)))), 61));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_15 = ((2853834122937369608 ? 371093898 : 1));

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_16 = ((1653703962 * (((arr_2 [i_0] [i_0 - 1] [i_2 + 1]) ? (min(0, (arr_3 [i_2] [i_2]))) : 255))));
                var_17 = ((((1 % (arr_7 [i_0 - 1] [i_0] [i_1]))) >> (((~var_11) - 633132877))));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_18 = (min((((((arr_9 [i_0]) < 31881)) ? (1 / 509325841) : 15)), 2115423041));
            var_19 = (((((~(arr_2 [i_0] [i_0] [i_0])))) ? (((arr_7 [i_0] [i_0] [i_0]) ? -var_5 : var_7)) : (((!(arr_0 [i_0]))))));
        }
        arr_11 [i_0] = (arr_1 [i_0]);
        var_20 = 1882361309566809561;
    }
    #pragma endscop
}
