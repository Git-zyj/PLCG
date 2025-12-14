/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_14);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((((var_8 ? ((43277 ? -4983024583748832449 : (arr_3 [i_0]))) : (((var_4 * (arr_0 [i_0] [i_0]))))))) ? (min(var_2, (max((arr_2 [i_0]), (arr_3 [i_0]))))) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = (max((arr_2 [i_0]), (((~(arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, ((min((arr_9 [18] [i_2] [20]), ((var_4 ? (arr_2 [i_0]) : (arr_2 [i_2]))))))));
                        var_18 = ((max((arr_10 [i_0] [i_0] [i_0] [i_0]), 53611)));
                        var_19 = (((((-(arr_2 [i_2])))) ? (7713 || var_3) : -57810));
                        arr_15 [i_3] [i_3] [i_1] [i_1] [i_0] [i_0] = (((((arr_14 [i_3] [i_1]) ? var_12 : ((min(var_8, (arr_0 [13] [i_1])))))) - (arr_8 [i_3] [20] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_0] = (((18446744073709551606 ? 23915 : 576179277326712832)));
                        arr_20 [i_0] [i_1] [i_0] [i_0] = (((!-var_14) % (min(2147483629, (arr_9 [9] [i_2] [i_1])))));
                        var_20 = (((arr_13 [8] [i_2] [i_1]) % -846346308));
                    }
                    arr_21 [14] [i_0] [14] [i_1] = (((arr_7 [i_1] [i_1] [i_1]) < -1283142539680949606));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_31 [i_8] [i_8] = (~-7713);
                        arr_32 [i_5] [i_6] [i_8] [i_5] [i_7] [i_8] = var_10;
                        arr_33 [i_8] = (arr_6 [7]);
                        var_21 = (((((arr_0 [i_5] [i_7 + 2]) ? ((((arr_22 [1]) ? var_9 : var_3))) : (max((arr_27 [i_6] [i_6] [i_7 - 1] [i_8]), 144115188071661568)))) >> (((max((arr_25 [0] [i_7 + 2] [i_7 - 1]), -402050789)) + 53))));
                    }
                }
            }
        }
        arr_34 [i_5] [i_5] = ((-(min((((arr_1 [i_5] [i_5]) ? var_9 : -7370525778359733890)), var_11))));
    }
    #pragma endscop
}
