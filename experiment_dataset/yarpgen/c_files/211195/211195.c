/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 = var_9;
        var_19 *= 9695;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_20 = 0;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    arr_9 [i_3 + 2] [i_3 + 2] [i_1] = (min((max(-9665, 30921580134980047)), ((((arr_8 [i_3 + 3] [i_3 + 3] [i_3] [i_3]) < (((arr_6 [i_2] [i_2] [i_3]) ? -9664 : -5341210852257884406)))))));
                    var_21 = 30921580134980047;
                }
            }
        }
        var_22 = ((var_1 ? ((~(arr_6 [i_1] [i_1] [i_1]))) : (17259009061538841104 && var_17)));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_14 [i_1] [i_1] [i_1] = ((63 == (arr_11 [i_1] [i_1] [i_4])));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_23 ^= (arr_12 [i_5] [i_7 - 2]);
                            var_24 = 1493921113;
                        }
                    }
                }
                arr_23 [i_1] [i_1] [i_1] [i_1] = (((((-(arr_16 [i_1])))) & 1501087427587912605));
                var_25 += (arr_7 [i_5]);
            }
            var_26 = (arr_8 [i_1] [i_1] [i_1] [i_4]);
        }
        var_27 += (((arr_16 [14]) ? (max((~16351101236681366298), (!var_12))) : 255));
    }
    var_28 = var_14;
    #pragma endscop
}
