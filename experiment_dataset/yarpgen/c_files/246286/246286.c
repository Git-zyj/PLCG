/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min((min((min(var_0, var_10)), ((min((-2147483647 - 1), var_9))))), (((((max(var_3, var_2))) >> (((var_8 | var_2) - 2210963802)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [17] [i_0] |= (max((min((min((-2147483647 - 1), var_3)), ((max((arr_0 [i_0]), (arr_1 [i_0])))))), ((((((arr_0 [i_0]) || (arr_0 [i_0])))) ^ ((min(8191, var_11)))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 -= (max((min((((var_10 || (arr_5 [i_0] [i_0] [i_1])))), (min((arr_6 [1] [i_1 - 2] [i_2 - 1] [i_2 - 1]), var_5)))), (((((min((arr_1 [i_0]), (arr_5 [4] [i_1] [15])))) == ((min((arr_5 [11] [11] [i_0]), var_11))))))));
                        var_14 = (max((((max(-113, 3439658657)) % (((min(30600, 45912)))))), (((min(var_10, 45912)) << (((max(8605, var_4)) - 16733346840687768044))))));
                    }
                }
            }
            var_15 += (min(((max((min(72057589742960640, (arr_4 [i_1 + 1] [i_0]))), ((min(10841, 855308639)))))), (((var_4 / 1) * ((max(9223372036854775807, (arr_4 [i_0] [i_0]))))))));
        }
        var_16 = (min(var_16, ((max((((((min(var_6, var_1)) + 2147483647)) << (((9223372036854775807 ^ var_10) - 9223372032857416190)))), (((((arr_0 [i_0]) / var_5)) >> (((max(192, 3292347336)) - 3292347317)))))))));
    }
    var_17 = ((((((((max(var_5, 0)))) | (855308638 | 1)))) ^ (((3439658670 & var_7) | ((min(855308639, var_2)))))));
    var_18 = (((min(((max(var_10, var_0))), (max(var_8, var_7)))) < ((max(((max(var_5, var_11))), (max(var_1, var_0)))))));
    #pragma endscop
}
