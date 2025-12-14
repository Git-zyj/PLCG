/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((57145 ? 578727331241119394 : (((var_4 / -2572441489436051342) & ((max(var_8, -1022813735)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((4320484328980883654 ? (arr_5 [i_1]) : ((max(233, 235))))))));
                arr_6 [i_1] = (((~69) ? (17179869183 | -14386) : ((((max(var_0, 10))) ? (max(var_6, (arr_2 [i_1]))) : (~var_6)))));
                var_12 = (max(var_12, ((((((((!(arr_4 [i_0])))) <= (((arr_0 [i_1]) - var_0)))) || var_9)))));
                arr_7 [i_0] = (max(13949448607798167377, (arr_2 [i_0])));
            }
        }
    }
    var_13 = (max(433179117, (max((~var_5), (((-25 ? 94 : 248)))))));
    var_14 = (max(6370388386789202519, 1747404776));
    var_15 |= 10;
    #pragma endscop
}
