/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (247 > 2443783765);
                var_18 *= arr_3 [i_1 + 1] [i_1 + 1];
                arr_6 [i_1] [i_1] [2] = 247;
                arr_7 [i_0] [i_1] = (!2020313544);
                var_19 += 252;
            }
        }
    }
    var_20 = (243 <= 7337);

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = (!17);
        arr_11 [i_2] [i_2] = (arr_4 [i_2] [i_2]);
        var_21 = 2274653746;
        var_22 = ((23982 >> (((3289223862 & 55) & (~247)))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_15 [9] = (max(254, 252));
        var_23 = ((((max(413742894, 31824))) ? (!154) : 255));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        var_24 = ((~(2282513261 < 2805131233)));
        var_25 = (max(var_25, (((((max(250, 9))) > ((max(80, 255))))))));
        var_26 = min(115, 5);
        var_27 = (min(var_27, ((max(((((arr_4 [1] [i_4]) || (arr_3 [i_4 - 1] [i_4 - 1])))), ((~(arr_13 [i_4 - 1]))))))));
    }
    var_28 = var_3;
    #pragma endscop
}
