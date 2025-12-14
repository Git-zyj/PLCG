/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-13975 ? 2147483623 : 49914));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((min((arr_1 [i_0]), (arr_1 [i_0]))));
                arr_5 [i_0] [9] [i_0] = 30083;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_0] [i_0] [i_1] = (((((arr_3 [i_0] [i_0]) ? (((min(1, 9)))) : (max(4193792, var_6)))) * ((0 % ((min((arr_0 [i_0]), var_1)))))));
                            var_16 = (min((min(var_2, -4193792)), ((((0 > (arr_6 [i_0] [i_1] [i_0] [i_1]))) ? (!49914) : 0))));
                            var_17 ^= var_11;
                        }
                    }
                }
            }
        }
    }
    var_18 ^= ((-(min(-4193792, 12268))));
    var_19 = ((((var_6 ? ((var_5 ? -78 : 4278190080)) : (!var_6))) & (((1 & ((min(var_3, var_7))))))));
    var_20 ^= 255;
    #pragma endscop
}
