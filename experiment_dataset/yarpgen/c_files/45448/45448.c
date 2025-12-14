/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 ^= (min((1570846214 && var_1), 1));
                arr_7 [i_0] [i_0] |= ((-2056496475 && ((((((arr_2 [i_0] [i_0]) < 2056496474)) ? -81 : (min(11054840466021021170, var_9)))))));
            }
        }
    }
    var_11 &= var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_12 = (((((-(arr_10 [i_2])))) ? (min(4294967292, (arr_9 [i_3]))) : ((((arr_9 [i_2]) ? var_3 : (arr_10 [i_2]))))));
                arr_14 [15] = (arr_8 [i_2]);
            }
        }
    }
    #pragma endscop
}
