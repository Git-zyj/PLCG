/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 = 0;
                        var_13 = -16926845828006247204;
                    }
                }
            }
        }
        arr_13 [i_0 + 1] = (min((arr_8 [i_0] [i_0]), (((arr_9 [4]) * 4))));
        var_14 = (min(3431788402818150820, 15014955670891400800));
        var_15 = (max((arr_10 [i_0] [i_0] [i_0] [i_0] [9]), 48));
    }
    var_16 = (15014955670891400795 != var_4);
    #pragma endscop
}
