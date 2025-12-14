/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 &= (max((((~var_2) ? var_6 : (~var_0))), var_11));
    var_15 = (min(var_15, ((~((-(min(var_9, 24))))))));
    var_16 = (((((6623488186704652791 | var_7) >= (((max(-63, var_9)))))) ? ((((4201587061213174160 >= 1390785107) | var_0))) : 18335702551471903231));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (((111041522237648373 <= var_12) ? ((var_5 % (arr_1 [i_1]))) : (((!(arr_1 [i_0]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((32763 <= var_6) & ((52 ? var_5 : (max((arr_1 [i_2]), var_8)))));
                    var_17 = (arr_3 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
