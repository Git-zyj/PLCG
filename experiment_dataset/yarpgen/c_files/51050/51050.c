/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_8 > 13);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = (0 < 243);
            var_13 = (min((arr_4 [i_0 + 4] [i_0 + 3] [i_0 + 3]), (((var_3 < ((var_7 / (arr_4 [i_0 - 1] [i_0 - 1] [i_1]))))))));
            var_14 = (((max(var_9, (arr_4 [i_0 + 2] [i_1] [i_0 + 2]))) & (arr_4 [i_0 + 1] [i_1] [i_0 + 1])));
            var_15 = (min((((((min(var_3, (arr_5 [i_0] [i_1] [i_1])))) < var_10))), var_7));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_12 [i_0] [i_2] = ((!((((arr_3 [i_0 + 1]) << var_6)))));
                arr_13 [i_2] [i_2 - 1] [i_2] = arr_5 [i_0 + 4] [i_2] [i_2 + 2];
            }
            var_16 = (((arr_9 [i_0 + 4] [i_0 + 4] [i_2 - 2]) >> (((arr_9 [i_0 + 2] [i_0 + 4] [i_2 + 1]) - 87))));
            var_17 ^= (((arr_4 [i_0 + 2] [i_0 + 2] [i_2 - 2]) & ((((arr_10 [i_0] [i_2 + 2]) + var_10)))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 = var_1;
            arr_18 [i_4] [i_0 - 1] = ((((min(var_4, (arr_4 [i_0 + 1] [i_0 + 4] [i_4])))) - ((max(((max(60, -5474))), (((arr_11 [i_0 - 1] [i_4] [4] [i_0 - 1]) >> (var_3 - 113))))))));
        }
        var_19 = max((((241 && (var_8 - 1)))), (arr_0 [i_0 + 3]));
        var_20 &= ((((((((var_10 + 2147483647) >> (var_0 - 22408)))) < (max(var_10, var_11))))) <= ((((min(var_8, var_9)) <= (((-(arr_7 [10]))))))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_21 [i_5] [i_5] [i_5] = ((((((var_10 <= (arr_4 [i_0 + 1] [i_0 + 1] [i_0])))) + (((arr_3 [i_0 + 3]) - var_4)))) < (arr_15 [i_0]));
            var_21 ^= max(((((var_7 / var_11) <= (arr_1 [i_0 + 4])))), (arr_16 [i_5] [i_5] [i_5]));
            arr_22 [i_0 + 4] [i_5] = (arr_1 [i_0 - 1]);
        }
    }
    #pragma endscop
}
