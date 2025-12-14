/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_19 = ((~(!-14761546561523931281)));
        arr_5 [i_0] = (min((max((var_8 || var_12), (arr_1 [i_0] [i_0]))), (arr_3 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (((--40) * 0));
        var_21 = (max((min(1, var_13)), 1));
        arr_9 [i_1] [i_1] = (max((max(-22614, 7712604874519400099)), ((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((!(~3075623946)));
        arr_13 [i_2] = (((-946508378 + 2147483647) << (((max(9005000231485440, ((max(var_4, var_1))))) - 9005000231485440))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_22 = var_0;
                    arr_21 [17] [i_3] [17] = (~var_5);
                    var_23 = ((!((var_3 && (var_2 <= 1)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {
                {
                    arr_31 [i_6] [i_6] [i_6] [i_6] = ((min(0, var_17)));
                    var_24 = var_1;
                    var_25 = ((-(((!(arr_28 [i_6] [i_7] [i_8 - 2] [i_8 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
