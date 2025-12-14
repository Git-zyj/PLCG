/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((-(arr_6 [i_0 - 1] [i_0 - 1] [7]))))));
                    var_16 = ((!((((~var_5) ^ (max(var_13, 38595)))))));
                    var_17 = (max(var_17, (+-0)));
                    var_18 = (min(var_18, ((max(253, ((((arr_0 [i_0]) == (arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 + 3])))))))));
                }
            }
        }
        var_19 = (arr_7 [i_0]);
        var_20 = (arr_3 [i_0] [5] [12]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_10 [16] = ((((arr_9 [i_3]) % (arr_9 [i_3]))) * (((arr_9 [i_3]) ^ (arr_9 [i_3]))));
        arr_11 [1] |= arr_9 [i_3];
        var_21 = (((arr_9 [i_3]) ^ (~255)));
        arr_12 [0] [0] = ((var_5 >> (var_0 - 2411794769)));
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_22 = (min(var_22, (arr_0 [1])));
            var_23 = (arr_17 [i_4] [i_4]);
            var_24 = ((((((arr_9 [i_4 + 1]) ? (!26916) : 0))) ? (7657501234140133427 == 0) : (arr_4 [i_4] [11] [1] [5])));
        }
        var_25 = (arr_0 [i_4]);
    }
    var_26 = var_5;
    var_27 ^= var_8;
    #pragma endscop
}
