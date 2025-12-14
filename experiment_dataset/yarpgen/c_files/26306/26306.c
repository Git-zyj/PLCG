/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((arr_5 [i_0 + 3] [i_0 + 3]) % (arr_5 [i_0 + 1] [i_0 + 1])));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_21 = (min(var_21, (((!(((arr_6 [i_0 + 2] [i_0 + 3] [i_2 - 2]) || var_3)))))));
                    arr_11 [i_0] [11] [i_2] [i_2 - 2] = 65535;
                    var_22 = (min(((~(arr_4 [i_0 + 4] [i_0 + 2]))), ((((((arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2]) | (arr_0 [i_0])))) ? var_3 : (((!(arr_5 [i_0] [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_15 [i_0 + 4] [i_1] [i_3] [i_3] = (max((arr_3 [i_0 + 4] [i_0 - 1]), (((arr_3 [i_0 + 4] [i_0 + 2]) - (arr_3 [i_0 + 1] [i_0 + 1])))));
                    var_23 = ((3046471894 - ((min(((-(arr_13 [i_0] [i_0] [i_0] [14]))), 1)))));
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    arr_18 [3] |= (2147483647 / (max(66, 5394101827457356410)));
                    var_24 = (arr_9 [i_0 + 3] [i_0 + 3]);
                    arr_19 [i_0] [i_1] [i_4] = min(((((-1 ? 4294967295 : -16297)) * (-1 * 0))), (arr_8 [i_1] [i_0 + 1] [i_0 + 2] [i_0 + 3]));
                    var_25 = max((((!(85 <= -1)))), (max((var_5 || 6), 33)));
                }
                var_26 ^= ((-((max(9645, (arr_8 [i_1] [i_0 + 4] [i_0 + 1] [i_0 + 2]))))));
                arr_20 [i_1] [i_0] = var_10;
            }
        }
    }
    var_27 = var_18;
    var_28 = -54;
    #pragma endscop
}
