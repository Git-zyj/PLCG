/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [3] = ((-4 > (min(((((arr_3 [i_0] [i_1]) ? -32757 : var_4))), (max((arr_3 [i_1] [i_0 + 1]), (arr_1 [i_0])))))));
            var_10 = ((((~((min(147, var_8))))) % ((max((arr_0 [i_0]), var_8)))));
            var_11 = ((~(max(-111232285, (arr_3 [i_0] [i_0])))));
            var_12 ^= ((((((111232263 <= 3293) >> (-111232285 + 111232315)))) ? (((1148417904979476480 ? (arr_1 [i_0 - 1]) : -var_2))) : (max((((arr_0 [i_0]) ? var_0 : 125)), (((~(arr_4 [i_0] [i_0]))))))));
            var_13 ^= 18446744073709551615;
        }
        arr_6 [i_0] = ((~(((((max(-120, var_2))) && (arr_3 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_14 &= ((arr_10 [i_0 + 1]) | -111232264);
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = ((-1 ? (arr_10 [i_0 - 1]) : (arr_10 [i_3 + 1])));
                        var_15 = (min(var_15, ((!(35554 <= -207146159)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_16 *= (((111232291 ? (~1148417904979476484) : (((206567676 ? 55934 : var_2))))));
                                arr_23 [1] [1] [1] = (max((((arr_10 [i_0 - 1]) ? 7727499698473990188 : (arr_10 [i_0 - 1]))), (((12 ? (arr_10 [i_0 + 1]) : -121)))));
                            }
                        }
                    }
                    arr_24 [i_0] = (min(-27830, (arr_22 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                }
            }
        }
    }
    var_17 = (((((1 ? 1 : -15))) ? ((-var_0 ? (!111232307) : var_2)) : var_2));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_31 [i_8] [i_8] &= (min(((max(1, -3631173567976502441))), (min((min(0, 3183229677067364215)), 1))));
                    var_18 = (min((var_5 * 65527), (((((min(var_7, -32752))) || (((9223372036854775807 ? var_9 : var_7))))))));
                }
            }
        }
    }
    var_19 = ((var_5 ? (((((min(-13, 4270260313)) != ((min((-2147483647 - 1), var_6))))))) : (((max(var_9, 7727499698473990212)) * var_6))));
    #pragma endscop
}
