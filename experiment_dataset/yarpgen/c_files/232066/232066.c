/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (((min(-3159028755186571430, var_7)) << (((min((3436554619 & 6308006048004497552), 1638161111)) - 1146134538))));
                var_11 = (min(var_1, (max(79, 5332575990971844569))));
                arr_6 [i_0] = ((((9323598803110284686 << (17465099340119336074 - 17465099340119336068))) << (((!((max(var_1, 7813420793574854460))))))));
            }
        }
    }
    var_12 = (((((max(7946263860517502250, var_0))) != ((-8194300082841797383 ? 26683 : 9123145270599266930)))) ? 981644733590215531 : (-1259506322 % 4755851503926689124));
    #pragma endscop
}
