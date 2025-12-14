/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((var_9 ^ (~26650))))));
                    arr_7 [i_1] = (min((((var_12 && 3197003118) ? (((-(arr_0 [16])))) : ((2590708394 ? 2590708394 : -8668)))), var_7));
                    var_14 = ((((max(((var_0 ? var_8 : 48340)), -2066))) ? ((((~var_1) ? (371122869 || -4837237867740254835) : ((max(var_5, var_1)))))) : ((64135 ? 8322999980091176973 : 1885020539))));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = 35405;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_17 = (min(var_12, var_3));
                arr_13 [i_4] [i_3] = (min(((((min(10583, (arr_1 [13])))) ? ((3477770718 ? 7546788731119409210 : 1401625506)) : -2238037720156215787)), -1521644868));
            }
        }
    }
    #pragma endscop
}
