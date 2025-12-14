/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_11;
    var_17 = (!4570328882054936374);
    var_18 = (max(var_18, ((((((-92 ? var_3 : 4570328882054936374))) ? (!var_0) : ((var_7 + ((var_2 ? var_2 : var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [6] [12] [i_1] = ((((max((arr_4 [i_1 - 1] [i_1 + 1]), var_1))) & 13876415191654615262));
                    arr_11 [12] [i_0] [2] |= (arr_5 [i_0] [i_1 - 2] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
