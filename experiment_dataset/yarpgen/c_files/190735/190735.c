/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 31338;
    var_19 = (((((((var_17 == var_15) <= var_6)))) - -31316));
    var_20 = (((var_7 & (~-31338))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 *= ((+((((arr_7 [i_2] [i_0] [i_1]) && (~var_9))))));
                    arr_8 [i_2] [i_1] [i_2] = (!31314);
                    arr_9 [i_2] = ((-(((((((arr_1 [i_0]) || 18139986))) >= ((-(arr_5 [i_0]))))))));
                }
            }
        }
    }
    var_22 = (((((((var_8 >> (31320 - 31290))) >= var_0))) & (var_10 && 59157)));
    #pragma endscop
}
