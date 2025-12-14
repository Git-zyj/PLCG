/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((~(((((var_6 ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? (((-(arr_1 [i_0])))) : -8027976054193256959))));
        arr_4 [i_0] [i_0] |= (~((~(arr_2 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_16 = (arr_1 [1]);

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_17 = (arr_0 [i_2 - 1]);
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 = (((((var_10 ? ((((arr_5 [i_4]) ? 2147483647 : var_10))) : (((arr_13 [i_4] [i_5]) << (var_5 - 50)))))) ? ((((!(arr_11 [i_2]))))) : (arr_6 [i_3 + 3])));
                            var_19 = 1073741823;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_21 [i_1] [i_1] = (min(((-((~(arr_11 [i_1 + 1]))))), (arr_10 [9] [i_1 - 1])));
            var_20 = (max(var_20, 1073741831));
        }
    }
    var_21 *= var_14;
    #pragma endscop
}
