/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1302724182;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = -1207888756215220359;
                var_20 = -1207888756215220359;
                var_21 &= ((1207888756215220359 << (((-1901953161 + 1901953183) - 21))));
                var_22 = (~0);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    var_23 ^= (~-1901953161);
                    var_24 = ((!(~-1207888756215220359)));
                }
                var_25 = (min(var_25, ((~(max(5192, (((-1901953161 + 2147483647) << (((-18988326 + 18988343) - 15))))))))));
                arr_12 [i_2] [i_3] = 1;
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] = (((min(-5190, 2992243114)) << 11));
        arr_18 [i_5] [i_5] = ((-(~0)));
        var_26 = (max(var_26, (-32767 - 1)));
        var_27 = -7403993678525510481;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_28 = (~126);
        var_29 = 30740;
    }
    var_30 = 76;
    #pragma endscop
}
