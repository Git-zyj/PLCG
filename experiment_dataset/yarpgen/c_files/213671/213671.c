/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 *= ((189 >= (arr_8 [i_2] [i_1 - 1] [i_1] [i_0])));
                    arr_10 [i_2] = (0 && -637756461);
                    var_16 += ((-2147483647 - 1) ? ((((!(arr_2 [i_1] [i_0]))))) : -19852216);
                    var_17 &= ((((((18332 ? (arr_3 [8]) : (arr_3 [i_0])))) + (arr_8 [i_2] [i_1 + 1] [i_2] [i_0]))));
                    var_18 = (min(var_18, (arr_2 [i_2] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
