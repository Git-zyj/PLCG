/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= min(28672, (((min(28672, 1)))));
    var_20 = 1;
    var_21 = (!3948394988);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_22 = ((!(~38971)));
                    arr_6 [i_2] [i_0] [i_0] [1] = (~-46355);
                    var_23 = (28691 >= 161694644);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_3] = 22819;
                    arr_11 [i_0] [i_1 + 1] [i_0] = ((-((251 ? 25 : 147))));
                    var_24 = (max(var_24, (((-13951148703931089280 == (~28697))))));
                }
                var_25 = (min(var_25, (((-((max(-11927, 1))))))));
                var_26 = -4556376740509979831;
            }
        }
    }
    #pragma endscop
}
