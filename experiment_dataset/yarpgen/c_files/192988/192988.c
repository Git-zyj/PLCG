/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= (max((4792092276592999926 - 7745), ((4792092276592999938 + (arr_1 [18])))));
        var_13 -= (~var_8);
        var_14 ^= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 = (((4792092276592999941 ? 7864320 : -4792092276592999942)));
            var_16 = (!((max(4792092276592999951, 4792092276592999951))));
            var_17 = ((((((max(667232090, 1))) ? 4792092276592999918 : ((min(3318587064, var_8)))))) || (((-4792092276592999951 * var_0) < 192)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 -= var_3;
            var_19 -= ((var_5 ? (((((-885441308 >= 7120038799903161755) < var_6)))) : ((1226308839 ? (4 == 120) : (~-4792092276592999941)))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = (min(var_20, (arr_0 [i_0])));
            arr_11 [i_3] = -32;
            var_21 = (max(var_21, (~var_4)));
            var_22 *= ((-(min(16256, (((arr_6 [i_3] [i_3] [i_0]) / (arr_2 [i_0] [i_3])))))));
            arr_12 [i_3] = (min(((((arr_5 [i_3] [i_0] [i_0]) <= (min(3795147037, (arr_6 [i_0] [i_3] [i_3])))))), (max((arr_6 [i_0] [i_0] [i_0]), (!131056)))));
        }
        var_23 = ((((arr_7 [i_0] [i_0] [i_0]) >> (-4792092276592999948 + 4792092276592999952))) & (~var_7));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_24 = ((((9635573369654550913 ? 4174540495 : 65525)) + 8384512));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_5] [i_7] [i_4] = 1;
                        var_25 = (arr_2 [i_5] [15]);
                    }
                }
            }
        }
        var_26 = (((((min(76, var_6)))) == -186));
        arr_25 [i_4] = (((arr_21 [i_4] [i_4]) ? 126 : 192));
    }
    var_27 -= var_1;
    #pragma endscop
}
