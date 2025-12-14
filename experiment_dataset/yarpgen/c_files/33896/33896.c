/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_20 -= (max(296776616, 1380829715));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] |= (((arr_3 [i_0]) * (((26 >= (arr_0 [i_1 - 1]))))));
                        var_21 = 2;
                        arr_12 [i_1] = ((~(arr_10 [i_1] [i_0 + 1])));
                    }
                    arr_13 [6] [i_1] [i_0] = (min((((24912 & (arr_2 [i_0])))), (~4294967285)));
                }
            }
        }
    }
    var_22 = ((max(var_0, 1)));
    #pragma endscop
}
