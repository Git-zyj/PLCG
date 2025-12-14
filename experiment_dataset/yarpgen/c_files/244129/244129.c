/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (min(0, 1));
                    var_16 |= (max(((((111 ? (arr_6 [i_0] [i_1] [i_2]) : 67)) / (((var_0 ? 67 : 1))))), var_13));
                    var_17 = (arr_2 [7] [i_2]);
                    var_18 = (max(-23492, ((((arr_2 [i_0] [i_1]) || (arr_2 [i_1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
