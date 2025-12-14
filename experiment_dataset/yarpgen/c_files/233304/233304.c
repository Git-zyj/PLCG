/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (-46 && var_8);
    var_16 = (min(var_16, ((((((255 ? 250 : 255))) ^ (((var_9 == var_3) ? (min(6509647062189921098, 3)) : var_6)))))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_17 *= (((((-((min(var_9, var_1)))))) && ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 4]))))));
        var_18 = ((var_5 ? var_7 : var_12));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (max(var_19, ((max(255, -56)))));
            var_20 = (max(var_20, ((((max((arr_4 [i_0 - 4] [i_1]), var_1)) | (((arr_5 [i_1]) | var_13)))))));
            var_21 ^= (min((arr_5 [i_1]), (((arr_0 [5]) + var_6))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_22 = (arr_7 [i_0] [i_2 - 1] [9]);
            var_23 = (min(var_23, var_10));
            arr_10 [i_0] = (~2584853489);
            var_24 = (min(var_24, (7933450150044296341 >= 11937097011519630517)));
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_25 = 17;
                            arr_22 [i_0] [9] [i_0] [9] [i_4] [i_5] [9] = (min(((137 ? 2837550220726345194 : var_12)), (arr_14 [i_0 - 3])));
                        }
                    }
                }
            }
            var_26 = (min(var_26, ((max(var_4, -25561)))));
            var_27 = ((-1258387822 <= (min(-1, (1 ^ 141)))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    {
                        var_28 &= 4286878376;
                        var_29 -= ((!((((arr_15 [i_7]) - (arr_15 [i_7]))))));
                        arr_29 [i_0] [i_7] [i_3 + 1] [i_0] = ((~(max(var_13, var_6))));
                    }
                }
            }
        }
        var_30 |= ((!((max((arr_18 [i_0 - 4] [i_0] [i_0 - 1] [i_0]), (((arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? 5789932383910268867 : var_3)))))));
    }
    var_31 ^= (min(((max((var_8 > -2040398164), (min(var_3, var_11))))), (max(((var_7 ? var_4 : var_12)), (!var_7)))));
    #pragma endscop
}
