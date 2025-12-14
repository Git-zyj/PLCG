/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((0 >= 28824), (max(var_3, var_3))))) ? var_7 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((62421 ? 7108065478614788534 : -5878685029509293104));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = ((((min(28821, (arr_0 [i_0 + 2])))) ^ ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))))));
                            var_15 = (min(var_15, -var_2));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_1] [i_3] [1] = ((((((var_9 ? (arr_9 [i_0] [i_3]) : (arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [10] [i_0 - 2]))))) ? (arr_11 [i_3] [i_3] [17]) : ((((arr_1 [i_2 + 1]) ^ (max((arr_1 [i_0 + 2]), (arr_12 [i_0]))))))));
                                var_16 = -28824;
                                arr_14 [i_3] [i_3] [i_3] [17] [12] = ((+(((arr_2 [i_0 - 2] [i_0 - 3]) ? (arr_2 [i_0 - 2] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 + 2])))));
                                var_17 = (min(((var_5 ? (arr_0 [i_0]) : (arr_9 [18] [i_3]))), 765130547907918925));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_0 - 2] [i_3] [i_2] [i_3] [16] = ((((min(((var_9 % (arr_3 [i_1] [i_1]))), (arr_15 [2] [i_0 + 2] [i_0 + 2] [i_2] [i_2 - 2] [i_3])))) ? (((var_2 * 0) * (arr_3 [14] [i_0 - 2]))) : (var_6 >= var_6)));
                                var_18 = ((!((var_1 || (!var_1)))));
                                arr_18 [i_3] [i_1] [i_2] [3] [3] = ((5878685029509293104 ^ (~2320295917876016392)));
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0 + 2] [i_3] [i_2] [i_3] [i_3] [i_3] = ((~(min(((var_2 ? var_8 : var_2)), (max(28824, var_2))))));
                                var_19 = -765130547907918939;
                            }
                            var_20 = ((-var_1 ? ((((var_1 || (arr_7 [i_0 + 2] [i_1]))))) : ((~(arr_7 [i_0 - 2] [i_1])))));
                        }
                    }
                }
                arr_22 [i_0 + 2] [i_0 + 2] = (arr_20 [i_1] [i_1] [i_1] [1] [i_1]);
                var_21 = (max(var_21, (((((((arr_16 [i_0 + 1]) > (arr_16 [i_0 - 2])))) * (!1966483826))))));
            }
        }
    }
    var_22 = (min((min((!-28826), (max(var_7, var_11)))), (~var_10)));
    #pragma endscop
}
