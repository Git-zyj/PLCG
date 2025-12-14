/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_6 + -100);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = 119;
                var_21 = ((~((((max(4294967295, -115))) ? (arr_6 [i_0]) : (arr_5 [12] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_22 = (((~(arr_9 [i_2 + 1]))));
                        var_23 = var_0;
                        arr_16 [i_2] [i_4] = (((arr_9 [i_2 + 2]) ? 1 : ((((arr_10 [i_2 + 2] [i_3]) >= var_12)))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_6] = var_3;
                        arr_22 [i_4] [i_4] [12] [i_4] = (arr_8 [i_2 - 1]);
                        var_24 = (max(var_24, (arr_9 [i_2])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_25 = (arr_10 [i_3] [i_2 + 2]);
                        var_26 = (((arr_20 [i_4]) < (!4294967293)));
                        var_27 = ((!(var_16 || 4294967293)));
                    }
                    var_28 = (min((((-25172 < ((-(arr_8 [i_3])))))), ((((min(1, var_5))) ? -79 : (min(var_15, 4294967289))))));
                    var_29 = (var_15 + 2220726532);
                    var_30 |= min(-75, (arr_15 [i_2 + 2] [i_2] [i_3] [i_4] [i_4]));
                }
            }
        }
    }
    #pragma endscop
}
