/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max((min(0, 183)), (!255))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [5] [1] = (min((255 * var_0), (((arr_3 [i_0 + 1] [i_0 - 1]) ? 3813803880310872115 : 17517748294350612285))));
                var_16 = (+(((arr_3 [i_0] [i_0]) ? ((var_13 ? 16070221047500986717 : var_2)) : (((-(arr_0 [i_0 - 1])))))));
                var_17 *= -10982051951007017137;
                var_18 = ((!((((32767 == 49) ? 1 : (((arr_3 [i_0 - 1] [i_0 - 1]) ? 240 : 1037816191)))))));
            }
        }
    }
    var_19 = min(17517748294350612285, var_14);
    var_20 = -var_6;
    #pragma endscop
}
