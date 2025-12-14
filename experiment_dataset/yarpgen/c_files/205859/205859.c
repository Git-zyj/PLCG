/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((var_4 ? (!8380416) : (max(41707, 4277605561))))) ? 8380416 : ((23829 + (min(3471281389, (arr_1 [1])))))));
                arr_7 [i_0] = (arr_0 [i_0 + 1] [i_1]);
            }
        }
    }
    var_20 = var_19;
    #pragma endscop
}
