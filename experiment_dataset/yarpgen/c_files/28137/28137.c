/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (1 != 16173199037777129779);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_2] [i_2] = (((((((((arr_0 [i_0] [i_1]) ? 7428268688503826077 : -952551221))) ? (((8 ? var_14 : -11212))) : (min(-120, 16173199037777129779))))) ? var_15 : var_11));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            var_17 = ((((239786121 ? 9551883269206523219 : 10394956288452907595)) - ((((32768 % 4292870144) * ((((arr_8 [i_0] [i_1] [10] [i_2] [i_2] [i_4]) / var_9))))))));
                            var_18 ^= ((((3792798763510953203 ? (arr_8 [11] [9] [i_2] [i_2] [i_1] [i_0]) : var_3)) - (952551221 > 39197)));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            var_19 = (min(var_19, var_1));
                            var_20 *= (arr_10 [i_0] [i_0]);
                        }
                        var_21 += 1952305986166269928;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_22 &= 1;
                        var_23 = (((((var_11 ? var_10 : (arr_1 [i_6])))) ? (var_6 < 11018475385205725539) : (~var_6)));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_24 = var_13;
                        var_25 = (arr_9 [i_7]);
                        var_26 = (arr_16 [5] [i_1] [8]);
                        var_27 ^= (((arr_4 [i_7] [i_0] [i_1] [i_0]) == -2194336269));
                    }
                }
            }
        }
    }
    var_28 = 16173199037777129779;
    var_29 = (((((var_5 >> var_15) <= var_9)) ? var_6 : 1));
    #pragma endscop
}
