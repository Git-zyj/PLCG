/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(~92)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 += (min((((!(arr_2 [i_0] [i_0 + 2] [i_0 - 1])))), ((var_11 ? 19188 : var_12))));
                var_21 += ((arr_1 [i_0]) ? ((((var_1 + 1) + (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1])))))) : (max((((arr_0 [0] [i_1]) ? 13 : var_5)), ((((arr_3 [i_0] [i_1]) ? 18292 : (arr_1 [i_1])))))));
                var_22 = ((-(max((((arr_3 [0] [5]) | 4704)), (-2044 * var_16)))));
                var_23 = (arr_0 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                var_24 &= ((((max((arr_4 [i_3]), (min(var_7, 5))))) % var_14));
                var_25 = 256;
                var_26 = ((((-(arr_8 [i_2] [i_2 - 1]))) * (arr_8 [i_2] [i_3])));
                var_27 = ((((((arr_4 [i_2 - 2]) ? (max(3915255420, 4503599090499584)) : (arr_5 [i_2 - 1] [i_2 - 1])))) ? (arr_4 [11]) : (((max(-6567235290148437739, (arr_5 [i_2] [i_3]))) / (((min((arr_6 [i_2] [i_3 - 3]), 142))))))));
                var_28 = (min(var_28, ((((((((min(14551501035158801883, -512))) ? var_4 : (((!(arr_6 [i_2] [i_3]))))))) && ((((arr_8 [i_3 + 2] [i_2]) ? (((min((arr_6 [1] [1]), 80)))) : (min(var_8, 0))))))))));
            }
        }
    }
    #pragma endscop
}
