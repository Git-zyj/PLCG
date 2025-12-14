/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_9 % (((var_2 & 6) ? 6831 : ((1 ? 58704 : var_6))))));
    var_18 -= var_1;
    var_19 = (1 > 1);

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = 144080003703767040;
                    var_20 ^= ((((((((4161536 / (arr_3 [i_0] [i_0])))) ? (arr_4 [i_0] [i_1 - 3] [6] [i_2]) : (arr_1 [i_1 - 3])))) ? 65112 : (2147483647 >= 36028797018963968)));
                }
            }
        }
        var_21 -= ((!((((arr_1 [i_0]) ? (((3 <= (-127 - 1)))) : (arr_4 [i_0 - 2] [i_0 - 2] [i_0] [i_0]))))));
        var_22 = (max(var_22, 9063770246072556621));
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_23 *= (((((arr_1 [i_3 - 2]) ? 639523907 : (arr_1 [i_3 - 2]))) >> ((((1 ? ((-15 ? (arr_8 [i_3]) : 1)) : (-106 || 25))) - 41503))));
        arr_10 [i_3] [i_3] = min(18446744073709551615, 65535);
        arr_11 [i_3] &= ((min(0, 27161)));
    }
    #pragma endscop
}
