/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 = ((!((max(6189337563175743486, var_13)))));
                        var_15 = (min(var_15, ((((1792 == 6189337563175743483) ? -3686491721 : (max(3686491743, var_5)))))));
                        var_16 = (!6189337563175743486);
                        var_17 = (!-6189337563175743484);
                    }
                }
            }
        }
        var_18 *= (max((1910648368 % 195608089), (((var_11 ? 70 : 243)))));
    }
    var_19 = ((!(((var_11 ? (!var_5) : (!73))))));
    #pragma endscop
}
