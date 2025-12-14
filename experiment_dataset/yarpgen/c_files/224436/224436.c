/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (max(var_10, 3957537450));
                var_11 += (((((((arr_7 [i_1] [5] [i_0]) ? 67 : var_0)) >= ((((var_4 < (arr_7 [i_0] [i_0] [i_0]))))))) ? ((~(~1743853384))) : ((((((-(arr_2 [i_0])))) ? ((80 ? var_5 : 3)) : ((4 << (((arr_6 [i_0]) - 4347856686934187257)))))))));
            }
        }
    }
    var_12 ^= ((-(((2145479089103929593 << (-1738320283 + 1738320327))))));
    var_13 = ((var_5 ? (var_9 >= var_1) : -5847432719965129174));
    var_14 = (min(var_14, 9));
    #pragma endscop
}
