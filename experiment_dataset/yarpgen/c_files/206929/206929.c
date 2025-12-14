/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (max(var_14, (arr_3 [i_1])));
                        var_15 -= (((arr_6 [i_1 - 1] [i_1 + 1] [i_3] [12]) % 4221116507669343250));
                    }
                    var_16 = (max((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_2]), (((!(arr_6 [i_0] [i_0 + 1] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_17 = (var_6 >= var_6);
    var_18 = (min(((((max(var_10, var_0))) ? (max(var_13, -113)) : (((var_5 ? var_1 : 32766))))), var_7));
    #pragma endscop
}
