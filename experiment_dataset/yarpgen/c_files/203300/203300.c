/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((~((984834626 ? 0 : 1841304562)))));
    var_16 = ((-26 ? ((1841304571 | (((540431955284459520 ? 65535 : -32754))))) : (~4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = (((min(32758, ((var_3 << (var_1 - 111))))) ^ ((((arr_3 [i_0] [i_2]) - ((min(var_8, 65513))))))));
                    arr_11 [9] [i_2] [i_0] [i_0] = (((((((1536 ? (arr_4 [i_1]) : 55533)) ^ ((max(var_11, -1547)))))) ^ (((arr_7 [i_0] [i_1] [i_2]) & var_2))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_17 = ((~(max((arr_8 [i_0] [i_0] [i_0]), ((var_11 ? (arr_9 [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_3])))))));
                    arr_16 [i_3] [i_3] |= ((((((4 * var_4) ? 2453662737 : (min(65526, (arr_14 [i_0] [i_0] [i_0] [i_0])))))) ? 2453662737 : 5574));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_18 = var_11;
                    arr_19 [i_0] [i_1] &= (arr_9 [i_4] [i_1]);
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_19 &= -15;
                                arr_27 [i_0] [i_1] [i_5] [i_6] [i_7] = (min((((var_5 ? 3 : -6332411633010420898))), 1));
                                var_20 ^= ((50299 % (var_5 && 65513)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_21 = ((~(((-1536 && -32754) ? (((max(var_10, 65519)))) : ((4294967293 ? var_13 : (arr_20 [i_1] [i_1] [i_8])))))));
                            arr_32 [i_9] = (((((((0 << (((arr_31 [i_0] [i_1] [i_8] [12] [i_9]) - 7012))))) ? (arr_23 [i_0] [i_0] [i_8] [0]) : (arr_8 [5] [i_1] [i_8])))) ? (min(((var_11 ? -30119 : var_5)), ((max(37, 65499))))) : ((min((arr_15 [i_8] [i_9]), 1))));
                            var_22 = -13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
