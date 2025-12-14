/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((((max(13900, 125)))) >= (min(3147679857, 459342317)))) ? ((var_4 ? var_7 : (-2057825637 ^ var_6))) : ((min((5043 ^ 125), var_11)))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 -= ((((min(((var_3 ? 125 : 11207)), (((!(arr_0 [12] [22]))))))) ^ ((8370597718668294866 ? 18220112216718347425 : ((min(1435700968, 600420714)))))));
        var_17 = 6246228867596389558;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (min((var_7 >= 142), (min(8743436856895295806, 14339147773211914074))));
                        arr_10 [23] [i_0 + 1] [i_0] [i_0 - 1] = 19277;
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        arr_14 [0] [i_4] = ((((((var_6 ? var_5 : 5807953951599631063))) ? (13350 ^ 2097849212) : (-113 ^ 0))) >= 0);
        var_19 = (min(87, (max((28 ^ 1), (min(var_2, var_12))))));
        var_20 = (max(var_20, ((max(252, -6246228867596389559)))));
        var_21 = (((((min(var_0, var_5)))) ? var_6 : ((min((arr_1 [i_4 + 1]), 62053)))));
    }
    #pragma endscop
}
