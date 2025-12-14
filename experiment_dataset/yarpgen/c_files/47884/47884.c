/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((arr_5 [i_0] [1]) - (~255))))));
                var_15 = (min((((((min(61084957, var_0))) ? var_5 : ((7703 ? 17242 : (arr_3 [i_0] [i_0])))))), 13600781));
                var_16 = (max(var_16, ((min((~12891739855747802848), var_11)))));
                var_17 = 16266681198969403713;
                var_18 = ((1 ? 4294967282 : 1788812717638649511));
            }
        }
    }
    var_19 &= 4281366514;
    var_20 = min(var_1, 105);
    var_21 = (max(var_21, (((!(((((4281366514 ? var_11 : -12775)) << (var_9 - 4938)))))))));
    #pragma endscop
}
