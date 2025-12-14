/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (max(((var_2 % (max(var_9, var_11)))), ((((26790 ? -2000679701061669008 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = -1314742348;
                var_16 = (min(var_16, ((max(((((!(arr_3 [i_0] [i_0] [i_0]))))), ((~(62 ^ 65))))))));
            }
        }
    }
    var_17 = ((max(((200 ? 13837481212911710177 : 197), var_12))));
    var_18 = var_10;
    #pragma endscop
}
