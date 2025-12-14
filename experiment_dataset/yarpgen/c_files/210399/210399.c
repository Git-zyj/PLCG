/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((215663213 % (-127 - 1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (((arr_7 [i_0 - 1] [i_1 - 2] [12]) > (arr_7 [i_0 - 1] [i_1 - 1] [i_1])));
                    var_18 = (arr_2 [i_0] [i_0] [i_2]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_19 = (((-(max(-57, -2523320923614535303)))));
                        var_20 = (min(var_20, (((-((-838151793 ? (arr_5 [5] [0]) : -2523320923614535303)))))));
                    }
                    var_21 = 2523320923614535302;
                    var_22 = ((-320918396 ? (arr_0 [i_0 - 1]) : 0));
                }
            }
        }
    }
    var_23 = (--0);
    #pragma endscop
}
