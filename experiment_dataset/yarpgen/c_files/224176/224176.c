/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_0] = max((((arr_0 [i_0]) & (arr_1 [i_0] [5]))), -var_7);
                    var_11 = (arr_3 [i_0] [i_1]);
                    var_12 = (arr_0 [i_2]);
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] = (((var_6 == ((((arr_0 [i_3]) * (arr_0 [i_1])))))));
                    var_13 = (arr_8 [i_0] [i_0] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_14 ^= (arr_10 [i_3 - 1] [i_5]);
                                var_15 = (((((var_9 ? ((40 ? -87 : -32755)) : (max(0, (arr_3 [i_0] [i_1])))))) ^ ((((arr_10 [5] [5]) || 6635515366690482804)))));
                                arr_17 [i_0] [i_1] [i_4] [6] [i_4] [i_4] = (max((min((((arr_1 [i_0] [i_1]) ? var_2 : var_8)), -6215557764218631120)), (((var_1 == ((2035489007646936969 ? var_2 : var_2)))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] = (((((min(87, 6635515366690482798))) ? (3712173468 && 4050795410) : ((max(255, var_7))))));
                }
                arr_19 [i_0] [i_1] [i_1] = (arr_16 [i_1] [i_1] [i_1] [7] [i_0] [i_0] [i_0]);
                arr_20 [i_0] [i_0] = var_7;
                var_16 |= ((1 ? 1615003523 : 51));
                var_17 = ((+((var_6 ? (((arr_1 [i_1] [i_1]) ? (arr_5 [i_0]) : var_3)) : ((((arr_6 [i_1] [i_1] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]) : var_3)))))));
            }
        }
    }
    var_18 = (min(var_18, var_10));
    var_19 = (((var_10 & var_9) > var_0));
    var_20 *= -64;
    #pragma endscop
}
