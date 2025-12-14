/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 977838566;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_13 = 31;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 1] [i_0] [i_2 - 1] [i_3] = 31;

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_14 |= (arr_3 [i_2]);
                            var_15 = ((202 ? (arr_3 [i_0 - 3]) : -123));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_16 = 65535;
                            var_17 ^= 90;
                            var_18 = (max(var_18, ((((31838 && 6666858378980710012) && (((var_7 ? 31 : 65535))))))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_18 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 3] [i_0 + 1] [i_0] = (arr_16 [i_0] [i_1 - 1] [i_0] [i_6] [i_1] [4]);
                            var_19 -= 1;
                            var_20 -= (arr_10 [i_0 + 2] [i_6] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
