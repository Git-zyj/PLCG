/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] &= (min(((max((arr_3 [i_0 - 1] [7] [i_0 + 1]), var_11))), (min(((-(arr_0 [i_0]))), (~var_8)))));
                var_17 &= (~2308980103133485568);
            }
        }
    }
    var_18 = (max(var_18, ((((((var_7 || var_1) >> (-1152921504606846976 + 1152921504606846976))) & ((-((min(1, var_10))))))))));
    var_19 = (min(var_19, ((max((var_7 - var_9), var_13)))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_20 += (--var_0);
        var_21 = (max(var_21, (1 == 0)));
        var_22 += ((!((min((var_16 % var_15), ((min(-32761, 31392))))))));
        var_23 = (max(var_23, ((min((((~(arr_7 [i_2] [i_2])))), ((161 ^ (min(511, (arr_8 [i_2] [i_2]))))))))));
    }
    #pragma endscop
}
