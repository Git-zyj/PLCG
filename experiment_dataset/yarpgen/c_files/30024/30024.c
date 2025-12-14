/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 5686;
    var_13 = ((((max((6020787654285442093 && 2720920273270709538), 6020787654285442093))) || ((min(288230376151711743, ((0 ? -1062944115518779007 : 75)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [7] [i_1 + 1] = (max((((!(9733654714375131180 || 59298)))), -70));
                var_14 = ((((-1062944115518779007 - (arr_4 [i_0 + 3] [i_1 + 2]))) > ((-(arr_4 [i_0 - 1] [i_1 + 1])))));
                arr_6 [i_0] [i_1 - 1] = ((155 % (max((max(9223372036854775800, var_6)), (((1152921504606846975 ? -28 : 3224)))))));
                arr_7 [i_0] [i_1 - 2] [i_1] = ((-((max((arr_4 [i_0] [i_0]), -11)))));
            }
        }
    }
    #pragma endscop
}
