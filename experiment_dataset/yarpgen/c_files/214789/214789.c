/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_1] [i_2] [i_2] = 2580;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_15 = (min(var_15, ((((min((arr_2 [i_2 + 1]), (arr_2 [i_2 + 2]))) * (!var_5))))));
                            var_16 = (min(var_16, (((((((((arr_8 [i_1] [i_1] [i_0]) != (arr_8 [i_4] [10] [i_2 + 2])))) + (var_2 || var_12))) == ((var_2 % ((~(arr_10 [i_0] [i_0] [i_0 - 1] [i_1]))))))))));
                            arr_15 [i_0] [i_1] [i_0] &= (max(27187, ((~((~(arr_1 [i_2] [i_4])))))));
                        }
                        var_17 ^= (max((((arr_3 [i_3]) ? ((min(var_8, (arr_12 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2])))) : (max((arr_2 [i_1]), (arr_8 [i_0 - 2] [i_0 - 2] [i_0]))))), (max((min(62955, var_0)), ((((arr_6 [i_3] [i_1]) ? var_3 : (arr_10 [i_0] [i_1] [i_1] [i_0]))))))));
                    }
                    arr_16 [i_2] [i_1] [i_1] [i_2 + 1] = ((!((max(((((arr_1 [1] [i_0]) == (arr_10 [i_0] [i_1] [i_1] [i_0])))), 1948183601)))));
                    arr_17 [i_2] [i_0] = (((((arr_0 [i_2]) + 2147483647)) << (-62956 - 20)));
                    var_18 = ((((~(arr_4 [i_0 - 2] [i_1])))));
                }
            }
        }
    }
    var_19 = (max(var_19, ((min((min((max(var_8, var_9)), var_4)), var_3)))));
    #pragma endscop
}
