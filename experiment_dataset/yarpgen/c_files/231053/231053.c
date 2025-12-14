/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((~(((!(arr_1 [10] [10]))))));
        arr_2 [i_0] = ((((-1 & (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]));
        var_13 = (~32);
        arr_3 [5] = (arr_1 [6] [i_0]);
    }
    var_14 &= max(var_7, (max((~8900027544124324361), 8900027544124324361)));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_5 [i_1]) ? (arr_4 [i_1]) : (5195595929765668718 & 8900027544124324361)));
        arr_7 [i_1] [i_1] &= 9546716529585227244;
        arr_8 [14] = ((-608941888 ? 9546716529585227272 : var_2));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_15 = ((8900027544124324361 ? (max(var_1, 217)) : ((9546716529585227255 ? (arr_9 [i_2]) : var_1))));
        arr_12 [i_2] = ((var_11 ? ((+((9780096485951973114 ? (arr_11 [i_2]) : (arr_9 [0]))))) : 8900027544124324372));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (min(676450370, 9780096485951973114));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_16 = (max(9780096485951973135, ((-(arr_17 [i_4])))));

                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            arr_28 [i_4] [8] = (min(var_8, -14957376734284186282));
                            arr_29 [i_4] [10] [i_5] [i_4] [i_4] = (((var_9 / (arr_17 [i_4]))) - (max(var_3, var_2)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
