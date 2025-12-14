/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((-(arr_2 [i_0 + 1] [i_1 - 2] [i_1 + 1]))))) ? (~2828) : ((11498 ? 1 : ((var_1 ? (arr_1 [i_0 + 2]) : 36445))))));
                var_12 = (((arr_1 [i_0 + 3]) ? ((-(((29092 > (arr_4 [i_0 - 3] [i_0] [i_1])))))) : 1));
                var_13 += 36444;
            }
        }
    }
    var_14 = ((var_8 ? ((var_6 ? var_5 : -1)) : 29115));
    var_15 = ((-(-48 - var_10)));
    var_16 = (29092 ? 13958421531198075404 : 16173);
    #pragma endscop
}
