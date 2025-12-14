/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_6 ? (((var_18 > (var_17 > var_5)))) : var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = -1068655855;
                    var_22 = (((((-(min(1771715732, (arr_5 [i_0] [i_1] [i_2])))))) ? var_16 : var_16));
                    var_23 = -var_2;
                    var_24 = (((((~var_7) ? (arr_1 [i_0]) : (((101 ? 207174966 : 105))))) | (min((arr_6 [i_1 + 1] [i_2]), (var_1 ^ var_15)))));
                    arr_9 [i_0 + 4] [i_1] [i_2] [i_0] = ((var_1 ^ (((((~(arr_5 [i_0] [i_1] [i_2])))) ? (arr_6 [i_0 + 4] [i_2]) : (~-9223372036854775784)))));
                }
            }
        }
    }
    #pragma endscop
}
