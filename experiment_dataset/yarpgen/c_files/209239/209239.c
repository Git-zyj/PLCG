/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_0] [i_0] = (max((((arr_6 [i_1 - 2] [i_2 + 1]) ^ 3467267399)), var_9));
                    var_11 = (min(var_11, (min((((-(~var_2)))), (min((arr_5 [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 + 1]), ((min(0, var_9)))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_12 = (min((((arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]) : (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))), (((23895 % (min(87, 4232133780)))))));
                                var_13 = (max(((((min(var_2, 33981))) ? (((var_2 << (((-122588326 + 122588342) - 16))))) : -122588331)), ((((((var_1 ? -122588315 : var_5))) ? (max(122588325, -122588306)) : var_0)))));
                            }
                        }
                    }
                    var_14 = (max(8968764517875042548, (((max(-122588337, var_7))))));
                    var_15 = (max(var_15, ((min(((((min(122588325, (arr_9 [i_0] [i_3] [i_0])))) ? var_6 : ((1805628346 ? var_5 : var_2)))), ((min((~122588325), 890))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 7;i_8 += 1)
                        {
                            {
                                var_16 = -122588333;
                                var_17 *= (((((max(var_0, var_5))) ? (((var_3 <= (arr_14 [i_0] [0] [i_4] [i_3])))) : -122588315)));
                                arr_23 [i_0] = (~-122588326);
                            }
                        }
                    }
                    arr_24 [i_4] [i_0] [i_0] = var_3;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 8;i_10 += 1)
            {
                {
                    var_18 = var_0;
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_35 [i_0] [i_0] = ((((min(((var_5 ? 2349809120 : 255)), var_0))) ? (((-8203686384925578552 ? (((-122588337 ? 1945158160 : 122588325))) : 2349809135))) : ((((var_1 ? 10484511009263493948 : var_8)) | (~-122588326)))));
                                arr_36 [i_11 + 1] [i_11 + 2] [8] [i_10 + 1] [i_9] [i_0] = (((2349809136 >= -122588332) ? (min((2349809136 & var_2), (!1945158160))) : ((((max(106, 1945158195))) ? -122588337 : 2851094287))));
                                var_19 = ((var_7 ? (min(((((var_1 + 2147483647) << (var_6 - 248666885)))), 2349809120)) : 87));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 122588314;
    #pragma endscop
}
