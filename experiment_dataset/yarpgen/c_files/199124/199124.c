/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 258481322323516750;
    var_17 = (min(var_17, 18188262751386034865));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = 258481322323516751;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = 258481322323516762;
                        var_20 = 258481322323516750;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_21 = 3445621528676096716;
                            var_22 = 18188262751386034864;
                            var_23 = 4036451150;
                        }
                        arr_15 [i_3] = (-2147483647 - 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
