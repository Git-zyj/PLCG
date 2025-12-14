/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_0 - -6399134478002502070) % (((var_12 % (((min(var_11, 65517)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max((18 / 1397707961), ((min(((max((arr_4 [i_0]), 127))), 4)))));
                arr_7 [i_1] &= (((max((max(9006147534314585006, 123)), (((65504 == (arr_6 [i_1])))))) & (((((min((arr_0 [i_0 + 4]), (arr_3 [i_1]))) < (min((arr_2 [i_0]), (arr_0 [i_0])))))))));
                var_15 = ((((((min((arr_0 [i_1]), 1))) & (81842556192532849 == 226))) + ((((min(50069, 53295))) - (153 / 65517)))));
                var_16 &= (max((max((max(-1, 13898719002390825932)), (((12230 * (arr_6 [i_1])))))), ((max(4294967295, 39046)))));
            }
        }
    }
    #pragma endscop
}
