/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(((~((min((arr_0 [i_0] [i_1]), 27856))))), ((((18446744073709551615 && 0) == ((max(var_11, 10))))))));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    var_15 = (-((((arr_6 [i_2 - 2] [5]) > (arr_6 [i_2 - 1] [i_1])))));
                    arr_8 [i_1] [3] [i_1] [i_1] = 115;
                    var_16 = (min(var_16, ((((((224 ? (arr_7 [10] [i_2 - 1] [i_2 - 1]) : (max(62, 14939098471317708228))))) ? ((((((arr_6 [i_2] [5]) ? (arr_3 [i_0] [i_1] [10]) : 10))) ? (arr_1 [i_2 + 1]) : (-13699408 / 93))) : 0)))));
                    var_17 -= ((((((arr_7 [4] [i_1] [4]) - var_8))) ? (((-(arr_7 [10] [i_1] [i_2 - 2])))) : (max(8031167820123876600, (arr_7 [2] [i_1] [2])))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (((max((18550 + 254), var_9)) % (arr_0 [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
