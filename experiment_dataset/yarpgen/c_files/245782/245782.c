/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 -= (max((max((arr_0 [i_1 - 1] [18]), -657264765)), ((-(arr_0 [i_1 - 1] [2])))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_11 *= (arr_2 [18]);
                    var_12 = (min(var_12, ((min(((4705461502909956162 == (max((arr_3 [i_1]), var_8)))), (((((var_1 >> (3986699664048913798 - 3986699664048913793)))) && ((!(arr_1 [2]))))))))));
                    var_13 ^= (min(657264765, var_4));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_14 ^= ((min(2006398540, var_4)) | (!var_7));
                    var_15 = ((max((max(1, 2288568756)), ((max(-657264742, var_9))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                                var_16 ^= var_8;
                                arr_17 [i_5] [i_3] [i_3] [i_3] [i_1] [i_0] &= ((((arr_12 [i_5 - 1] [i_5 + 1] [i_1 - 1]) % (arr_12 [i_5 + 1] [i_5 - 1] [i_1 - 1]))));
                            }
                        }
                    }
                    arr_18 [i_1 - 1] [i_0] = (~var_8);
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_17 -= ((min(2006398540, var_9)));
                    var_18 = ((max(var_6, ((((-657264765 + 2147483647) >> (-657264773 + 657264782)))))));
                    var_19 |= (((((min(var_8, (arr_3 [21]))))) <= 1269627798));
                    arr_23 [i_0] = (~-657264765);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_20 = (max((-13401 - var_5), var_0));
                    arr_28 [i_0] [i_0] = 4111;
                    var_21 |= (max(var_3, (((((var_3 ? var_5 : (arr_9 [i_0] [i_0] [i_0])))) ? -1269627812 : var_1))));
                    var_22 = (max(((((2006398537 ? 2288568758 : 2288568773)))), ((((max(var_7, 2006398537))) ? 1269627812 : (max(var_3, (arr_9 [i_7] [i_7] [i_7])))))));
                    var_23 = (max(((((((44 ? -547615656 : (arr_27 [i_7] [i_0])))) ? (((!(arr_8 [i_0] [i_0] [i_0] [i_7])))) : -var_3))), ((max(2288568758, var_0)))));
                }
            }
        }
    }
    var_24 = min(var_9, var_4);
    var_25 = ((((min(2006398540, var_6)) / 212)));
    var_26 = (min((max(var_4, var_2)), (~44)));
    #pragma endscop
}
