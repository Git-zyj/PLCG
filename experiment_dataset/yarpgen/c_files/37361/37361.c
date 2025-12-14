/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 |= ((((max(((-4878487421180112806 ? (arr_5 [i_1] [i_1]) : 1)), (var_7 | 153)))) ? (((arr_5 [i_0] [i_0]) - -10990)) : ((min((arr_3 [5] [i_1]), (arr_5 [i_0] [i_0]))))));
                var_19 = (min(var_19, (((((1 ? 1 : 1)) >= (max(-1, ((9223372036854775800 ? 1 : 20936)))))))));
                arr_8 [i_0] = arr_2 [i_0];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            {
                var_20 += (((((max(-32750, -707406237515466677)) / (((-(arr_5 [i_2] [i_3])))))) == (((min(var_15, 1)) ? (!var_6) : 37524))));
                arr_13 [i_2] [i_3] [i_2] = ((max((arr_10 [i_2 + 1] [i_3 + 1]), (arr_10 [i_2 + 1] [i_3 + 1]))));
                var_21 = (max(var_21, (((((1 ? 87494295 : (arr_6 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
