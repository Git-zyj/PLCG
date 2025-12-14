/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((51646 ? 43519 : var_7))) ? (!var_8) : var_2))) ? var_17 : ((-24576 ? var_13 : (-1 < 13890)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [12] [i_0 - 1] &= 36024398972452864;
                        arr_13 [i_3] = (((arr_7 [i_0] [i_0] [i_1]) ? (((min(51647, 10693)))) : ((min(13889, 3128613215)))));
                        arr_14 [i_0] [i_0] [i_3] [i_3] [i_3] [i_2] = ((((max(60242, (((-15939 + 2147483647) << (3 - 3)))))) + (((((var_8 ? (-9223372036854775807 - 1) : 2911803132))) ? (((arr_2 [i_3]) ? 7 : var_13)) : (!var_15)))));
                        var_21 = (((((-9223372036854775807 - 1) ? (((((arr_10 [i_0] [i_0] [i_2] [i_3]) == 51646)))) : 0))) ? 32759 : 15939);
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] |= 13890;
        arr_16 [i_0] = ((var_1 ? ((((max(0, 0))) ? ((-1877074283 & (arr_1 [i_0] [i_0]))) : (30 % 19))) : (arr_0 [i_0 + 1])));
    }
    var_22 = ((-(min(((var_3 ? var_1 : var_4)), 1))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_23 = (min((arr_6 [i_4] [i_5]), var_3));
                var_24 = (max(var_24, (((((((36 ? var_9 : 19)) == ((var_15 ? var_3 : var_7)))) ? (~7) : 1877074282)))));
                var_25 = ((((!(arr_6 [i_5] [i_5])))));
                var_26 *= ((((((var_5 ? (arr_9 [1] [i_4] [i_4] [i_5] [i_5] [i_5]) : (arr_2 [i_4]))) != (arr_9 [i_4] [i_5] [1] [i_4] [i_4] [i_4]))) ? (max((4662837664746214229 || 61495), (((arr_0 [i_5]) ? 15826 : (arr_2 [i_4]))))) : (max(24557, -7745))));
            }
        }
    }
    #pragma endscop
}
