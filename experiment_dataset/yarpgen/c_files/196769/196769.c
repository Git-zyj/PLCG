/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((!((0 && (!4066503510006168414)))));
                    arr_11 [11] [11] [12] = (!823442375);
                    arr_12 [i_0] [i_1] = ((~((((-7239806459402416557 <= 6) <= ((1596262586 >> (7239806459402416557 - 7239806459402416551))))))));
                    var_20 = ((((~(~19439))) % ((((240 > 3803535121998781566) < ((max(23, 54593))))))));
                }
            }
        }
    }
    var_21 = ((227 << (var_12 + 9186259243700605671)));
    #pragma endscop
}
