/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_11 = var_4;
                    var_12 = (max(var_12, ((min(7939286489853867976, 10507457583855683639)))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_13 &= var_1;
                            var_14 = ((((arr_2 [i_0]) && (183 && var_3))) ? 2137916698 : (arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2]));
                            var_15 = (min(var_15, ((((arr_3 [i_3]) == var_0)))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_4]);
                            var_16 = (min(var_16, 0));
                        }

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_17 = ((~((((!298324931) > var_0)))));
                            var_18 = ((298324931 ? 458267071 : 1));
                        }
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_19 ^= (min(-1080551056, -574433586));
                        var_20 = (((max(63, -7836))));
                        var_21 = (max(var_21, ((((max(1, ((var_10 ? 17692533399837010645 : var_4)))) & ((((!(arr_2 [i_6]))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_22 = (arr_12 [i_7] [i_7] [i_7] [i_7]);
                                arr_26 [i_0] = ((!((!(arr_14 [i_2 - 2] [i_2 - 2] [i_0 - 1])))));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, 35434));
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
