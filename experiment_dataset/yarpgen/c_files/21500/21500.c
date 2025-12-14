/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += -13132;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((+(min(((2250249675 ? (arr_5 [8] [i_1] [2]) : var_17)), var_13)))))));
                arr_6 [i_0] [i_0] [i_0] = (((!65535) ? 10943833387772725963 : (13131 == -13150)));
            }
        }
    }
    var_20 = -21285;
    #pragma endscop
}
