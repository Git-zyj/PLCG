/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (52831 ^ 4038298493);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = ((-113 >= (arr_7 [i_1] [i_2])));
                    var_13 = arr_3 [i_0] [i_0] [i_2];
                    var_14 += (((max(4294967274, (((!(arr_4 [i_2]))))))) ? var_9 : ((min(4294967274, 3221225472))));
                }
            }
        }
    }
    var_15 *= ((((!(!4294967282))) || var_7));
    var_16 = (max(((798738408335215290 ? -1 : 4294967274)), (max((3645351419 - 126), (min(1, 649615876))))));
    #pragma endscop
}
