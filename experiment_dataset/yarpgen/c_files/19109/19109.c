/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((38 ? 7945968563050812927 : 448)))));
    var_18 = var_6;
    var_19 = (var_4 & var_1);
    var_20 = 65088;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] = ((~3204380787) ? (((arr_4 [i_2]) % 3204380787)) : (arr_4 [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (((((~(arr_3 [i_4])))) ? (((var_3 ? -var_16 : (arr_3 [i_0])))) : 5));
                                var_22 = var_2;
                            }
                        }
                    }
                    var_23 = (((min(var_10, (arr_13 [i_0] [i_2] [i_0] [i_0] [i_1]))) * ((-(arr_13 [i_0] [i_0] [i_1] [i_0] [14])))));
                }
                var_24 -= 30378;
                var_25 = (arr_5 [i_1] [i_1] [i_0]);
                arr_14 [i_0] = (min(((((18792 * var_1) / ((var_8 ? (arr_6 [22] [i_0] [i_0] [i_1]) : (arr_0 [i_1])))))), ((((((-32767 - 1) ? (arr_7 [5]) : 8025))) ? (((min(var_10, -23)))) : (arr_4 [0])))));
                arr_15 [i_1] = -1815399492;
            }
        }
    }
    #pragma endscop
}
