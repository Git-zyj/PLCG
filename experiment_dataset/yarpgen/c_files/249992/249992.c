/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((~(max(1, var_7))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = ((((min((min((arr_0 [i_0]), (arr_0 [i_0]))), ((((arr_0 [i_0 - 1]) == var_6)))))) || ((((arr_0 [i_0]) ^ (max((arr_0 [18]), -2843185477555288418)))))));
        var_19 = ((((((arr_1 [i_0]) % 1996442141)))) && (((arr_0 [i_0]) <= ((~(arr_0 [i_0]))))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_20 = (1996442162 <= ((~((((arr_1 [1]) != (arr_1 [i_0 - 1])))))));
            arr_4 [i_1] [i_0] [i_1] = ((((min((-1996442142 && -1996442137), 9188))) - (((((arr_0 [i_0]) << (((arr_1 [i_0]) - 19618))))))));
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = 1;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_21 ^= (arr_10 [i_4]);
                        var_22 ^= var_11;
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, (((~(((1996442142 == (~var_11)))))))));
    var_24 = var_14;
    #pragma endscop
}
