/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                var_18 = ((max((arr_0 [i_1]), (arr_0 [i_1]))));
                var_19 = ((((max((min((arr_6 [i_1]), -8700263716378962757)), (((2453153828753818851 ? (arr_1 [1]) : (arr_1 [20]))))))) ? ((((4273651574 >= ((((!(arr_2 [i_1]))))))))) : (min((arr_0 [i_1]), -124))));
                var_20 = (max(var_20, ((((((10 ? 1 : 1))) && (((((3142243310 ? (arr_0 [i_1]) : 1)) << (((!(arr_0 [i_0]))))))))))));
            }
        }
    }
    var_21 = 9223372036854775786;
    #pragma endscop
}
