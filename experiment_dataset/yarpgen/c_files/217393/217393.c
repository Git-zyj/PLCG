/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((~(!0)));
                    var_15 = (max(46, ((46 ? 23 : 62))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_11 [i_1 - 1] [i_1 + 1]);
                                arr_16 [i_0] [2] [i_0] [i_3] [i_4] [i_4] [i_4] = -409425897;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_20 [7] [19] [i_5] = 52;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_26 [i_1] [i_1] [1] [i_1] [i_1] [i_1] [i_1] = (min((min(122, 3)), -64));
                                arr_27 [i_0] [i_1] [i_0] [i_6] [i_7] [i_6] [i_7] = ((-1411 ? 8 : 59));
                            }
                        }
                    }
                }
                arr_28 [i_0] [i_1] = 100;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            {
                arr_36 [i_8] [i_9] = (((3 ? (arr_1 [i_9] [i_9 - 1]) : 12005618279790282697)));
                arr_37 [i_8] [i_8] = ((((-32767 - 1) ? -8 : 1841287638749600506)));
            }
        }
    }
    var_16 = (!112);
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 7;i_13 += 1)
                    {
                        {
                            var_17 = (min(var_17, 20640));
                            var_18 = 49;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                arr_59 [i_10] [i_11] [i_11] [i_14] [i_15] [8] = -52;
                                arr_60 [3] [3] [i_14] [i_15] [3] [8] [3] = (arr_48 [i_10] [i_10] [2]);
                                var_19 = (min(var_19, (((((((409425897 ? 62 : 8126710429753409757)))) ? ((-85 ? 62 : var_7)) : ((204 ? 97 : (~-32762))))))));
                                var_20 = ((((min(-45, 210))) ? (32760 && 203) : -106));
                            }
                        }
                    }
                }
                var_21 |= 208;
            }
        }
    }
    #pragma endscop
}
