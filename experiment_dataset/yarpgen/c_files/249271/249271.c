/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~((20 ? 50292 : (arr_1 [i_0])))));
        arr_3 [i_0] = ((~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                var_14 -= arr_0 [4];
                var_15 -= ((((((arr_6 [i_2 + 1] [i_3 + 2]) ? (arr_6 [i_2 + 1] [i_3 + 2]) : 8572))) ? (arr_5 [i_3]) : (((!(((arr_5 [18]) || (arr_5 [i_2]))))))));
                var_16 = ((arr_0 [8]) ? (((-(arr_0 [6])))) : (-9223372036854775807 - 1));
            }
            var_17 = (arr_10 [i_2 - 2] [i_2 + 2]);
            var_18 = (max(var_18, -7631));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_15 [i_1] [0] = arr_1 [18];
            var_19 = (max(var_19, (((950280056 ? (~2441135693868555199) : (-127 - 1))))));
            var_20 = (max(var_20, (arr_12 [i_4])));
        }
        var_21 -= ((~(arr_4 [i_1])));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_24 [i_6] [i_6] [i_7] [i_6] = (arr_4 [i_5]);
                    arr_25 [i_5] [i_6] [i_7] [12] = (arr_5 [i_7]);
                    var_22 &= 26;
                }
            }
        }
    }
    #pragma endscop
}
