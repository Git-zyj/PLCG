/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 ^= 11642217097012066905;
                arr_7 [1] |= 511;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_0] [1] = (0 && 1187585980369977173);
                            arr_15 [i_0] [i_0] [i_0] [i_3] = (((4260607557632 | 64597) && (((1082472006 + ((min(0, -689413517))))))));
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_1] = (((18446739813101993983 / 1) + 0));

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_19 [i_4] = 939;
                    arr_20 [i_4] [i_4] [i_4] = ((((41 ? ((-6310606266138492122 ? 3189192354 : 1)) : 0)) >> (((((1 ? 1 : 14091344623722597483))) ? (((2781436316 ? 3 : 41))) : (2781436299 + 982867957)))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 ^= (((((((1 ? 939 : 0))) ? 29 : (18304 ^ -83))) >= 255));
                                var_22 = ((-83 != ((1 ? 4355399449986954120 : 235))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 2;
    var_24 = (((var_18 == (((1 ? 5074 : 931))))));
    #pragma endscop
}
