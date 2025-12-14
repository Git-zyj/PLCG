/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((max(var_6, (0 >= var_4))) / 1)))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 3] [i_0] = max(0, 1);
        var_19 = (min(var_19, (arr_0 [i_0 - 1])));
        var_20 = (max((max((arr_0 [i_0 - 2]), 9223372036854775797)), ((max(1, (arr_1 [i_0]))))));
        arr_3 [i_0 - 1] [17] = ((65528 / (arr_1 [i_0 + 1])));
        arr_4 [12] [i_0 + 1] = (arr_1 [i_0 - 3]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            {
                var_21 += ((6622194322051399322 <= (21133 / 4844965213519600954)));
                var_22 = (((-(((arr_0 [20]) / 661578197)))));
            }
        }
    }
    #pragma endscop
}
