/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [0] = (min(var_6, (((((6184057145217907404 ? var_2 : var_4))) - (((arr_0 [10]) / -6184057145217907404))))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                arr_10 [0] [i_1] [9] = ((((((arr_7 [i_1]) ? (arr_3 [1] [5]) : var_7))) ^ (var_0 - var_9)));
                var_10 -= var_3;
            }
            var_11 ^= ((+((min((arr_2 [i_0] [i_0]), (arr_1 [i_0]))))));
            var_12 |= (min((min(((var_6 ? (arr_3 [i_0] [i_0 + 1]) : (arr_2 [i_1] [i_0 + 1]))), var_9)), (min((arr_7 [i_0]), ((var_0 ? (arr_3 [i_1 - 2] [i_0]) : (arr_5 [i_0])))))));
        }
        for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_13 = (min(var_6, (arr_5 [i_0])));
            var_14 = ((3968161933 ? -6184057145217907400 : 0));
            var_15 ^= ((min(var_9, 894903539256707292)));
        }
        for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_16 = (((min((arr_5 [i_4]), var_3))) != ((((arr_1 [i_4 - 2]) > var_6))));
            var_17 *= (min((((((min((arr_13 [7] [i_4 - 3]), (arr_2 [i_0] [i_4 - 3])))) < var_6))), (min(var_3, (((arr_12 [i_0 + 1] [i_0] [3]) ? (arr_7 [i_0]) : 476792614))))));
        }
    }
    var_18 = var_9;
    #pragma endscop
}
