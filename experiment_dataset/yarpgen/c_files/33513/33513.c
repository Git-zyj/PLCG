/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (max(((26009 / (~4232712300))), ((min((arr_1 [i_0 + 1]), 1)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (0 && 4486007441326080);
                    arr_9 [i_2] [i_1 - 2] [i_0] = (max(((min((arr_6 [i_0]), 4486007441326107))), ((((((-26010 < (arr_5 [i_1] [8])))) == 1)))));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] = ((~((0 ? (2147483647 && 247) : 29016))));
        var_16 = (min((1 / 1), (0 / 1)));
        arr_14 [i_3 + 2] [1] = ((((127 != (arr_11 [i_3 + 2]))) ? (!0) : ((54 ^ (1 * -32)))));
        arr_15 [i_3 + 1] = (min(-16243, 1));
        arr_16 [i_3] = (arr_11 [i_3 - 1]);
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            {
                arr_21 [i_5 + 1] [i_5] = (arr_19 [i_4 - 1] [i_5 + 4]);

                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    var_17 = 254313023;
                    var_18 = -57;
                }
                var_19 = ((~(((min(29016, 0))))));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_29 [i_4] [i_5 - 1] [i_7] = (((110 ? 6172193168851971172 : 3191562376)));
                            var_20 = (((-(arr_28 [i_5 + 1] [i_5]))) / ((((1651919117 <= 18446744073709551615) <= ((11249259227315378084 ? (arr_17 [i_4]) : -12956))))));
                        }
                    }
                }
                arr_30 [1] [i_5 + 4] [i_4 - 1] = ((((~(arr_28 [i_5 - 1] [i_4])))) ? (110 && 127) : (((561506668626569656 ? 1160736051 : 0))));
            }
        }
    }
    #pragma endscop
}
