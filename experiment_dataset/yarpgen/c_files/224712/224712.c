/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] = ((((((((347002352 ? -22773 : (arr_0 [i_0])))) ? var_7 : ((min(104, (arr_0 [i_1]))))))) ? (min(-54, ((min((arr_1 [i_0 - 2]), 14910))))) : ((((((arr_3 [i_1]) ? (arr_0 [i_1]) : var_12))) ? 32 : (arr_5 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3 - 1] = (arr_4 [i_1] [i_2]);
                            var_13 = (arr_8 [i_0 - 2] [i_0 + 4] [i_0] [i_0 + 2]);
                            var_14 = (((((57846 ? -451332029 : 54))) == (min((arr_9 [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 3]), (arr_9 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0])))));
                        }
                    }
                }
                var_15 -= ((-50 ? 2174983502 : -1608802907));
            }
        }
    }
    var_16 = (min(var_16, (((-8112732447571671699 ? 0 : 1292519605)))));
    #pragma endscop
}
