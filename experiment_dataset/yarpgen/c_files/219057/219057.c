/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = (13746709209205147081 / 6);

                        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_1] = (((((4398046511072 ? 122 : 79))) ? ((100 ? 30049 : 120)) : (936377658003424195 <= var_9)));
                            var_13 = (max(var_13, 85));
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [6] [i_5] = ((1 ? var_10 : 170517811595026606));
                            var_14 = ((2047 ? (((2 ? var_4 : var_7))) : (arr_2 [i_1] [i_1 + 3])));
                        }
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_2 + 2] [i_6] = ((1 + (var_3 - 16759)));
                        var_15 ^= (min(((((arr_3 [i_0] [i_6 + 1] [i_6 - 1]) / var_10))), ((-29402 ? (((arr_8 [i_1 + 3] [i_2] [i_1 + 3] [i_0]) ? (arr_8 [i_6] [i_6] [i_6] [i_6 - 1]) : 13325795302173583849)) : 123))));
                    }
                    var_16 = ((((((~-95) ^ (arr_9 [i_1] [i_1 + 3] [i_2 + 3] [i_2 - 1] [i_2 + 3])))) ^ ((13 ? ((10 ? 2657821899 : -7312112074976706954)) : ((min(var_0, 19)))))));
                    var_17 = 5120948771535967761;
                }
            }
        }
    }
    var_18 = (min((!var_6), (var_5 <= var_8)));
    #pragma endscop
}
