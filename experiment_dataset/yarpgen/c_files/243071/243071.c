/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (~var_4);
    var_17 += ((0 ? var_4 : (((var_4 ? var_14 : 26086)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] = 58;
            arr_5 [i_0] [i_0 + 1] [i_0 + 1] = 15;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = var_8;
            arr_10 [i_0] [i_2] = var_10;
            arr_11 [i_0] = ((56 ? (min((~-17259), ((var_9 ? 32747 : var_13)))) : var_6));
        }
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            var_18 *= ((32 ? (max(var_8, 0)) : -8));
            var_19 = -23674;
            var_20 = 255;
            var_21 = 58;
        }
        var_22 ^= -59;
    }
    var_23 = ((0 ? 26905 : 32767));
    #pragma endscop
}
