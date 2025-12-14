/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((!(136465095042764656 >= 1230976888513478405)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [6] [i_0] = (+-1133);
        var_12 += ((~18310278978666786960) || ((!(!-1))));
        var_13 = (!18310278978666786946);
        var_14 &= ((!(-32767 - 1)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                {
                    arr_11 [i_1] = ((~((~(6794251062621183544 & 8323)))));
                    var_15 = ((((~(35184371826688 || 48023))) == (!-2097152)));
                    arr_12 [i_1] = (~14476694973090073354);
                }
            }
        }
        arr_13 [i_1] [i_1] = (((~(~32758))));
    }
    var_16 = (!-var_0);
    var_17 = var_2;
    #pragma endscop
}
