/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] [i_2] |= ((((min(var_1, (((-6830 ? var_0 : 0)))))) ? 4294967278 : ((min((arr_12 [i_4] [i_4] [i_3 + 1] [i_0] [i_4] [i_3 + 1]), (arr_11 [i_0] [i_1] [i_3 + 1] [i_4] [i_4] [i_1] [i_1]))))));
                                arr_16 [i_4] [i_4] |= (min((arr_12 [i_4] [i_1] [i_4] [i_1] [i_1] [i_1]), ((((var_6 <= var_9) != (max(64, var_3)))))));
                            }
                        }
                    }
                    var_10 = (min(var_10, ((min((min((arr_0 [i_0] [i_1]), -9)), 8)))));
                    var_11 |= min((((max(var_4, var_1)))), var_3);
                    var_12 = max(var_8, (((arr_5 [i_0]) + ((((arr_9 [i_1]) ? -9 : -82594632))))));
                    var_13 = (min(var_13, var_7));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_14 = 41701;
                                var_15 = (max(var_15, (((((max(0, var_5))) ? (((arr_18 [i_0 + 2] [i_5] [i_0] [i_0]) ? (arr_18 [i_0 - 1] [i_5] [i_0] [i_0]) : (arr_18 [i_0 + 2] [i_5] [i_0] [i_0]))) : (arr_18 [i_0 - 1] [i_5] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_16 = (min((min(41691, (arr_6 [i_1]))), (arr_14 [i_0] [i_1] [i_1] [i_5] [i_5])));
                    var_17 = ((min(var_9, ((var_8 ? var_2 : var_7)))));
                }
                var_18 = (!0);
                var_19 = ((+(min((arr_4 [i_0] [i_1] [i_0 - 1]), var_0))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_20 = (max(var_8, -21592));
                            var_21 = ((-((223 >> (((~1) + 11))))));
                            arr_30 [i_1] [i_1] [i_8] [i_9] = 1;
                        }
                    }
                }
                var_22 = ((((max((!var_3), ((var_6 ? 3800706829172909897 : var_1))))) && (~var_9)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            {
                                var_23 = (min((arr_37 [i_13] [i_13] [i_13] [i_14 + 1]), (27466 ^ var_2)));
                                var_24 = (-82594632 + (!23834));
                            }
                        }
                    }
                    var_25 = (max(var_25, ((max((((-2 ? -2931522051037507438 : -21610))), (min(3868034385, ((((arr_32 [i_11]) ? 21790 : -1))))))))));
                }
                var_26 = max((min((min(-10, var_6)), -var_9)), (max((arr_41 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11]), ((((var_3 + 2147483647) << (((var_3 + 1534743068) - 3))))))));
            }
        }
    }
    #pragma endscop
}
