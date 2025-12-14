/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1]);
                var_17 &= (((((min(25526, 1796785259)) ? (((min((arr_0 [7]), (arr_0 [i_1]))))) : ((var_15 ? (arr_1 [i_0] [i_0]) : 7560))))));
            }
        }
    }
    var_18 = ((((((var_3 ? -1324244140 : var_6)) * ((max(var_0, var_5))))) % ((max((-1324244140 / 1820), 3757605019223288454)))));
    var_19 = (min((1324244141 || var_11), ((var_11 ? (((max(var_3, var_7)))) : (max(var_3, var_10))))));
    #pragma endscop
}
