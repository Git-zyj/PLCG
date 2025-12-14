/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_19 = (((max((min((arr_6 [1] [7] [i_3]), var_18)), 5)) < (max((min((arr_9 [i_3] [i_3] [i_2]), (arr_10 [i_0] [i_1] [i_0] [1]))), (arr_12 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4])))));
                                var_20 = (min(var_20, ((max(5, 9245220891934209015)))));
                                var_21 |= (arr_2 [i_0] [4] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 ^= arr_13 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2] [i_6] [i_6] [i_6];
                                var_23 += var_5;
                            }
                        }
                    }
                    var_24 = (arr_8 [i_1] [i_1] [11]);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_25 ^= (max(((9245220891934209015 >> (2282279103145495281 - 2282279103145495268))), 9));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (((((((-2282279103145495262 ? -1279054794 : 65452))) ? (max(var_11, (arr_5 [12] [i_0]))) : (min(var_8, (arr_2 [i_0] [i_1] [5]))))) < (((min(var_12, (arr_3 [i_0])))))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_26 = (max(2282279103145495258, 108));
                    var_27 -= (1073741823 ^ 1);
                }
                arr_23 [i_0] = arr_0 [i_0];
                var_28 = (arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0] [i_0]);
            }
        }
    }
    var_29 = var_0;
    var_30 = var_6;
    #pragma endscop
}
