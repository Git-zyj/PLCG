/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1792 ? var_12 : (((((var_8 == 16777215) == var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_19 = (1521010544 / 2630);
                    var_20 *= ((~(~-3372279583999232395)));
                    arr_7 [i_1] [i_0] &= (((arr_1 [i_0] [i_1 + 3]) ? (max(((max(var_0, (arr_1 [i_0] [i_0])))), (arr_2 [i_1]))) : ((((((arr_0 [i_2] [i_1]) * (arr_5 [i_0] [i_1]))))))));
                }
                arr_8 [10] [1] [i_0] = ((((arr_2 [i_1 - 2]) ? 65535 : var_16)));
                var_21 = (max(var_21, ((((((3372279583999232390 ? 1895072555204699004 : 4294967295))) ? (arr_5 [i_1 + 3] [i_1 + 2]) : (arr_0 [i_1 + 3] [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
