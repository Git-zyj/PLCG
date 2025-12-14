/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = ((!(((-1 / ((var_15 ? 935137152 : 3359830144)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_6 [i_0] = (((((+((max((arr_0 [i_1]), 0)))))) ? (arr_2 [i_0]) : ((min(var_13, ((((arr_0 [i_0]) <= var_5))))))));
                    arr_7 [i_2] [i_1] [i_0] = var_9;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_19 -= 1;
                    var_20 = (min(19827, 2547600325));
                    var_21 = ((+((((0 << 1) < (var_12 % 935137152))))));
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_22 = (((max(var_12, 4294967287)) % (1 * 3351383781)));
                    var_23 = ((-9 ? -1153490775 : 3814349952));
                    arr_15 [9] [i_1] [10] [1] &= (((-((-115 ? 1 : var_14)))));
                    arr_16 [i_0] [i_0] [i_0] &= (!var_1);
                }
                var_24 *= ((((2147483640 > 1318961035) > -9223372036854775807)) ? -1 : (max(-1153490775, 2147483640)));
            }
        }
    }
    #pragma endscop
}
