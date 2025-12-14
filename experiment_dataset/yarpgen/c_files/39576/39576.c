/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((9389412764408161633 <= 1342640764) ? (((9389412764408161641 ? 48752 : 1))) : ((var_6 ? 12377176912874499133 : var_8))));
    var_11 = ((-(((min(96, 48772))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [15] [i_0] = ((((max((21873 - 12377176912874499113), 6069567160835052484))) ? (max(9057331309301389982, 11)) : ((((~(arr_3 [i_1] [15] [i_0]))) * ((188 ? 1736550594 : (arr_3 [i_1] [i_1] [i_0])))))));
                arr_5 [i_0] [i_0] [i_0] = ((204 ? var_8 : ((((arr_1 [i_0]) && (arr_2 [3] [2]))))));
            }
        }
    }
    var_12 = max(((((19839 - 64273) ? 12377176912874499109 : (17 + var_5)))), ((((min(var_8, var_8))) ? (-24058 || -3116487387632391973) : (36 ^ 4718734914835758773))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_4] [i_5 + 1] [18] [i_4] [i_3] [i_4] = (((arr_13 [i_6 + 2] [i_5 + 1] [i_5 + 1] [i_4 + 2]) ? (((arr_15 [i_3] [i_5 + 1] [i_5 + 1] [i_6 - 3] [i_6] [i_4]) ? (((!(arr_9 [i_5])))) : (((var_7 <= (arr_2 [i_2] [i_3])))))) : (max(((((arr_16 [i_2] [i_3]) == 64267))), (arr_0 [i_2])))));
                                arr_20 [i_4] = (arr_8 [i_2] [i_6]);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_13 = (max(var_13, (arr_16 [i_4] [i_7])));
                        arr_24 [i_2] [i_2] [i_4] [i_7] = 1889;
                        arr_25 [i_4] [i_7] = var_0;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_14 = (arr_16 [i_4 - 1] [i_3]);
                        var_15 = ((!((var_0 || (var_1 > 188)))));
                    }
                    var_16 |= (16783 + 1267);
                    arr_28 [i_4] = (max((!-123), ((~(min(562709032, (arr_23 [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
