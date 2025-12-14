/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 += ((((max(var_13, var_5))) % -var_12));
    var_21 = var_17;
    var_22 = (max(((max(0, (var_13 | var_8)))), var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 ^= (((((arr_0 [i_0 - 2]) > (arr_0 [i_0 + 1]))) || 143833713099145216));
                                arr_12 [i_4] = (var_4 ^ var_16);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_24 = (max(((((arr_15 [i_0] [i_0] [i_0] [i_5] [i_6]) | var_10))), (((((arr_5 [i_6] [2] [i_5 + 2]) | var_6)) - (arr_10 [i_5] [10] [i_6] [i_6 - 1] [1] [i_6])))));
                                arr_20 [i_5] [i_0 - 1] [13] [i_2] [0] [i_0] [i_5] = (arr_11 [i_0] [i_0 - 1] [i_5 + 3] [i_6] [i_6 + 2]);
                            }
                        }
                    }
                    var_25 = ((((!var_9) + (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [5]))));
                    var_26 = ((-(((!(16160 || -12961))))));
                    var_27 = (((((4503599560261632 >= ((var_17 ? var_12 : 2439717931))))) == var_10));
                }
            }
        }
    }
    #pragma endscop
}
