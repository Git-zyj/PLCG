/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_15 += ((248 ? 239 : 20));
                    var_16 = ((29 * (arr_4 [i_1 + 1] [i_1 - 1] [i_0])));
                    arr_9 [i_0] = ((!(arr_4 [i_0] [4] [i_0])));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_3] [i_3] = (~-62);
                    arr_15 [i_0] [17] [20] = ((19624 | (min((arr_6 [i_0 + 1] [i_1] [i_1 - 1] [i_3]), var_3))));
                    var_17 = (min(var_17, ((((11079973709697385127 / 94) + ((((arr_0 [i_3]) % 12))))))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_18 = (max(-131882364, (((arr_13 [i_0 - 2] [i_0 - 2] [i_1 - 1]) ? 15473984551022627814 : (((min(1, 248))))))));
                    var_19 = (arr_6 [1] [i_1 - 1] [i_4] [i_1]);
                }
                var_20 = -509211859;
            }
        }
    }
    #pragma endscop
}
