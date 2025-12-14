/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = max(2827436667, (max(((max(2827436667, var_15))), ((1467530629 ? var_10 : (arr_4 [i_1 - 2]))))));
                    var_17 = (((arr_3 [8] [i_1] [8]) - 60));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_18 = arr_12 [14] [i_4];
                arr_15 [i_3] [0] [i_3] = ((((((8073006783396444739 ? var_6 : (arr_12 [0] [0]))) != (((arr_10 [i_4]) | var_11)))) && 1723803271));
                var_19 = (((((((max(-5216771847929292661, (arr_12 [i_3] [i_3])))) ? 17858319647120638006 : ((((var_5 < (arr_10 [22])))))))) ? (((arr_8 [i_3]) ? 215563333 : 8062767828235884980)) : ((max((((var_14 || (arr_10 [i_3])))), (min((arr_9 [15]), (arr_9 [i_4]))))))));
                arr_16 [i_3] = (min((arr_12 [i_3] [i_4]), (((arr_10 [i_3]) > (arr_10 [i_4])))));
            }
        }
    }
    #pragma endscop
}
