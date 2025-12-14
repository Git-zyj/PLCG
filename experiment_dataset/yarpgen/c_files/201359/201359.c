/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((var_1 || (arr_7 [i_0] [14])));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_14 ^= (max((((((arr_3 [i_3]) ? var_0 : (arr_9 [6] [6] [i_1 - 1] [i_1 - 1] [6]))))), ((((~(arr_12 [i_0 - 1] [i_3] [12]))) / (arr_7 [10] [i_0 - 1])))));
                            arr_14 [i_0] [i_1] [i_0] [8] [i_4] [i_4] = (max((((22661 / (arr_5 [i_4] [i_0])))), ((23 ? 232 : 436863781))));
                            var_15 |= arr_5 [2] [2];
                            var_16 ^= ((-6743443544059374214 <= (arr_3 [i_0])));
                        }
                        var_17 = (((max(246, -6743443544059374190)) | 8));
                    }
                }
            }
        }
    }
    var_18 ^= (max(var_7, 232));
    var_19 ^= (max(((var_10 ? (!112) : (var_12 < var_6))), var_3));
    var_20 = (max(23, var_11));
    #pragma endscop
}
