/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1 - 1] = ((~(((max(0, (arr_0 [i_1] [i_0]))) & (arr_2 [i_0])))));
                arr_7 [i_0] [i_1] [i_1] |= ((-392615806 != ((1 ? (arr_1 [i_1]) : (((10670678629931538871 ? (arr_3 [i_1 - 2]) : 1)))))));
                var_17 &= ((((max((arr_3 [i_0 + 2]), (((!(arr_0 [i_0] [i_1]))))))) - ((min(var_0, 1)))));
                arr_8 [i_1] |= (((arr_4 [i_1] [i_1 - 2] [i_1 - 2]) == var_14));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = min((((arr_11 [i_0] [i_0] [i_2]) ? (arr_12 [i_0] [i_0] [i_3] [i_3]) : ((65038234 / (arr_13 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_3] [i_3] [15]))))), (arr_3 [i_0 + 1]));
                            arr_15 [i_1] [i_3] &= var_15;
                            arr_16 [i_0] [i_1] [i_0] [i_3] = ((((((arr_13 [1] [3] [i_2 + 1] [i_3] [i_1] [i_3 - 3]) ? (arr_13 [i_0] [i_1 + 1] [i_0] [i_0] [i_3] [i_3]) : 1))) ^ 0));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = max(var_0, var_11);
    #pragma endscop
}
