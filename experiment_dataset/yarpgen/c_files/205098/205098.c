/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (min(var_21, (((((((65533 ? 14 : 15)))) ? 16 : 3584)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((((17 ? 1031544945 : 18446744073709551579))) ? (((1 ? 30693 : 0))) : 18446744073709551591))) ? ((1 ? ((33217 ? 18446744073709551606 : 255)) : (((2996296920 ? -11645 : 41322))))) : -1));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] = 1438567123;
                    arr_9 [i_0] = 23026;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_1] [i_0] = 1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = (((((-((24 ? 19 : 1))))) ? ((((-23618 ? 556340728 : 65532)))) : ((-21 ? 18446744073709551604 : (((122 ? 1 : 36)))))));
                                var_23 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
