/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((min((max(((max(1, 0))), (~0))), ((max(0, 1))))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 *= ((+(max((~1), (!1)))));
                    arr_6 [i_0 - 2] [3] [i_2] = (~128);
                    var_15 = (max(1, ((~((min(0, 28)))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_16 = (max((max(((max(1, 1707657133))), (min(1, 6793053421557130616)))), (min((max(3502204240249282546, 127)), ((max(0, 2587310162)))))));
                    var_17 = (!124);
                }
                var_18 -= (max(((-(max(18446744073709551615, 128)))), ((max((min(-1, 1)), 128)))));
            }
        }
    }
    var_19 = ((-((~(~0)))));
    var_20 = (max(var_20, ((max(((max(1, 1707657133))), (max((max(44994, 7302152654694946535)), ((min(1, 1))))))))));
    #pragma endscop
}
