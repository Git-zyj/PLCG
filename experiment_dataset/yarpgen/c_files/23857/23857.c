/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((var_3 ? (min(3145728, var_5)) : -var_14))) ? (207546569448549062 | var_4) : (((2147483647 ? (var_9 || var_2) : var_1))));
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (((!1152921229728940032) % ((~(arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 2])))));
                    var_18 += (((((0 || 0) && (((9 ? (arr_2 [i_2] [i_1] [i_2]) : 18446744073709551601))))) ? ((min(((!(arr_1 [i_2]))), ((!(arr_4 [9] [i_1] [i_2] [i_0])))))) : (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
