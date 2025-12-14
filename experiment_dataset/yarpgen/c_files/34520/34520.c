/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = 11039268399507425488;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [7] [i_0] [11] = ((var_5 << (((arr_2 [15] [5]) + 65))));
                    arr_9 [i_0] [i_0] [15] [15] = (((((((((arr_6 [1] [15]) ? 2678090379 : (arr_7 [0] [0] [i_0])))) ? (~144115188075724800) : ((((arr_7 [4] [20] [i_0]) - 4611686016279904256)))))) ? 14792009602547124927 : (((var_10 ? var_8 : 18426)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = 11039268399507425509;
                                var_20 += 7407475674202126130;
                            }
                        }
                    }
                    var_21 = 11039268399507425479;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            {
                var_22 = (((((~(min(var_14, (arr_1 [i_5] [i_5])))))) == (((~(arr_0 [13]))))));

                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_25 [7] [3] [7] [7] = (((max((arr_20 [i_8]), (var_6 || var_9))) & (~3642695047)));
                        arr_26 [7] [7] [5] [0] [3] = (~(((var_13 <= (~0)))));
                        arr_27 [5] [1] [1] [1] = ((~(max((arr_18 [i_5] [14]), (~128)))));
                    }
                    arr_28 [i_5] [4] [4] [2] = var_0;
                    arr_29 [10] [10] [3] [1] = ((((max(6470446613703548286, -957218168664582745) - var_4))));
                    var_23 += (~var_1);
                }
                var_24 -= (~var_5);
                var_25 = (max(var_25, ((((6470446613703548280 ? (~6448607801065779602) : (~11039268399507425493)))))));
            }
        }
    }
    #pragma endscop
}
