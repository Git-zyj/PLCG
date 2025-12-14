/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_1 [i_0])));
        var_15 = (((arr_1 [i_0 - 1]) ? 1 : (arr_0 [i_0 - 1])));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0 - 1]) > (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_16 -= (max((arr_0 [i_1]), (-32496 ^ 16476391090884169725)));
        var_17 = (min(var_17, ((max(var_2, (~var_1))))));
        arr_8 [i_1] = 8217;
    }
    var_18 = ((((3247856908890064963 | var_6) ? (((-1395578894632531444 ? 1 : var_11))) : (min(-1551085144, 12021217343318986385)))) << ((((-2424645838920362328 ? ((58143 ? 6425526730390565230 : var_7)) : (6425526730390565225 + -14432))) - 6425526730390565194)));
    var_19 = (min(var_19, var_4));
    var_20 &= (max(var_3, 876257227));
    #pragma endscop
}
