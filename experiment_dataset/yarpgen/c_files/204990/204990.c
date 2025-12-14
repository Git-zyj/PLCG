/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [i_0] = (min(((33505 ? 9223372036854775801 : 16598046620756491940)), -9466));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = 43382;
                                arr_14 [i_4] [i_4] [i_3] [i_2] [i_2 - 1] [i_4] [i_0] = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_0]);
                                var_15 = (min(var_15, (((~((max((arr_1 [i_2] [i_2 - 4]), (arr_1 [i_0] [i_2 + 3])))))))));
                                arr_15 [i_0] [i_4] = ((((max((arr_10 [i_0] [14] [i_2] [i_0]), 36789))) ? (arr_10 [i_0] [i_2] [i_0] [i_3]) : (((arr_10 [i_1] [i_1] [i_1] [i_1]) ? 9608318219159283046 : (arr_10 [i_1] [i_2 + 1] [i_3] [11])))));
                                var_16 = ((((arr_13 [i_4 - 1] [10] [i_4 - 1] [14] [i_4] [i_4] [i_4]) & (arr_5 [i_0] [i_2 + 3] [i_4 + 1] [i_4]))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_0] = (arr_7 [8]);
                }
                for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = (((((0 ? var_4 : (arr_11 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0])))) || (((var_0 ? 22147 : (arr_2 [i_5 - 3] [i_5 - 3] [i_5 + 1]))))));
                    var_17 += (max((min(-1, (arr_2 [13] [i_5 - 4] [i_5]))), (((!(arr_2 [2] [i_5 + 3] [i_5]))))));
                    var_18 = (max(var_18, (((arr_17 [i_5 - 3]) ? var_9 : (arr_17 [i_5 + 3])))));
                    var_19 = var_8;
                    var_20 ^= (75 || (arr_10 [i_0] [i_1] [i_0] [i_5 - 2]));
                }
                arr_22 [i_1] = (max((27 <= -64), (111 || 16598046620756491940)));
                arr_23 [i_0] [i_0] = 31183;
            }
        }
    }
    #pragma endscop
}
