/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((~((((2009315461 << (37702790 - 37702762)))))));
    var_14 &= (max((-var_9 - var_4), var_0));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((!(((arr_6 [i_0] [i_1]) || (arr_6 [i_0] [i_1])))));
                arr_7 [i_0] [i_0] = (min(((((min((arr_6 [i_0] [i_1]), var_9)) ? (max(2285651827, 409301040)) : var_1))), (min((((!(arr_4 [i_0])))), ((-(arr_4 [i_0])))))));
                arr_8 [i_0] [i_0] [i_0] = 1419428733290247926;
            }
        }
    }
    #pragma endscop
}
