/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 0));
                arr_6 [i_0] [i_0] = (min((((((-3992 ? 1 : var_1))) ? (var_10 / var_1) : (((max((arr_2 [i_1]), var_5)))))), (arr_1 [i_0 - 2])));
                var_13 = (((arr_2 [i_0 - 1]) ? var_1 : (arr_0 [i_0])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_11 [i_3] [i_2] [i_3 - 1] = ((-var_0 ? ((-(arr_8 [i_2]))) : (((8427627484200784276 * var_0) ? (max(-1165991125, 31)) : var_0))));
            var_14 = (min((~10019116589508767340), ((((~var_4) != -8427627484200784295)))));
            arr_12 [i_3] = ((!(arr_4 [i_2] [i_2] [i_3 - 1])));
        }
        arr_13 [8] [i_2] &= ((((((((~(arr_5 [i_2] [i_2])))) / 279223176896970752))) ^ (8427627484200784276 + 9723)));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_18 [i_2] &= (((arr_7 [i_2]) + ((10019116589508767339 + (((var_1 != (arr_4 [i_4] [i_4] [i_2]))))))));
            arr_19 [i_2] = (arr_7 [i_4]);
        }
    }
    var_15 = ((min((max(8427627484200784301, var_9)), (max(10019116589508767352, var_0)))));
    #pragma endscop
}
