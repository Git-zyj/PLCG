/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (max(var_9, 1083810830717509506));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_17 = min(((((((arr_8 [i_0] [i_0] [i_0] [i_3]) % (arr_1 [i_1 - 2] [i_2]))) == (((((arr_3 [i_0] [i_0] [i_0]) + 2147483647)) << (((var_0 + 667433248) - 4))))))), ((var_1 ? 2088960 : (1083810830717509517 >= 14393614019899636052))));
                        var_18 ^= (arr_4 [i_0]);
                        var_19 = (((((arr_4 [i_1 + 4]) ? 17362933242992042112 : (arr_4 [i_1 + 4])))) ? (max((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1]))) : (max((arr_4 [i_1 + 1]), (arr_4 [i_1 + 2]))));
                    }
                }
            }
        }
    }
    var_20 &= var_9;
    #pragma endscop
}
