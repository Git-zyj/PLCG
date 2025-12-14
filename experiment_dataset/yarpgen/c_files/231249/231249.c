/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = 3472164659;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_20 = (((((var_7 ? (arr_7 [i_0]) : (arr_2 [i_0] [i_1])))) && ((((arr_4 [i_0] [i_0]) ? 3472164671 : (arr_4 [i_0] [i_0]))))));
            var_21 = (((arr_6 [i_0 + 2] [i_0 - 1]) ? (arr_6 [i_0 + 2] [i_0 + 4]) : (arr_6 [i_0 - 3] [i_0 - 1])));
        }
    }
    var_22 = (((((((min(var_9, 1335247038))) && 1))) % ((((var_5 ? var_14 : var_0))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_23 = (max(var_23, (((((((((arr_5 [i_5] [16]) << (8814 - 8810)))) ? (93 & 0) : (arr_15 [i_2 + 1] [i_3] [i_4] [8]))) != ((((min(-8814, 35627))) ? (arr_14 [i_5] [2] [2]) : ((((0 > (arr_7 [i_2]))))))))))));
                        var_24 = (arr_6 [i_4] [i_4]);
                    }
                    arr_19 [i_4] [i_2] [i_2 - 2] [i_2] = min(-9023969855165059861, (arr_17 [i_4]));
                    var_25 = 0;
                    var_26 = (((+-6796) ? ((35627 ? ((max(1, (arr_16 [i_2 - 2] [i_3] [i_4] [i_4])))) : (((1 && (arr_18 [i_2] [i_3] [12] [12] [i_2])))))) : (((arr_9 [i_2] [i_2]) ^ ((109 ? 32759 : 1))))));
                    var_27 &= (arr_0 [i_2] [i_2]);
                }
            }
        }
    }
    var_28 = (min(var_28, var_0));
    #pragma endscop
}
