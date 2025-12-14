/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = min((arr_0 [i_0] [i_0]), (((var_3 > (arr_0 [5] [i_0])))));
        var_16 = ((((((max(var_0, (arr_0 [i_0] [i_0]))) - (~463062434745706)))) - ((var_13 & (max(463062434745705, (arr_1 [i_0])))))));
        var_17 = (-21764 | 463062434745706);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = (((((((var_14 ? 463062434745718 : var_6)) * ((-463062434745706 ? var_5 : (arr_0 [i_1] [i_1])))))) ? ((((((427651571979437934 ? var_1 : (arr_0 [i_1] [i_1])))) ? ((max(31808, var_5))) : (arr_4 [i_1])))) : (arr_2 [i_1] [i_1])));
        var_18 = (max(var_18, ((var_4 ? (((((((arr_2 [i_1] [i_1]) << (var_7 - 5630715827056872632)))) ? var_8 : (arr_3 [i_1])))) : ((((~(arr_0 [i_1] [i_1]))) - (((arr_0 [i_1] [10]) ? -463062434745706 : var_12))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = (arr_6 [i_2]);
        var_20 = ((~(arr_6 [i_2])));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_13 [i_4] [i_4] = arr_9 [i_4] [i_3];
                var_21 ^= (min(((max((arr_12 [i_3]), ((((arr_9 [i_3] [i_3]) && 31808)))))), ((((max((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3])))) ? (arr_9 [i_4] [i_3]) : (arr_10 [i_3] [i_4])))));
            }
        }
    }
    var_22 = ((var_3 ? ((((((var_9 ? 144115179485921280 : var_5))) ? (var_8 % var_8) : ((4288363379247103026 ? -1920745105 : -399216577))))) : ((2796701985121716386 ? -463062434745690 : -7091912778985475790))));
    #pragma endscop
}
