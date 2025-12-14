/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [11] [i_0] = ((~((((((arr_5 [i_1] [i_1]) ? 234881024 : (arr_5 [i_2] [i_1]))) > (((var_4 ? (arr_3 [i_0] [i_0 - 2] [i_0 - 1]) : 32759))))))));
                    var_11 = (((min(var_3, (arr_6 [i_0 - 1] [i_0 - 1]))) > (((arr_6 [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 - 2] [i_0 + 1]) : -30773))));
                    var_12 = var_10;
                    var_13 = (1173036372 < -1);
                    arr_10 [13] [i_2] = (var_7 * 0);
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
