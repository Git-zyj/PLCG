/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27471
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_11 &= ((/* implicit */signed char) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [(short)3]))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_9 [(signed char)0] = ((/* implicit */short) ((signed char) arr_0 [i_1]));
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_12 [i_1] |= ((/* implicit */short) arr_11 [(short)7] [i_1]);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_12 = ((/* implicit */short) ((signed char) min((((/* implicit */int) min((((/* implicit */short) arr_17 [i_4] [i_4] [i_3] [i_1])), (arr_1 [i_3])))), ((+(((/* implicit */int) arr_0 [i_1])))))));
                        var_13 = ((/* implicit */signed char) ((short) arr_10 [i_2]));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_24 [i_1] [i_2] [(short)11] [i_4] [(short)10] = ((/* implicit */short) arr_5 [(short)9]);
                            var_14 = min((((signed char) arr_7 [i_2])), (var_10));
                        }
                        var_15 *= arr_13 [i_1] [i_1] [i_4];
                    }
                } 
            } 
            arr_25 [i_1] [i_1] [i_2] = ((short) max((arr_8 [i_2]), (arr_8 [i_1])));
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            arr_29 [i_6] [i_6] [i_6] = ((signed char) arr_11 [i_6 + 1] [i_1]);
            arr_30 [i_1] [i_1] [i_6] = var_0;
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
        {
            arr_33 [i_7 + 2] = ((/* implicit */signed char) arr_19 [i_7 - 1]);
            var_16 &= ((/* implicit */signed char) arr_2 [i_7 + 2]);
            var_17 = arr_14 [i_1] [i_7 - 1] [i_7];
        }
        for (short i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_18 = var_4;
            arr_37 [(signed char)6] [i_8] = arr_20 [i_1] [i_8] [i_1] [i_1];
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                arr_41 [i_9] |= min((((/* implicit */short) arr_8 [i_1])), (((short) arr_28 [i_8 - 1] [i_8 + 2] [i_8 - 1])));
                var_19 = arr_32 [i_8] [i_8 + 1] [i_8];
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_20 = ((/* implicit */short) min((arr_8 [i_8 + 1]), (min((arr_8 [i_8 - 1]), (arr_8 [i_8 + 1])))));
                        arr_48 [i_1] [i_1] [i_8 - 1] [i_8] [i_1] [(signed char)14] [(signed char)9] = arr_28 [i_10] [i_10] [i_11];
                    }
                    var_21 = max((arr_0 [i_1]), (((/* implicit */short) arr_13 [i_8 - 1] [i_8 + 1] [i_8 - 1])));
                    arr_49 [i_8] [i_1] [i_8] [i_1] [i_10] |= ((/* implicit */signed char) max((((short) arr_13 [i_8 + 2] [i_8 + 1] [i_8 + 1])), (var_5)));
                }
            }
        }
        var_22 = ((/* implicit */short) (-((+(((/* implicit */int) var_3))))));
    }
    for (short i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_23 = ((signed char) ((signed char) arr_50 [i_12]));
        var_24 = var_10;
    }
    for (signed char i_13 = 3; i_13 < 13; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                {
                    var_25 = ((/* implicit */signed char) max((arr_57 [i_14]), (min((arr_2 [i_13 - 2]), (var_0)))));
                    var_26 += ((/* implicit */signed char) (-(((/* implicit */int) arr_53 [i_13 - 1] [i_13 - 3]))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            {
                                arr_67 [i_13] [(short)5] [i_16] [i_13] = arr_58 [i_13 - 2] [i_13 - 1];
                                var_27 &= arr_11 [i_13] [i_13];
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_34 [i_14])))));
                    arr_68 [i_15] [i_13] [(signed char)7] = min(((short)32755), ((short)-1));
                }
            } 
        } 
        var_29 -= max((((/* implicit */short) min((arr_14 [i_13] [(signed char)14] [i_13 - 3]), (arr_51 [(signed char)6] [(short)14])))), (((short) (short)-9)));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) min((((signed char) arr_20 [i_13] [i_13] [(short)13] [i_13 + 1])), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))))))))));
        var_31 = ((/* implicit */short) ((signed char) min((var_5), (arr_36 [i_13 - 1] [i_13 - 3]))));
    }
    var_32 = ((/* implicit */short) (-(((/* implicit */int) min((((short) var_4)), (((/* implicit */short) var_10)))))));
}
