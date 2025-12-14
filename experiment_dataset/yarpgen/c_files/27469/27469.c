/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((!((((492751299728584419 ^ 0) ? var_0 : (!1))))));
        var_15 = (max(var_15, 8638255012702563992));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_16 ^= ((-((((65531 < 9808489061006987624) == var_6)))));
                        var_17 = (max(var_17, (((-(arr_8 [i_2] [i_1]))))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_18 ^= ((!1) != ((65531 ? 2655272015155802363 : (!9808489061006987624))));
                            var_19 = 65531;
                        }
                        var_20 = (min(((var_10 + (((arr_4 [5]) * 0)))), (((max(2147483647, 195))))));

                        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_21 = (3439481086826494334 <= 2018705627);
                            var_22 = (min(var_22, ((max(-var_6, ((-(min(1, 3205565298062368646)))))))));
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((115 ? 18446744073709551607 : 70368677068800));
                            var_24 = (arr_13 [i_1] [i_1] [i_1]);
                            var_25 = 1;
                            var_26 *= (((min(1, (min(-1, (arr_16 [i_6] [i_2] [i_2] [i_1] [i_1 - 1] [i_0]))))) ^ ((((((max(32740, (arr_8 [i_6] [i_3]))))) != 3582877770)))));
                            var_27 = ((-(min(9808489061006987624, ((~(arr_6 [i_1])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_28 = ((((((min(1381812507862582378, var_3)) - (var_9 - 1)))) >= ((-(max((arr_6 [6]), 18446744073709551604))))));
        var_29 = (arr_10 [6] [6] [6] [i_7]);
    }
    #pragma endscop
}
