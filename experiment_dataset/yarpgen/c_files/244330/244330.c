/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 ? ((((max(51, var_8))) ? var_15 : ((max(22, 51))))) : (~51)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((max(21, ((0 ? (arr_7 [i_1]) : (arr_7 [i_1]))))))));
                            var_19 = (max(var_19, ((min(-var_8, (max(8507434628670201713, 15637360632670185035)))))));
                        }
                    }
                }
                arr_15 [i_1] = max(17404039162289036210, ((max(var_3, (arr_9 [i_1])))));
            }
        }
    }
    var_20 = (min(var_11, (min((max(9939309445039349911, 994020968203291783)), (var_4 - 18446744073709551615)))));
    var_21 = (max(var_2, ((123 ? 1 : 0))));
    var_22 = 4294967295;
    #pragma endscop
}
