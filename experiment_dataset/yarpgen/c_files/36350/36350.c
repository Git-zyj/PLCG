/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(min(((21620 ? 56 : 666781691)), 2108975568))));
    var_18 *= (((((((4295729730056902264 ? 14044 : 1))) ? ((1 ? 1 : 35078)) : 0)) - (((var_6 != (!2488877414862995690))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0 - 1] [5] [i_1] = (((max(-65528, 1)) - (((((1 ? 0 : 1)) != ((255 ? 1 : 35069)))))));
                arr_9 [10] [8] [i_1] = (((+-31623) ? -58384 : (((1 - 1) - 15957866658846555925))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((8 ? 1 : 666781675)));
                            var_19 = ((-11685 ? (60429 < -589060232) : ((((min(65533, 18446744073709551602))) ? (3584 & 29) : (11685 <= 4294967295)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
