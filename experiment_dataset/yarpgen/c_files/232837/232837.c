/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-336851395 != ((min(var_2, var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_1] [i_0] [i_1] = (((arr_5 [i_0] [i_1] [i_1]) ? (arr_3 [i_1] [i_1] [i_1]) : (((((arr_5 [i_0] [i_0] [i_1]) ? 4294967295 : (arr_0 [i_0] [i_0])))))));
                    var_19 ^= (arr_5 [i_0] [i_1] [i_0]);
                }
                var_20 = (max(var_6, 6257010416439017375));
                arr_10 [i_1] [i_0] [i_1] = (((((arr_6 [i_1] [i_1] [i_1] [i_1]) ? var_16 : 743826291))) ? (0 * -7) : (max(6, (min(6, (arr_6 [i_1] [i_0] [i_1] [7]))))));
                arr_11 [i_1] = ((min((max((arr_2 [i_1] [i_1] [i_0]), 5925)), (arr_5 [7] [3] [i_1]))));
            }
        }
    }
    #pragma endscop
}
