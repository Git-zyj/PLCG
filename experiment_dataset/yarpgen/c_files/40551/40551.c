/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((~((var_14 ? var_0 : 102252984))))) ? ((4192714313 ? 11294895327856323102 : 7096)) : ((max(-4192714280, 121)))));
                arr_7 [i_0] [i_1 - 1] [i_1] = ((var_17 - (7096 | 14981)));
                var_19 = (min(var_19, (((max(2850646278, 0))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_20 = ((((((var_9 ? -4808488185410732509 : 121)) - -5841201109143770760))));
                        var_21 += -7124;
                        var_22 = (min(var_22, ((min((((-(~1)))), (((var_17 ? 3 : 3636729428))))))));
                    }
                    var_23 = (min(((12605542964565780855 ? 548805097 : (0 && -548805097))), ((7096 ? 0 : -1))));
                    var_24 = 73;
                    var_25 = (max(var_25, var_7));
                    var_26 |= ((!((max(255, 1817241653)))));
                }
            }
        }
    }
    #pragma endscop
}
