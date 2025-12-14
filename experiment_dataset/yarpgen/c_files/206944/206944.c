/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_10, (~var_3)))) ? (var_9 > var_8) : (var_7 <= var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((2796482851839361686 ? (min(7437654083546514585, 2796482851839361683)) : 3875918734560901344))) ? (((min(1, 11456)))) : (~0)));
                arr_6 [i_0] [i_1] = (max((((((min(1, var_2))) && ((((arr_4 [i_1] [i_0]) - var_9)))))), var_6));
            }
        }
    }
    var_12 = ((((min(((1 ? var_10 : var_2)), (var_1 >= var_6)))) ? (min(var_5, ((var_10 ? var_8 : 1330543518)))) : (max((min(var_2, var_8)), (min(var_0, var_8))))));
    #pragma endscop
}
