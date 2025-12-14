/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = ((-(min((arr_7 [18] [i_1 - 1] [16] [i_2]), (((-7075013344422645650 || (arr_0 [13]))))))));
                    arr_9 [10] = (~var_4);
                    arr_10 [i_2] [12] [12] [i_0] &= (arr_0 [i_0]);
                    arr_11 [i_2 + 1] [i_0] [i_0] [1] = 85;
                }
                arr_12 [16] = (min((((min(var_9, (arr_1 [i_1 - 1] [i_0 - 1]))) << (var_0 - 19))), 1));
                arr_13 [8] [i_1] [8] |= ((-56 + (arr_2 [i_1] [i_1 - 1] [i_0])));
            }
        }
    }
    var_14 = 56;
    #pragma endscop
}
