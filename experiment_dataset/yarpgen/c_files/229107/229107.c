/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = (((((((50152 ? 50147 : -2147483638))) ? (((arr_0 [i_0]) ? 50153 : (arr_3 [i_0]))) : (arr_3 [i_0 - 1])))) ? (arr_4 [i_2]) : 0);
                    var_11 = (((((4445103395122594868 ? 32765 : -13))) ? (arr_5 [i_0]) : (min((3458764513820540928 & 145), ((((-2406 + 2147483647) << (((var_4 + 122) - 11)))))))));
                    arr_6 [i_0 - 1] [i_1] [i_1] [i_2] = ((-(arr_0 [i_1])));
                }
            }
        }
    }
    var_12 = (max(var_12, (((46 ? 813869897373334765 : -2147483638)))));
    var_13 = ((var_7 ? (((3458764513820540936 << (((~248) + 252))))) : (min((((-160858952 ? var_3 : var_4))), (max(var_6, -1215826063))))));
    var_14 = (min(var_14, var_9));
    var_15 = ((((((var_8 ? var_3 : 2147483640)) ? var_9 : ((3961936859952738973 ? 4294967293 : var_2))))));
    #pragma endscop
}
