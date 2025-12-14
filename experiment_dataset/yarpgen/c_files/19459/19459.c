/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (var_5 / 1859076993134953883)));
    var_20 = (max(var_20, ((min((((min(var_2, var_1)))), 18446744073709551615)))));
    var_21 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_22 = ((-(arr_7 [i_1] [i_3] [i_2] [i_1] [i_0 + 1])));
                        var_23 = ((((min(((1 * (arr_0 [i_0]))), (min(var_17, 9465))))) ? (arr_6 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3]) : var_17));
                        var_24 = (((((32753 || (arr_1 [i_0 - 1])))) != (arr_7 [5] [6] [6] [10] [1])));
                    }
                    var_25 = ((-(arr_2 [i_0 - 2])));
                    var_26 = (arr_7 [i_0] [i_0] [i_1] [i_2] [i_2]);
                    arr_9 [i_0] [i_1] [i_1] = var_10;
                    arr_10 [i_0] [i_0] [i_0] = ((~(arr_8 [i_0] [i_0] [i_1] [i_2])));
                }
            }
        }
    }
    var_27 = (var_3 <= var_3);
    #pragma endscop
}
