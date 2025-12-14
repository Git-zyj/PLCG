/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 = 3;
                    arr_7 [i_0] [i_1] [i_2] = (((((!1) ? (~28) : (((4205962665412848401 > (arr_0 [7] [i_1])))))) | -90));
                }
            }
        }
    }
    var_11 |= (min((!106), (-5664264926674286896 > -118)));
    var_12 = ((var_0 ? 16085837462018994937 : (!var_5)));
    var_13 += var_7;
    var_14 *= ((~((~(~255)))));
    #pragma endscop
}
