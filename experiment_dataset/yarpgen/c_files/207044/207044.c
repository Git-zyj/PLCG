/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (224 * -4096)));
                            arr_11 [i_3] [i_1] [i_1] [i_3] = max((arr_10 [i_1] [0] [i_3 - 2] [4]), (((arr_1 [i_2 + 1]) + var_2)));
                            var_19 ^= 248;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = (max(((6917529027641081856 ? var_9 : 139), (arr_13 [i_5 - 1] [i_5 + 1]))));
                            var_21 -= 18158513697557839872;
                        }
                    }
                }
                arr_17 [i_0] [i_1] = ((((max(((11931783878325478810 ? var_3 : 11529215046068469759)), -4864905272632156155))) ? (((~(~-2472200257790223995)))) : ((var_10 ? 16773 : ((-28891 ? 11931783878325478822 : 11529215046068469760))))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [6] [4] [i_7] [i_0] |= ((((arr_21 [i_6 + 2] [i_8 - 1] [i_8] [10] [i_8 - 1]) ? (arr_21 [i_6 + 2] [i_8 - 1] [i_8 - 1] [i_8] [6]) : var_14)));
                                arr_26 [i_0] [3] [i_1] [i_6] [i_6] [i_0] [i_8] = (((((arr_14 [i_6] [i_6]) ? 22 : (var_3 != 18446743936270598144)))) ? 11931783878325478810 : (833082339599704607 && var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= ((0 || ((((var_0 | 27186) ? (max(var_15, var_4)) : (((var_2 ? 211 : 19571))))))));
    #pragma endscop
}
