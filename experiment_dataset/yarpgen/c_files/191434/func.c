/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191434
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) min((var_10), (var_8)))), (4503599625273344ULL))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) var_2);
        var_15 *= ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        var_16 *= var_7;
        var_17 = ((/* implicit */long long int) arr_0 [i_1]);
        var_18 ^= ((/* implicit */_Bool) -1948136918);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
            arr_7 [i_1 - 1] [7ULL] = ((/* implicit */unsigned long long int) var_5);
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_10 [i_3] [i_1] = ((/* implicit */int) var_0);
            arr_11 [i_3] [i_3] |= ((/* implicit */int) (~(var_7)));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (unsigned short)23971);
            var_21 *= ((/* implicit */unsigned short) arr_1 [i_1 - 1]);
            var_22 *= ((/* implicit */unsigned long long int) arr_2 [i_1]);
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_0))));
        arr_16 [i_5] = ((/* implicit */unsigned short) (-(var_4)));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((/* implicit */_Bool) var_6);
        var_25 ^= var_4;
        var_26 = (unsigned short)23260;
    }
    /* LoopSeq 1 */
    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)123))));
            arr_25 [i_7] [i_7] = ((/* implicit */unsigned short) 3326308507U);
            arr_26 [16LL] [16LL] &= ((/* implicit */unsigned short) var_11);
        }
        for (unsigned int i_9 = 3; i_9 < 14; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 3; i_10 < 13; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            arr_38 [i_7] [i_9] [i_9] [i_7] = ((/* implicit */unsigned short) arr_34 [i_10] [i_10] [i_12]);
                            var_27 = arr_23 [i_7 + 3] [i_7 + 3];
                            var_28 = ((/* implicit */signed char) (-(-6529848589051595688LL)));
                            var_29 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                            arr_39 [i_7] [i_7] = ((/* implicit */unsigned short) arr_34 [i_10 - 2] [i_10] [i_10]);
                        }
                    } 
                } 
                arr_40 [i_7 + 4] [i_9] [i_7] = ((/* implicit */int) (~((~(arr_30 [i_9] [i_9] [i_7] [5U])))));
            }
            for (int i_13 = 3; i_13 < 13; i_13 += 1) 
            {
                var_30 *= ((/* implicit */unsigned int) (-(3774523172337529606LL)));
                var_31 = ((/* implicit */unsigned short) var_7);
                var_32 = ((/* implicit */short) arr_30 [5] [i_9] [i_7] [i_9]);
            }
            arr_43 [i_7] [6] = ((/* implicit */int) arr_32 [i_7] [i_7]);
        }
        var_33 |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)42275))));
        arr_44 [i_7] = arr_22 [i_7] [i_7];
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            var_34 |= ((/* implicit */signed char) arr_32 [i_7] [(_Bool)1]);
            /* LoopSeq 2 */
            for (unsigned short i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                var_35 = ((/* implicit */short) arr_20 [i_7] [i_15]);
                arr_51 [i_7] [i_15] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    for (unsigned short i_17 = 1; i_17 < 15; i_17 += 2) 
                    {
                        {
                            arr_57 [i_17] [i_17 + 2] [i_7] [i_7] [i_14] [i_7 + 4] = ((/* implicit */unsigned long long int) var_11);
                            arr_58 [i_17] [i_7] [i_7] [i_15] [i_7] [i_7] [i_7] = ((/* implicit */int) arr_42 [i_15 - 1] [i_15 - 1]);
                            var_36 = arr_56 [i_15] [i_16] [i_15] [i_16] [i_16];
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [(unsigned short)10]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 4) 
                {
                    var_38 = ((/* implicit */int) (~(9223372036854775802LL)));
                    arr_61 [i_7] [i_7] [i_15] [i_15 - 1] [i_18] [i_18] = ((/* implicit */int) var_9);
                    var_39 = ((/* implicit */unsigned short) min((var_39), (arr_52 [(signed char)0] [i_18] [i_18] [i_18 + 1])));
                    /* LoopSeq 2 */
                    for (int i_19 = 2; i_19 < 15; i_19 += 2) 
                    {
                        arr_64 [i_7] = (~(((/* implicit */int) (unsigned short)17246)));
                        arr_65 [i_7] [13] [i_15] [i_14] [i_14] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                    }
                    for (unsigned int i_20 = 2; i_20 < 15; i_20 += 1) 
                    {
                        var_40 = ((/* implicit */int) (unsigned short)51261);
                        arr_69 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned short)1] = ((/* implicit */signed char) var_3);
                        arr_70 [i_14] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_18] [i_14]))));
                        arr_71 [i_7] = (~((~(((/* implicit */int) (unsigned short)2)))));
                        var_41 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned short i_21 = 2; i_21 < 15; i_21 += 3) 
                {
                    var_42 = ((/* implicit */unsigned int) arr_27 [12]);
                    arr_75 [(short)16] [(short)16] [i_7] [i_21] = ((/* implicit */_Bool) arr_18 [i_7]);
                }
                for (signed char i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    arr_79 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7] [i_7] = ((/* implicit */unsigned short) var_11);
                    var_43 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_63 [i_22] [i_14] [i_15] [i_15] [i_14] [(unsigned short)3]))));
                }
            }
            for (short i_23 = 1; i_23 < 13; i_23 += 4) 
            {
                var_44 = ((/* implicit */unsigned short) var_7);
                arr_83 [i_14] [(short)12] |= ((/* implicit */unsigned long long int) -655144013);
            }
        }
    }
}
