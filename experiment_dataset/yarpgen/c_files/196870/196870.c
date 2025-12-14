/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_12));
    var_15 &= ((+(((~var_13) ? var_13 : (var_6 + var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [6] [i_0] = (((((arr_4 [i_1] [i_1]) != ((0 ? 1905964702019555390 : 255))))) << ((((var_7 ? (arr_1 [i_0]) : (arr_0 [i_0]))) % ((((arr_2 [i_0] [i_0]) + (arr_1 [i_0])))))));
                var_16 = ((((((min(107, (arr_2 [2] [i_0])))) + ((255 ? var_12 : var_11)))) / (arr_4 [i_0] [9])));
            }
        }
    }
    var_17 = (max(var_6, 0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_18 -= 12;
                var_19 += (min((((((~(arr_7 [i_2])))) ? (arr_10 [i_2]) : var_10)), ((((!var_11) < 255)))));
                var_20 += (max(20283, (((var_7 <= (arr_7 [i_2]))))));
                var_21 = ((255 < ((((((-(arr_7 [i_3])))) || var_12)))));
            }
        }
    }
    #pragma endscop
}
