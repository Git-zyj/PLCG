/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_16 = ((((min(var_14, (arr_1 [i_0])))) ? (((((~(arr_1 [i_0 - 4])))) & (((arr_1 [i_0]) ? var_5 : var_1)))) : ((((((-55 ? -1 : 105))) ? (arr_2 [i_0] [i_0]) : (((arr_0 [i_0]) ^ var_3)))))));
        var_17 = (((((2621584846464089458 ? 26 : ((~(arr_0 [i_0 - 4])))))) ? (((arr_2 [i_0] [i_0 - 1]) ^ (arr_1 [i_0]))) : (34434 & 1235357731)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, var_13));
                            var_19 = (((((((min(11688201080845333768, (-127 - 1)))) ? var_1 : (arr_1 [i_0 - 1])))) ? ((((arr_2 [i_2 - 1] [i_4 - 2]) > 31101))) : (255 > var_8)));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((var_10 ? var_8 : 4028383928));
                            var_21 = (((arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1]) ? 2 : (~54)));
                            var_22 = 65535;
                        }
                        arr_17 [i_1] [i_0] [i_2] [i_1] [i_3] = (((arr_11 [i_0 - 3] [i_1 - 2] [i_2 - 1]) & ((96 ? (arr_11 [i_1 - 2] [i_2 - 1] [i_3]) : (arr_11 [i_0] [i_0] [i_0 - 3])))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_20 [i_1] [1] [i_1] = (arr_8 [i_0 + 1] [i_1] [i_1]);
                            var_23 = ((((197 ? 8192 : var_4)) >= ((((arr_7 [i_6 + 1] [i_1 - 1] [i_2 + 1] [i_2 + 1]) ? 60 : (arr_3 [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((min(((var_1 ? var_0 : var_14)), var_14))) ? ((((max(8435463908022081228, var_9))) ? (~var_15) : 62)) : var_8));
    #pragma endscop
}
