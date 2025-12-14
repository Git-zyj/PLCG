/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max((3932480195654113838 < -2286235886802450066), (var_8 + var_10))))));
    var_16 = max((var_12 > 240450084), var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_1]);

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_18 = (arr_4 [2] [i_2 + 1]);
                    var_19 = var_11;
                    var_20 = (max(4054517211, ((max((max((-2147483647 - 1), 2147483647)), -2147483626)))));
                }
                var_21 = ((var_3 ? ((((((!(arr_7 [2] [10])))) << ((((arr_6 [i_1] [i_0] [i_0] [i_0]) >= (arr_3 [i_1]))))))) : ((~(arr_5 [i_0])))));
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = (max(var_22, ((-(!var_8)))));
        var_23 = ((~((var_8 ? ((((arr_8 [i_3]) && (arr_10 [i_3] [i_3])))) : (var_0 || var_2)))));
        arr_11 [i_3] = (((((max((arr_8 [1]), 1))) ? (~-6724933116086219007) : ((max(1458075443, 1))))));
        var_24 = var_5;
    }
    var_25 = (((var_0 ? (!var_14) : 1)));
    #pragma endscop
}
