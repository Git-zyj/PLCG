/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((~((-var_4 ? (var_8 || -3837905418052919889) : ((-17668 ? -7136657212387499865 : 68))))));
    var_12 = 43217;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = 252;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 ^= ((-(min(217, (~12142)))));
                    var_15 = ((((((arr_6 [i_0]) ? ((144080003703767040 ? -16 : 1)) : (~var_3)))) ? 0 : (((arr_1 [i_1] [i_2]) ? (arr_8 [i_2] [0] [0]) : (((-32767 - 1) ^ 1064057247))))));
                    var_16 = (((min((max((arr_6 [i_0]), (arr_2 [i_0] [i_2]))), var_10))) ? ((((arr_7 [i_0 - 1] [i_0 + 1] [6] [i_0 + 1]) >= (!0)))) : ((((((1 ? (arr_2 [8] [i_2]) : -15))) || 3479191401))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((-(arr_12 [i_0] [i_2] [i_2] [i_3] [i_3] [i_1]))))));
                                var_18 |= (arr_2 [i_0 + 1] [i_1]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_19 = (((arr_4 [i_0] [i_1] [i_5]) ? -964068163 : -114));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_7] [i_5] [i_5] [i_6] [15] [15] [i_6] = arr_16 [12] [i_1] [i_1] [2];
                            var_20 ^= (arr_9 [i_0 + 1] [i_0 - 1] [12]);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_21 = ((0 ? (arr_3 [4]) : (!1864440558)));
                            var_22 = ((+(((arr_9 [i_0] [i_6] [i_0]) ? 38287 : var_10))));
                            var_23 *= ((-(arr_3 [i_0 - 1])));
                        }
                        var_24 = (min(var_24, (arr_2 [i_5] [i_1])));
                    }
                    var_25 = (arr_7 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]);

                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_26 &= ((-6 ? (arr_2 [i_1] [i_1]) : (arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        arr_29 [i_0 + 1] = (arr_27 [i_0] [i_0] [i_0] [i_9]);
                        var_27 = (((arr_11 [i_0 + 1] [i_0 + 1] [i_9 + 1] [i_0 + 1] [1] [i_9]) ^ (arr_11 [i_0 - 1] [i_0 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9])));
                        arr_30 [8] [i_1] [i_5] [i_9 + 1] = -13390299646938800086;
                    }
                }
            }
        }
    }
    var_28 = (((((((var_6 ? var_0 : 3099567177079224166))) ? ((min(248, 1))) : (!var_4))) ^ (!var_7)));
    #pragma endscop
}
