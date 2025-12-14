/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max((((-(((arr_3 [i_1 + 1] [i_0 - 1]) - (arr_3 [5] [i_1])))))), (max(2326740863924796143, var_7)))))));
                arr_6 [i_1] [i_1] = ((((min(((15 ? (arr_0 [i_1 + 2]) : 65515)), (arr_4 [i_0 - 1] [i_1])))) >= (arr_1 [i_1])));
                var_16 = (((((max((arr_5 [i_0 - 1]), 65515)))) ? ((max(65508, (min(10, -1))))) : var_5));
                var_17 = (!((min((max((arr_2 [i_0]), (arr_2 [i_0]))), (~-871051551)))));
            }
        }
    }
    var_18 = (min(var_18, var_14));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                var_19 ^= (arr_5 [i_3 + 2]);
                var_20 = (max(((-(arr_8 [i_2] [i_3 - 1]))), (max((arr_8 [8] [i_3 + 1]), (arr_12 [i_2] [i_3 + 1])))));
                arr_14 [i_3] [i_3] [i_2] = ((-(((18 <= (65526 <= var_1))))));
                arr_15 [i_3] [i_3] [i_3 - 1] = ((arr_12 [i_2] [i_3 + 2]) ? (((((min((arr_8 [i_2] [i_2]), 5))) <= ((min(var_11, 65504)))))) : ((7 ? 65519 : -1353852262)));
                var_21 = (min(var_21, (((min((arr_5 [i_2]), (arr_12 [i_3 + 2] [i_2])))))));
            }
        }
    }
    #pragma endscop
}
