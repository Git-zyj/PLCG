/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_10 -= (((var_1 % var_6) ? ((3683042825 - (((var_3 ? 32765 : (arr_5 [i_2])))))) : (min(var_2, (arr_1 [i_2 - 1])))));
                    var_11 ^= (arr_3 [i_0] [i_2 - 1]);
                    arr_6 [i_1] [i_1] = ((((((!(((902 ^ (arr_0 [i_0])))))))) > (arr_1 [i_2 - 2])));
                }
                var_12 += (arr_5 [i_1]);
                var_13 = (max(var_13, (((((max((((4724674363601690334 ? (arr_3 [i_0] [i_1]) : 1))), 4506318556145254667))) ? ((~(arr_0 [i_1 - 1]))) : (((!(arr_2 [i_1 + 1] [i_1 - 1] [i_0])))))))));
            }
        }
    }
    var_14 = ((24501 > ((var_5 ? 14809218496363798933 : var_7))));
    var_15 = (((((var_3 ? (((438939664 ? var_1 : var_0))) : (~var_7)))) ? ((~(min(1320149627, -12917)))) : (((var_8 ? ((var_8 ? 14353 : var_4)) : var_2)))));
    var_16 *= -29743;
    #pragma endscop
}
