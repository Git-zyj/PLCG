/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (((max((((var_2 ? var_4 : -4))), (var_10 - 4205360851))) < ((((-53 | 1) - 128)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, 1));
                            var_16 = var_7;
                            arr_15 [i_0] = (max(((((max((arr_3 [i_0] [i_1] [i_0]), -33))) ? (((max(1, 1)))) : 312537546462746307)), -var_11));
                            var_17 = (max((((128 ? 33 : -734541195))), (max(13649628910380341741, (arr_12 [i_0] [i_1] [i_2])))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_18 = var_1;
                            arr_20 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = ((~(max(4003124011, 195))));
                            var_19 = max(0, (max(291843285, 57)));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] = max((arr_9 [i_0 - 3]), ((((((arr_12 [i_6] [i_1] [i_0 + 1]) + 49))) * (((arr_1 [i_6]) + -56)))));
                            arr_24 [i_0] = ((((!(arr_12 [i_0 - 2] [i_0 - 3] [i_0]))) ? ((1820833417 ? 1 : (arr_12 [i_0 - 2] [i_0 - 1] [i_0]))) : ((max((arr_12 [i_0 - 2] [i_0] [i_0 - 3]), (arr_12 [i_0 - 2] [i_0] [i_0]))))));
                            arr_25 [i_0 - 1] [i_1] [i_2] [i_3] [i_0] [i_2] [i_2] = (((((var_11 ? (arr_9 [i_0 - 1]) : (arr_5 [i_0 - 2])))) ? (max((max(2595676310, var_7)), (arr_3 [i_0 + 1] [1] [i_0]))) : -19341));
                            var_20 = (max((1699290983 / 1), (((~(-127 - 1))))));
                            arr_26 [i_0 - 1] [i_1] [i_2] [0] [i_0] [8] = max(((max(107, 2))), (max(86, 15)));
                        }
                        arr_27 [i_1] [i_2] [i_0] [i_0] [i_1] [i_0] = (((max(0, 11671030488086512587)) != (((((arr_13 [i_3] [i_3] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [6]) < ((max(20993, var_10)))))))));
                    }
                }
            }
        }
    }
    var_21 -= (max((max(-20993, 69253322)), ((max((-59 <= 8815), var_5)))));
    #pragma endscop
}
