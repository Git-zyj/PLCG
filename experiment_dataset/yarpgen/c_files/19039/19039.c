/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 1562965613));
    var_18 = var_13;
    var_19 = (min(var_19, var_11));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (max((min((var_7 >= var_15), ((~(arr_3 [i_0]))))), (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 = ((((max(11280, (arr_0 [i_0])))) ? (!var_11) : -32760));
            var_21 = var_11;

            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                var_22 = (min(var_22, (((!((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))))))));
                var_23 = ((!((max(5, ((var_14 ? 9214364837600034816 : 5)))))));
            }
        }
        var_24 = (max(var_24, var_7));
    }
    #pragma endscop
}
