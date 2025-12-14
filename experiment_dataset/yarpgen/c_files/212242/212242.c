/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] &= (((min(127, 1690471960)) == ((((((~(arr_3 [i_0 - 2] [i_0 - 2]))) < (arr_3 [i_0 - 1] [i_0 + 1])))))));
        arr_5 [i_0] = ((((max((((arr_0 [4]) * (arr_0 [i_0]))), ((((arr_1 [i_0]) >= (arr_1 [4]))))))) || ((((~(arr_2 [i_0] [i_0 - 1]))) == (((-(arr_1 [i_0]))))))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_11 = (max((min((arr_3 [i_0 - 1] [i_1 - 1]), (((arr_9 [i_0] [i_0] [i_1 - 1]) + (arr_1 [i_1]))))), (arr_1 [i_0 + 1])));
            arr_10 [i_0 - 1] [i_0 - 2] = (((((((max((arr_8 [i_1]), (arr_3 [i_0 - 2] [i_0 - 2])))) >> (((arr_3 [i_0] [i_1 + 1]) - 23747))))) != (arr_0 [i_0])));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_13 [i_0] [i_0 + 1] [i_0] = (min(((((arr_2 [i_2 + 1] [i_2 - 1]) == (arr_2 [i_2 + 1] [i_2 - 1])))), (max((arr_2 [i_2 + 1] [i_2 - 1]), (arr_2 [i_2 + 1] [i_2 + 1])))));
            arr_14 [i_0 + 1] [i_2] [i_2] |= (max((((-(min((arr_6 [i_0 + 1]), (arr_7 [1])))))), (min(((min((arr_3 [9] [i_2 - 1]), (arr_7 [i_0])))), (min((arr_2 [i_0 + 1] [i_2]), (arr_3 [i_0] [i_2])))))));
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_17 [i_3] = ((~(arr_15 [i_3])));
        arr_18 [i_3] = (-(arr_16 [i_3] [i_3]));
        arr_19 [i_3] = (((arr_15 [i_3]) == (arr_16 [i_3] [i_3])));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            {
                arr_25 [i_4] [i_4] = ((((-(54 < 0)))) ^ (((((((arr_16 [i_4 - 1] [i_5]) != (arr_22 [i_5] [i_5]))))) - ((~(arr_15 [i_4]))))));
                arr_26 [i_4] = (max((arr_24 [i_4 - 1] [0]), (max((max(0, 18446744073709551605)), 16))));
            }
        }
    }
    var_12 = var_5;
    var_13 &= var_9;
    #pragma endscop
}
