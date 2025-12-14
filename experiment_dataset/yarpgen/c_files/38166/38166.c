/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 = (max(var_18, (min((min(((min(var_2, var_0))), var_7)), var_9))));
                    var_19 += var_5;
                    var_20 = var_4;
                }

                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_21 = (min(124, 565020797));
                                var_22 = ((((min((((-27939 ? 55057 : var_11))), 17061350489553594927))) ? (max(705709895, (((var_12 >> (var_0 - 1272471387)))))) : 1713223593));
                                var_23 ^= -3690384713887935054;
                            }
                        }
                    }
                    arr_13 [i_1] = (max(var_5, (((((var_16 ? 1385393584155956689 : var_17))) ? (var_2 / var_16) : 3690384713887935053))));
                    arr_14 [i_0] [i_1] [i_1] [10] = var_16;
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_21 [i_0] [i_1 + 1] [i_1] [i_1 + 1] = -18167;
                        arr_22 [i_1] [i_1] [i_1] [i_1] = 17061350489553594944;
                        var_24 = ((((((var_7 >> (1385393584155956689 - 1385393584155956644))))) / var_8));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_26 [i_0] [i_1] = ((max(302281569472794147, 3)));

                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            arr_29 [10] [i_1] [i_6] [i_8] [i_9] = (max(((((max(var_7, 1385393584155956689))) ? (min(var_4, -6830502823019065120)) : (var_8 < -3690384713887935043))), var_13));
                            arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] [i_9] = (min(((max(var_17, 231909183101599899))), ((-561 % (max(var_10, 3422832203))))));
                            var_25 = (min(var_10, (var_12 % var_17)));
                            arr_31 [0] [i_1] [i_1] [6] [i_1] = (((((12792401659315745944 ? var_2 : ((min(var_16, var_8)))))) >= var_10));
                        }
                        var_26 = ((((var_8 >> ((3690384713887935053 ? var_1 : -18169)))) ^ ((max(var_7, 4574734500911334735)))));
                    }
                    arr_32 [i_1] [1] [i_1] [i_1] = 2700120842;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 14;i_11 += 1)
        {
            {
                var_27 = (max(-231909183101599899, (max(18446744073709551611, (((var_6 ? var_5 : var_13)))))));
                arr_39 [0] = (max(((((max(var_12, 1))) << (27939 && var_15))), var_3));
            }
        }
    }
    var_28 |= (((min(var_8, var_9))));
    var_29 = (min(55644, -27939));
    var_30 = 1;
    #pragma endscop
}
