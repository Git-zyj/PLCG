/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((var_8 ? ((26722953 ? var_15 : var_2)) : 1))), ((max(var_13, var_1)))));
    var_21 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = (((((var_11 ? ((max((-32767 - 1), var_8))) : (3221225472 ^ var_16)))) ? 216 : ((((((arr_1 [i_0]) % -452435386))) ? (arr_2 [i_0]) : (16435 == var_2)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_1] = ((690321821 + (((((((arr_1 [i_1]) >= -2088625682))) >= 0)))));
            arr_7 [i_1] = ((((((arr_5 [i_1]) / var_5))) ? (((((min(-4402847921995238991, 42457))) ? ((((arr_0 [i_0]) == 65508))) : ((~(arr_0 [i_0])))))) : ((96 | (((arr_5 [i_1]) ^ 2048))))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_23 = 1187767620;
                        arr_14 [i_1] = 132;
                    }
                }
            }
        }
    }
    #pragma endscop
}
