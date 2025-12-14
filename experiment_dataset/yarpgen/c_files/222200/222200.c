/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max((max((((var_13 ? 63 : var_2))), var_1)), (((((((arr_2 [i_0]) >> (((arr_3 [i_1]) - 1750092895778143784))))) ? (arr_6 [i_0 - 2] [i_0]) : var_10))))))));
                arr_7 [i_1] [i_0] &= ((((~(~var_13)))) ? (((min((arr_0 [i_1] [i_0 + 1]), var_8)) | -22633)) : (((((~(arr_5 [i_0]))) >> (((~var_8) + 2474971042881037830))))));
                var_16 = (max(373719526, (((arr_6 [i_1 - 1] [i_1 + 2]) ? 90 : 22609))));
                var_17 = (min(var_17, ((((((arr_1 [i_0 - 1]) < var_0)) && ((((var_7 ? 7047566812316894400 : 0)))))))));
                var_18 |= ((-(((arr_1 [i_0 - 1]) ? 8328985949559726565 : (arr_5 [i_0 - 1])))));
            }
        }
    }
    var_19 = (max(var_19, (((var_14 ? ((((((22636 ? 16777215 : 0))) ? (((max(84, 84)))) : 3155772863))) : (max(((var_11 ? var_5 : var_9)), (((0 ? var_11 : 252))))))))));
    var_20 = (min(((((-1466309697965483222 ? -76 : 22635)) & ((var_12 ? var_4 : var_5)))), (((((0 ? -80 : -116))) ? (max(359795435, var_4)) : 65535))));
    var_21 = ((var_2 != (((max(var_4, var_2))))));
    #pragma endscop
}
