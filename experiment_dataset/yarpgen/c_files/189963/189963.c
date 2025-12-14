/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((-(arr_2 [i_0 + 1])))) <= (min(1078933468, 3))));
                var_16 = ((((max(((65508 ? var_11 : (arr_2 [i_1]))), 2))) ? (((max(1, 28)))) : (min((max(10438962474364941499, -1871999989)), 6734463090921084808))));
            }
        }
    }
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_4] [i_4] = (((((((max((arr_3 [9] [1]), 4))) ? 114 : 114))) > ((~(min(65532, -1741773699958131194))))));
                    var_18 = ((min((arr_9 [i_2]), ((8007781599344610117 ? var_10 : 10392)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_19 = min(55136, -var_8);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_25 [i_6] [1] [i_6] [i_6] = (((max((((!(arr_18 [i_6])))), 39)) | (arr_19 [1] [i_6] [i_6])));
                            arr_26 [i_5] [i_5] [i_6] [6] [i_5] = -var_11;
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((!((max(2357219778491278671, 11712280982788466823)))))));
    #pragma endscop
}
