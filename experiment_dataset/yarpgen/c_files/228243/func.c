/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228243
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                arr_13 [10] [i_4] [i_1] [i_4] [i_4] = (unsigned char)194;
                                var_11 |= (unsigned char)128;
                            }
                            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                arr_16 [i_1 - 2] [i_1 - 2] [i_1] = (unsigned char)96;
                                var_12 = ((/* implicit */int) (unsigned char)242);
                                var_13 = ((/* implicit */unsigned char) -1741252111);
                            }
                            arr_17 [i_3] [i_1] [i_1] [11] = (unsigned char)150;
                            arr_18 [i_1] = (unsigned char)208;
                            var_14 = 1741252111;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_6 = 2; i_6 < 9; i_6 += 1) /* same iter space */
                {
                    var_15 ^= ((/* implicit */int) (unsigned char)20);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_6 - 2] [i_7] [i_7] = 715069960;
                        var_16 *= ((/* implicit */unsigned char) -202868586);
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 3; i_8 < 11; i_8 += 2) 
                    {
                        arr_27 [i_0] [i_1] [0] [i_8] = (unsigned char)249;
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 4) /* same iter space */
                        {
                            var_17 += (unsigned char)155;
                            arr_30 [i_1] [i_1] = (unsigned char)87;
                            arr_31 [i_6] [i_0] [i_6 + 1] [i_6 + 3] [i_6 + 1] [i_6] [i_6] |= (unsigned char)0;
                            var_18 ^= ((/* implicit */int) (unsigned char)194);
                            arr_32 [i_0] [i_1] = ((/* implicit */unsigned char) 2031648265);
                        }
                        for (unsigned char i_10 = 2; i_10 < 8; i_10 += 4) /* same iter space */
                        {
                            arr_37 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_1] [i_0] = (unsigned char)128;
                            arr_38 [i_1] = ((/* implicit */unsigned char) -202868573);
                            var_19 = ((/* implicit */unsigned char) 1126418643);
                            var_20 = ((/* implicit */int) (unsigned char)9);
                        }
                        for (unsigned char i_11 = 2; i_11 < 8; i_11 += 4) /* same iter space */
                        {
                            arr_41 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 2] = (unsigned char)173;
                            var_21 = ((/* implicit */int) (unsigned char)171);
                            arr_42 [i_1] [i_1] [i_6] [i_1] [i_0 + 2] = ((/* implicit */int) (unsigned char)17);
                            var_22 = ((/* implicit */int) (unsigned char)9);
                        }
                        var_23 = (unsigned char)16;
                    }
                    arr_43 [i_1] [i_1] [i_1] = (unsigned char)0;
                }
                /* vectorizable */
                for (int i_12 = 2; i_12 < 9; i_12 += 1) /* same iter space */
                {
                    var_24 = (unsigned char)169;
                    arr_47 [i_1] [i_1] [i_12] = (unsigned char)129;
                }
                arr_48 [i_1] [i_1] = (unsigned char)224;
            }
        } 
    } 
    var_25 = ((/* implicit */int) (unsigned char)151);
}
