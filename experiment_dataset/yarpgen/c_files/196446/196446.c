/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 ^= ((-(min(var_9, ((9918268194837547918 ? var_3 : -2032194075))))));
    var_18 = (min((((-(~20744)))), (max((((0 ? var_15 : var_7))), ((9918268194837547918 ? 2046244293 : 9918268194837547918))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (max(4008967891945573439, -2032194075));
                var_20 = (-1600 | (arr_5 [i_0] [i_1]));
                var_21 &= (((((max(var_12, 222973517)))) != ((min(18957, var_1)))));
            }
        }
    }
    var_22 = (((((!((max(0, var_6)))))) <= 193));
    #pragma endscop
}
