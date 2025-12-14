/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_5;
    var_15 = var_4;
    var_16 = (var_10 > var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = (var_11 != var_10);
        var_18 = (arr_1 [i_0 + 1]);

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            var_19 &= var_12;
            arr_4 [i_0] [i_1] = ((((-(arr_2 [i_0]))) != var_6));
            var_20 = (max(var_20, ((((var_2 | var_12) >= ((-19 ? (-32767 - 1) : 117)))))));
            arr_5 [i_1] [i_1] [i_1 - 3] = ((var_3 ? 2660183385 : (arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1])));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_2] = var_1;
            arr_10 [i_2] = (arr_1 [i_0 + 1]);
            arr_11 [i_0 + 1] [i_2] [i_0] = var_0;
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0 + 1] [i_3 - 2] = (((arr_12 [i_3 + 2] [i_3]) >= (arr_2 [i_0 + 1])));

            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                arr_18 [1] [i_3] |= (arr_12 [i_3 - 2] [i_0 + 1]);
                var_21 = (arr_17 [i_0] [i_0]);
            }
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                var_22 = ((!(arr_0 [13])));
                arr_23 [i_0] [i_6] [i_0] [i_6] = ((1 ? 0 : (-32767 - 1)));
                var_23 = (((((4229197655 ? -85 : 32753))) >= 16564260202687032551));
                arr_24 [i_0] [i_6] [i_6] = ((-(arr_0 [i_5 - 2])));
            }
            var_24 = (var_5 == (arr_2 [i_5 - 1]));
            var_25 ^= (arr_15 [8] [i_5] [i_5]);
        }
        var_26 *= var_4;
        var_27 = ((1 ? 16564260202687032551 : 65769651));
    }
    var_28 = (-var_11 < var_6);
    #pragma endscop
}
