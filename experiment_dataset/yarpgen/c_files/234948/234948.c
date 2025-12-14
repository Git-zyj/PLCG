/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(var_9, var_11))) ? ((536870400 ? var_10 : ((-1659450150 ? var_6 : 12535391245760365183)))) : (((137438953472 ? var_9 : ((max(3758096896, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = min(var_7, ((-((536870421 ? 1594153738684377487 : 3758096892)))));
                var_14 = ((((!(arr_4 [9]))) ? 536870387 : 3758096896));
                arr_7 [i_0] [5] [i_0] = ((133 ? (((((arr_4 [9]) ? 10762938803141682558 : (arr_3 [i_0]))) * (!151))) : 1));
                var_15 = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
