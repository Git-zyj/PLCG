/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0 - 1] = (((((((((arr_2 [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_2 [i_0] [i_2])))) ? var_7 : (((arr_0 [i_0]) ? 4294967295 : var_16))))) ? 1913581525985763519 : var_1));
                    arr_9 [i_0] [i_1] [i_0] = ((!(((((-16804 <= (arr_5 [i_0] [i_1]))) ? 17 : (arr_0 [i_0]))))));
                    var_17 = (min(var_17, (((!(arr_4 [i_1] [i_1] [8]))))));
                }
            }
        }
    }
    var_18 = (!var_13);
    #pragma endscop
}
