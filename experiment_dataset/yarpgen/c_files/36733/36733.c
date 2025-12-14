/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (((((~(arr_3 [i_0])))) ? -1015702961 : var_12));
                    var_14 &= 55408;
                    var_15 = (((((~var_2) ? ((10458281970529777669 >> (-104 + 148))) : (1 | 18446744073709551615))) | (((((max(1, (arr_2 [i_0])))) ? 1 : ((21 ? 2800134815 : 1)))))));
                }
            }
        }
        arr_8 [i_0] [i_0] = ((((arr_3 [i_0]) || (arr_1 [i_0]))));
        var_16 *= ((((min(((max(var_0, 1494832480))), (min(2147483647, 15346328511591973519))))) ? (max(5861327764822148233, (arr_3 [i_0]))) : ((((arr_3 [i_0]) / (arr_3 [i_0]))))));
        arr_9 [i_0] = (arr_1 [i_0]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = (min(var_17, -117));
        var_18 = ((+(((arr_4 [i_3]) ? -1280291175 : (arr_4 [i_3])))));
        var_19 = (min((max(((2573429798 ? (arr_3 [i_3]) : (arr_0 [i_3] [18]))), (~1494832480))), ((max(1, var_7)))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] = 4160412687;
        var_20 = ((((max(((89 ? 50393 : 3100415562117578101)), (((1 ? (arr_14 [i_4]) : (arr_15 [i_4]))))))) ? 64 : ((~((1 ? (arr_13 [i_4]) : 7637))))));
    }
    var_21 = var_5;
    #pragma endscop
}
