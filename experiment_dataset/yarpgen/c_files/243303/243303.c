/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(((min(var_1, var_5))), (-var_17 | -var_1))))));
    var_20 = var_9;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_21 -= (min((max((arr_0 [i_0 - 1]), (arr_1 [i_0] [8]))), (arr_1 [i_0 - 1] [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 *= ((((((-(arr_5 [i_0]))) ? ((((-1 || (arr_4 [i_0] [14] [i_1]))))) : ((-4 ? 35507 : 2111679732))))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_23 = ((-(min(2589839788534283847, (min(-800384636, (arr_3 [14] [15])))))));
                var_24 = (min(((((arr_2 [i_0 - 1] [i_1]) ? ((max(90, (arr_2 [i_2] [i_2])))) : (arr_6 [i_0] [8])))), ((((((arr_7 [4]) - -7084172149146240808))) ? (arr_1 [i_0] [5]) : 12793427184801404370))));
                var_25 = (max(var_25, var_14));
            }
            var_26 = ((-(((arr_5 [i_0 + 1]) ? (arr_5 [i_0 - 1]) : (arr_5 [i_0 - 3])))));
        }
        var_27 = ((-(arr_4 [i_0] [i_0] [12])));
        arr_10 [i_0] = min(551421881, 90);
    }
    var_28 = var_5;
    #pragma endscop
}
