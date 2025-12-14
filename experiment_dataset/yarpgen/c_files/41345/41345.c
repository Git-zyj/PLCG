/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((((((max((arr_3 [i_0]), var_1))) ? (((var_9 + 2147483647) >> (((arr_1 [i_0] [i_1]) + 660857291)))) : (((-2038613157 + 2147483647) << (4884934709718700252 - 4884934709718700252)))))), (max(var_1, ((4884934709718700252 ? var_7 : var_15))))));
                var_16 = (arr_4 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_17 *= (~var_4);
                var_18 = (max((arr_10 [i_2] [i_3]), ((((((~(arr_10 [i_2] [5])))) != (arr_9 [i_2] [1]))))));
                var_19 = (min(var_5, (max((~var_10), (max(13561809363990851363, (arr_10 [i_2] [15])))))));
                var_20 = (!var_9);
            }
        }
    }
    #pragma endscop
}
