/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 0));
    var_14 = var_1;
    var_15 = (min(var_15, ((min(((((min(9, var_0))) ? var_4 : 1260237933)), ((((((var_7 ? 18446744073709551608 : var_12))) ? (!var_0) : 2605017700))))))));
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = ((((((var_11 <= 255) ? (arr_4 [i_3] [i_2] [i_1]) : (arr_5 [i_1 - 2] [i_1 - 1] [i_3 - 1])))) ? var_11 : var_9));
                            var_18 = (max(var_18, var_8));
                            arr_12 [i_1 - 2] [i_3] = -5987731960605890350;
                        }
                    }
                }
                arr_13 [i_0] = max(((var_3 < (arr_0 [i_1 + 1]))), ((!(arr_11 [i_1 - 2] [i_1] [i_0] [i_1]))));
                var_19 = (min((((((((arr_11 [i_0] [10] [6] [10]) <= -14))) == var_10))), ((((((arr_10 [14] [i_0] [14] [i_0] [i_0] [i_0]) < 192136901))) & ((~(arr_2 [i_0] [i_1])))))));
                arr_14 [i_1] = ((-((((arr_6 [i_1 - 2]) == (arr_6 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
