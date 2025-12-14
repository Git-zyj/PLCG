/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((((var_1 ? var_4 : 15985137720352344659)) - ((((-1 + 2147483647) << (((-13 + 28) - 15)))))))));
    var_13 = var_0;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [15]) * 1));

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = ((-70 ? 1 : 4294967295));
            var_14 = 4114417251439319224;
            var_15 = (min(var_15, -1));
            arr_8 [i_0] [i_1] [i_0] = (((65 > -86) * 1));
            var_16 = ((((max(((((arr_5 [i_1] [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_0])))), (((arr_5 [i_1] [5]) - (arr_2 [i_1])))))) ? 16938 : (-1 - 89)));
        }
    }
    #pragma endscop
}
