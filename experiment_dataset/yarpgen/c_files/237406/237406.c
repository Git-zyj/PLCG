/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-3118537657127253858 > 3480265756615366275);
    var_16 = ((((max(14966478317094185340, 3480265756615366275))) ? (~var_2) : 14966478317094185332));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [6] |= ((3480265756615366304 > ((max(284536319, (arr_4 [12] [12]))))));
                arr_6 [i_0] = 5445758032224267705;
            }
        }
    }
    #pragma endscop
}
