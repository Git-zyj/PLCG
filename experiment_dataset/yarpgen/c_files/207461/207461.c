/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((2319852812 ? 2319852812 : (min(var_11, (min(9451666017900397062, 9451666017900397062))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [11] [i_0] [i_3] = ((-(((((arr_5 [i_0] [13]) > 17533385111186685508)) ? (arr_8 [i_0 - 1]) : (((arr_0 [i_2]) + 9451666017900397062))))));
                            arr_11 [i_0] [i_0] = 60;
                            arr_12 [8] [i_2] [i_0] [i_0] [i_0 + 1] = ((1012831320 > (((((2319852812 ? (arr_6 [2] [i_1] [2] [i_1]) : 11482947637871335720))) ? 3282135947 : (((arr_2 [2] [i_0]) ? 18446744073709551615 : 7505503613210045355))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = (-7505503613210045355 ^ 4865081127295992589);
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_3] = (((((arr_0 [i_2]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (max((arr_4 [7] [i_0] [10]), (arr_2 [i_0] [i_0])))))) ? (((arr_4 [i_0 + 2] [i_1] [i_1]) >> (((arr_4 [i_0 - 3] [i_0] [i_0]) - 4479717305902282076)))) : (((arr_4 [i_0 - 2] [2] [2]) ? (arr_4 [i_3] [i_1 - 2] [i_2]) : (arr_4 [i_1] [i_2] [i_3]))));
                        }
                    }
                }
                arr_15 [i_0] = -4865081127295992589;
            }
        }
    }
    var_20 &= 3282135975;
    #pragma endscop
}
