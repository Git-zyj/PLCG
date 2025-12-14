/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_14, var_16))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = ((-(arr_4 [i_0 - 1])));
                    arr_7 [i_1] [i_2] |= (arr_2 [17] [i_2]);
                    var_19 = (max(var_19, ((((max((!401850257), ((var_14 == (arr_0 [17] [i_0])))))) >> ((((((max((arr_3 [7]), (arr_3 [i_2])))) ? ((max(var_8, var_14))) : (arr_5 [i_0 + 1] [i_0 + 1]))) - 3693720573))))));
                    arr_8 [i_0 + 1] = ((9134470983291781740 >> (((arr_6 [i_1 + 1]) - 562785459))));
                }
            }
        }
    }
    var_20 = (((((var_3 < (min(291678129, -1963847454))))) == var_15));
    var_21 = (((1963847452 / -1963847460) * var_5));
    #pragma endscop
}
