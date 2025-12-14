/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_19 *= (arr_7 [i_0] [i_0] [i_2] [i_3]);
                        var_20 *= arr_8 [i_0];
                    }
                    var_21 ^= ((((min((arr_5 [i_1]), (arr_5 [i_1])))) * ((min((arr_5 [i_0]), (arr_5 [i_0]))))));
                    arr_11 [i_0] [i_1] [1] [i_0] = (max(var_18, (((!(((var_6 ? var_5 : (arr_9 [i_0])))))))));
                }
            }
        }
    }
    var_22 ^= var_5;
    #pragma endscop
}
