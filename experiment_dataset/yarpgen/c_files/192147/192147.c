/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-(!52081966)))) == ((var_4 ? ((2813056753 ? var_4 : var_8)) : (111 && 3359689078188830784)))));
    var_11 = ((7 < (min(((var_0 ? var_1 : var_3)), var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [17] [i_1] = (arr_2 [i_1]);

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] = var_0;
                    var_12 -= (((arr_1 [i_0] [i_1]) != (!22)));
                    var_13 = (min(var_13, -94214205));
                    arr_8 [i_2] [i_1] [i_0] = min((((!(arr_6 [i_2 + 1] [i_2 - 3] [i_2 + 2])))), (arr_3 [i_0] [i_1] [i_0]));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_14 = (max(var_14, ((max((~var_2), ((var_2 + (arr_1 [i_3] [i_1]))))))));
                    arr_12 [i_1] [i_1] [i_1] [4] = ((((((arr_0 [i_0]) > (arr_0 [i_3])))) - (((arr_1 [i_3] [i_3]) ? ((((arr_9 [i_0] [i_1] [17]) != (arr_2 [i_1])))) : 11890))));
                    var_15 = (min(var_15, (((((var_9 ? (arr_5 [i_0] [12] [i_1] [i_3]) : var_4))) ? ((((arr_3 [i_0] [i_1] [i_3]) ^ ((4242885329 ? 2813056753 : 1642073478))))) : (~var_2)))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_16 |= (55221 % 52081947);
                    arr_15 [i_1] = var_2;
                    arr_16 [i_1] = (((((15 < (-9223372036854775807 - 1))) ? ((~(arr_10 [i_1] [17] [i_4]))) : (arr_13 [i_0] [i_1] [i_4]))));
                }
                arr_17 [i_1] [i_0] [i_1] = var_7;
                arr_18 [i_1] [i_1] = ((~(((!(arr_1 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
