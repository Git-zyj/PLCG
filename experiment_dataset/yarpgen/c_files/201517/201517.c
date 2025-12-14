/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = ((0 ? 3649879197 : 0));
                    var_18 = 8172;
                }
            }
        }
        var_19 *= (3649879197 % 1702534082);
        arr_7 [i_0] = (4294967295 % 645088125);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((0 || (3649879197 == 1448557341)));
        var_20 = 0;
        arr_13 [i_3] = 0;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_21 -= (max((min(0, 0)), (0 ^ 14986649012046105351)));
        arr_16 [i_4] [i_4] = (min(18122810631356882732, ((min(2846409955, 4294967295)))));
    }
    var_22 = (min(var_22, (max(2846409955, (max((max(18122810631356882732, 0)), var_6))))));
    var_23 = ((var_0 ^ (((max((min(138, 1)), (min(77, 118))))))));
    #pragma endscop
}
