/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((max((arr_0 [i_0] [i_0]), (3287574985284586170 - 255))));
        var_15 = ((~(arr_2 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_14 [i_2] = (!1);
                    var_16 ^= (((((((min(-3287574985284586176, 0))) ? (arr_11 [i_1] [i_2] [i_3] [i_3]) : 1))) * (((arr_9 [i_3] [i_3] [i_3]) | (~8859420782694740427)))));
                    var_17 = ((((max(((!(arr_0 [i_1] [i_2]))), (112 == var_14)))) > (((var_5 != ((min(var_1, 18))))))));
                    arr_15 [i_2] [i_2 + 1] [i_3] = (max(((32767 ? 5614805912916767572 : 1)), (((~(~128))))));
                }
            }
        }
    }
    #pragma endscop
}
