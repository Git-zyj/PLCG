/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_14 = (((27 << (4025289749 - 4025289744))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 &= (arr_0 [i_3] [i_3 - 1]);

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_16 = ((51616 != (((15682378720543436396 >= (((140682238 ? 1 : 32082))))))));
                            var_17 = ((-(((-32081 ? 8812700373195626759 : -2)))));
                        }
                        arr_15 [0] [i_1] [i_0] = ((221 ? 952657209 : 269677543));
                    }
                }
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
