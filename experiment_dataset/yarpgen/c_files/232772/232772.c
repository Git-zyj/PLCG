/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 15;
    var_17 = 51433;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = (((min((arr_0 [i_1 - 2]), (arr_1 [i_1 - 1] [20]))) / (arr_0 [i_0 - 1])));
                var_18 = ((+((((var_15 != var_4) || ((((arr_2 [i_0]) % var_0))))))));
                var_19 = ((((((((arr_3 [i_1] [i_0 + 1] [i_0]) * var_12))) ? (arr_3 [i_1] [i_0] [1]) : (arr_4 [i_0]))) | (((((((arr_0 [i_1]) / (arr_3 [i_1] [i_0] [i_0])))) ? (arr_4 [i_1 - 2]) : (((arr_2 [i_1]) | 14121)))))));
            }
        }
    }
    var_20 = (((min(((max(1, var_10))), (5618758553365503145 - 16383))) % (min((((var_13 ? var_5 : var_4))), (min(var_15, var_11))))));
    #pragma endscop
}
