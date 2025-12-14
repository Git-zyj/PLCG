/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (((min(9223372036854775795, ((((arr_0 [i_0] [i_1]) | 118)))))) ? ((((arr_0 [i_0] [i_1]) ? 20 : (arr_2 [i_0 + 1])))) : var_8);
                arr_5 [i_0] [i_1] [i_1] = -55;
            }
        }
    }
    var_11 += (((var_9 ? (!3347288067) : var_2)));
    var_12 = var_5;

    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_9 [i_2] = -536870912;
        var_13 = (16 / ((((max(var_6, 9223372036854775807))) ? -9005676456415094819 : ((7408498809103865859 << (644141071 - 644141071))))));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_14 *= ((!((!(arr_4 [i_3 + 2] [i_3 - 2] [i_3 + 2])))));
        var_15 = 270582939648;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_16 = (max((min(16, (((var_6 ? -439123052 : var_4))))), (min(((1109039590071336305 ? 429558205 : var_9)), -5109048499664933355))));
        var_17 = ((!(((((((arr_11 [i_4]) ? 3963715881 : var_9))) ? var_0 : ((var_8 ? var_7 : (arr_8 [i_4] [i_4]))))))));
    }
    #pragma endscop
}
