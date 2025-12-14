/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = min(((-(arr_1 [i_0]))), (max(3581611613, 2434385250)));
                var_20 = (max(var_20, ((((((max((arr_2 [i_1]), var_3)))) ? (min(1090420593648962517, (arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1]))) : (max((((~(arr_2 [i_0])))), var_5)))))));
            }
        }
    }
    var_21 = (min(((((4283801908 ? 11165408 : 4283801908)) & var_8)), (((~(var_4 && -11530))))));
    var_22 = (((((!(((var_4 ? var_13 : 4283801908)))))) >= (((-var_2 >= (max(var_10, var_8)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                var_23 += (((((!(((var_9 ? var_2 : 4282444257218499824)))))) >= ((((arr_8 [i_2] [i_3]) <= (~11165387))))));
                arr_11 [i_2] [i_2] [i_3] = (max(4283801925, (((((11165387 ? var_16 : var_1))) ? (((((arr_5 [3] [i_2]) >= (arr_9 [i_2] [i_2]))))) : (max(6442551487369390103, 11165387))))));
            }
        }
    }
    #pragma endscop
}
