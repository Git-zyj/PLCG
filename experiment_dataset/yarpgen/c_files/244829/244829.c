/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((1 && var_5) && (!var_15))), ((!(!var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] = (min(-770997879, (min((arr_6 [i_3] [i_1]), (236 ^ 18446744073709551615)))));
                            arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((-(min(((min(27829, 24576))), (max((-2147483647 - 1), 40965))))));
                        }
                    }
                }
                arr_11 [i_0] = ((((((arr_5 [i_1 - 1] [i_1]) >> (((arr_2 [i_0] [i_1]) + 16873))))) ? (max((arr_7 [i_0] [i_1 - 1] [i_1] [i_1]), (((32256 < (arr_1 [i_0])))))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_6] [i_4] [i_5] [i_6] = ((max((arr_14 [i_0] [i_0] [i_0] [i_0]), (((arr_6 [i_0] [i_1]) ? 770997896 : (arr_15 [i_0] [i_0] [i_1] [i_4] [i_5] [i_6]))))));
                                arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] = (((((arr_16 [i_4 + 1] [i_5 - 1] [i_4] [i_1 - 1] [i_6]) % (arr_16 [i_4 + 1] [i_5 - 1] [i_4] [i_1 - 1] [i_6]))) >= ((1 ? 1 : 770997903))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
