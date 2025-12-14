/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((((max((arr_5 [6] [2] [i_0]), (arr_5 [i_0] [i_1] [i_2])))) || (!32768)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_21 = (max(((((~-1475869877) ? var_15 : (arr_4 [i_1] [i_0])))), (max(17999269258429732434, (arr_9 [1] [i_1])))));
                        arr_13 [i_3] [i_2] [4] [4] = 4286578688;
                        var_22 = (((max(77, (arr_0 [i_1])))) ? var_7 : (arr_3 [i_1] [i_1]));
                    }
                    arr_14 [0] [12] [6] [i_2] = (max(((-1475869895 ? 8125027379946902252 : 246095577)), (192196543 - 126)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                var_23 = -var_19;
                var_24 = 95;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            {
                var_25 = (max(3632853702, 144115188075790336));
                var_26 = -16384;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_33 [i_10] [i_9] [i_9] [2] = ((((max((arr_2 [i_8] [i_8]), (arr_3 [i_9] [i_9])))) ? ((((!(arr_3 [i_8] [i_10]))))) : ((var_0 ? 36 : (arr_3 [i_8] [i_8])))));
                    var_27 = (arr_4 [i_8] [i_10]);
                    var_28 = ((var_8 ? var_12 : (max(((((arr_4 [i_8] [12]) || (arr_26 [i_9])))), (arr_10 [i_8] [i_8] [i_9] [i_10])))));
                    arr_34 [i_9] [7] [i_10] = ((max((((16384 << (164 - 164))), (arr_1 [i_9])))));
                }
            }
        }
    }
    #pragma endscop
}
