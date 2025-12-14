/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [10] = (max(10954251660540668774, 0));
                var_15 = (((min((((!(arr_0 [4])))), (max(var_6, (arr_2 [10])))))) ? var_11 : ((min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_16 = arr_1 [i_1];
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 = 48;
        var_18 = ((~(((!(arr_8 [i_2] [i_2]))))));
        var_19 = ((((-47 / (arr_8 [i_2] [i_2]))) + (max((arr_7 [i_2]), -1214054403))));
    }
    var_20 = (min(4052, -2075305471));
    var_21 = -2147483645;
    #pragma endscop
}
