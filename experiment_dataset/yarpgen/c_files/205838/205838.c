/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!var_1) - (var_7 * 3818323555)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_16 = 13616196429680935271;
        arr_3 [i_0] = (2147483627 / var_13);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 = (((-var_7 * var_8) ? (min(var_6, var_14)) : -var_0));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_18 = (!var_11);
                                arr_18 [i_1] [i_1] [i_3 - 1] [16] [i_3 - 1] |= (max((((((var_14 ? var_1 : var_11))) ? var_2 : (min(var_11, var_3)))), (((-(!-7323838055063251322))))));
                            }
                        }
                    }
                    var_19 = var_10;
                }
            }
        }
        var_20 ^= ((((4299351802339036246 ? -43 : -2147483633)) | (~1769410876)));
        var_21 = (((23750 << (((var_0 ^ var_12) + 3677310950883860751)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((((!(~var_2))) ? ((-2147483633 ? 4796 : 21635)) : (~4804))))));
        var_23 = (((((-1 ? 4532044257623857705 : 2251799813685247))) || ((!(~60727)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_24 = (((var_7 + 2147483647) << (((((var_6 < var_8) ? var_8 : ((max(var_1, 537077098))))) - 3274544826))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_25 = (max((!var_12), (16001650486631331335 / 14802628456720752586)));
                                arr_30 [i_6] [i_6] [i_7] [i_6] [5] [i_6] [i_6] = (((((var_11 ? -1178055649 : 13510))) ? (!var_0) : ((~(3554973746 - -3685945469953775106)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max((~3757890184), var_8));
    #pragma endscop
}
