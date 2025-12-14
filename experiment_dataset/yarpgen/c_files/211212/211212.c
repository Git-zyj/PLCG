/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (60 && -69);
                arr_5 [i_1] [i_1] [i_0] = (((-(arr_3 [i_0] [i_1] [i_1]))));
                var_10 = ((-(((var_0 >= ((((arr_3 [i_0] [i_0] [i_0]) || -61))))))));
                arr_6 [i_1] [i_1] [i_1] = (max((arr_1 [i_0]), (((((var_8 ? (arr_2 [10]) : 8223039133526437622)) > 0)))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        arr_9 [19] [i_2 + 2] |= ((-75 == ((~(((arr_7 [i_2]) ? 522611701045436089 : var_1))))));
        var_11 |= ((((max((((arr_8 [i_2 - 2]) < -64)), ((-1120236476 < (arr_8 [8])))))) >> (287104476244869120 - 287104476244869119)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_12 &= -var_9;
        var_13 ^= (((arr_1 [i_3]) && (arr_0 [i_3])));
        var_14 = (60 == 1);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_14 [i_4] = var_3;
        var_15 = (arr_8 [i_4]);
    }
    #pragma endscop
}
