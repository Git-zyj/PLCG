/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] [10] = (min(((((arr_0 [11]) ? -23238 : 23222))), ((-9756 ? 89 : -201880282))));
                var_13 = ((-((92 << ((((-23248 ? (arr_3 [i_0] [i_0]) : (-127 - 1))) + 2411186236664312143))))));
                var_14 -= (((((~var_5) ? (-127 - 1) : (min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1]))))) & ((~(((arr_3 [i_0] [i_0]) | var_1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {
                var_15 = ((((1 ? -23238 : 7)) == (arr_8 [i_2] [i_3])));
                var_16 = ((85 ? (((arr_9 [i_3 + 1] [i_3 + 1]) ? (max((arr_6 [i_2]), (arr_7 [i_3]))) : ((((var_0 < (arr_7 [i_2]))))))) : 61));
            }
        }
    }
    #pragma endscop
}
