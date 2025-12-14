/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((var_6 ? 45776965027421962 : var_7))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((4251706111 ? (((((2509574680693199789 ? (arr_0 [i_0] [6]) : (arr_3 [i_0] [i_0])))) ? ((101 ? 10473 : 3)) : 5437750422514248976)) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (((arr_1 [5] [7]) ? (arr_1 [i_2] [1]) : (min((((arr_1 [5] [9]) ? (arr_3 [i_0] [i_1]) : 15573)), (((45776965027421967 ? -119 : 93)))))));
                    arr_11 [8] [i_1] [i_0] = (min(((32743 ? ((((arr_1 [i_2] [i_0]) ? (arr_7 [i_1] [i_1]) : (arr_1 [18] [i_1])))) : 2147483647)), (((((((arr_0 [i_2] [i_1]) ? (arr_3 [i_0] [i_1]) : 125))) ? 97 : (arr_1 [i_0] [i_1]))))));
                    arr_12 [i_0] [i_1] [i_2 + 2] [i_1] = 32657;
                }
            }
        }
    }
    #pragma endscop
}
