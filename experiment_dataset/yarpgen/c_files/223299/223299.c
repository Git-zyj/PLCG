/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (40251 << 0);
                var_10 = ((((max(37039, 1))) ? (max((min(-31951361, 9223372036854775801)), ((max(28496, 40245))))) : (((((474264279 ? 101 : -2998124993663333927))) ? -8770483442877909260 : ((max(-474264280, -103)))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 = ((46909 > ((18645 ? 1 : 1))));
                    arr_10 [i_0] [i_1 - 2] [i_2] = ((13822 ? 59180 : 1));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_12 = ((max(1, 1)));
                    var_13 = 46891;
                }
                arr_15 [15] [i_1] = (((((-5307093753681781948 ? 1 : (!28959)))) ? ((max((24 + 1), -10))) : ((448976468909654529 ? (max(4294967295, 2318254449797885117)) : (((-1446407650 ? 46891 : -1346807385)))))));
            }
        }
    }
    var_14 = ((!(var_2 || 127)));
    #pragma endscop
}
