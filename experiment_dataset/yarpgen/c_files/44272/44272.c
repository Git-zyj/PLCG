/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-var_5 == -var_7) >= (min((~14755), var_1))));
    var_12 = (max((~70366596694016), 5107139264630382520));
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 ^= 10350119406462639114;
                    arr_9 [i_0] [i_1] [11] = (((5232 ? 10350119406462639122 : 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [1] [i_0] [1] = ((508 | (((~(arr_0 [i_4 + 1] [i_0 - 1]))))));
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = 5619801325446986114;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_7] [1] [7] [i_7] = arr_19 [1] [i_5] [i_6] [i_7];
                                var_15 ^= (var_3 & ((1 % ((-(arr_18 [i_5] [11] [4]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_16 = ((((!(arr_22 [i_0] [i_0] [i_0] [i_0 + 3]))) ? 7089677325536160082 : (arr_13 [i_0 + 1] [i_8 + 2])));
                                var_17 = (max(var_17, ((((((arr_11 [i_8] [i_8] [i_8 + 1] [i_8 - 2] [2] [i_8 + 1]) ? (((arr_7 [i_1] [i_1]) * 10350119406462639122)) : (arr_0 [i_0 + 1] [i_1]))) * ((min(-42520836, ((1 ? 1303339641 : 531))))))))));
                            }
                        }
                    }
                    var_18 = (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_31 [i_0] [10] [10] [10] = (2948370779 - 2948370769);
                }
                var_19 = (max(var_19, ((+(((arr_20 [i_0 - 1]) ? -64 : (arr_20 [i_0 + 1])))))));
                var_20 = (min(var_20, ((min(-20252, 1073404668)))));
                arr_32 [i_0] = -508440603;
                arr_33 [i_0] = (!((!(arr_1 [i_0 - 1] [i_0 + 2]))));
            }
        }
    }
    #pragma endscop
}
