/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = (min(var_13, ((((var_3 || 40) & 31389)))));
                    arr_7 [i_0] [i_0] = var_9;
                }
                var_14 = ((~(((arr_2 [i_0] [i_1]) ? 64013 : var_3))));
            }
        }
    }
    var_15 = (((min(var_0, var_11))) ? (((min(var_2, 6212159481681611709)))) : var_6);
    var_16 = var_10;
    var_17 = ((~((-(var_5 & 640875442)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_18 |= (((((7 == (arr_12 [8] [i_3] [8]))))) + (((arr_12 [i_3] [i_4] [4]) | (arr_12 [i_4] [i_4] [18]))));
                arr_16 [i_4] [i_4] [i_4] = 11583742055529453531;
            }
        }
    }
    #pragma endscop
}
