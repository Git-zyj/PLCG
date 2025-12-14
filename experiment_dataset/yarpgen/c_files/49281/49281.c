/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_3, (max(11, 4294967284)));
    var_11 ^= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (((((arr_2 [i_0]) ? 4294967272 : 23)) == 0));
                    var_12 = (max(var_12, ((((var_2 << (((arr_8 [i_0] [i_1]) - 761687199)))) ^ (((~4294967265) ? 11 : (min(-282628986, 229376))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                var_13 = min((((!((((arr_12 [i_3]) ? 8257536 : 4286709759)))))), ((max(var_3, var_6))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_14 = 4286709780;
                            arr_19 [i_3] [i_4] [i_6] [i_6] [i_3] &= (((((arr_13 [i_6] [i_3] [i_3]) & (min(var_4, var_2)))) < (((arr_17 [i_3] [i_4] [i_5]) - (((-1879289554 ? var_4 : 902544084)))))));
                        }
                    }
                }
                var_15 = 4294967273;
            }
        }
    }
    #pragma endscop
}
