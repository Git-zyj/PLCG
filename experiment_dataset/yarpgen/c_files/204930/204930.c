/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((((max(1, 13639029079455599582))) ? var_2 : 52))) ? ((((!-17425) % -29188))) : 4807714994253952012));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [1] [i_1 + 2] [i_2] [1] [i_3] = (max((((~1) ? 1 : ((1 ? 13639029079455599593 : 1)))), 1));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_14 [i_4] [i_4] [i_2] [i_4] [i_0 + 2] = (((((~-26786) ? ((1 ? 1 : 226)) : ((max(var_0, 106)))))) ? (~4807714994253952006) : 29540);
                                arr_15 [i_4] [i_4] = (((-18446744073709551608 + 2147483647) << (((min(1, 14004868909144446776)) - 1))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_18 [i_5] [i_1] [i_1] [i_1 - 1] [i_1] = ((1 ? 6672217546195367900 : 1));
                                var_14 = (max(var_14, ((max((!1), ((1 ? 11774526527514183715 : 0)))))));
                                arr_19 [i_5] = ((max((6489340043835526618 > 1125899638407168), var_3)) == (((4807714994253952001 ? var_11 : 1))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_15 += (238 && -11390);
                    var_16 = ((-((var_12 ? 51 : 10821))));
                    var_17 = 13639029079455599627;
                    var_18 += 17;
                    var_19 += 31;
                }
                for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_20 = (((min(1, ((32373 ? 18445618174071144448 : 1)))) | (~var_5)));
                    var_21 = (max(var_21, (((29939 ? ((min(27, 194))) : ((-25293 ? var_12 : var_12)))))));
                    var_22 = (min((--496), 3935));
                }
                arr_26 [i_1] = ((((0 && (82 || var_0))) ? (((!32767) ? (((max(var_1, 220)))) : var_3)) : ((((247 && 216) ? ((14918700593538941385 ? 39 : -11390)) : ((max(-11390, 1))))))));
            }
        }
    }
    var_23 = (((min(((-24467 ? 14245087878396977669 : var_5)), var_5))) || (!6937));
    #pragma endscop
}
