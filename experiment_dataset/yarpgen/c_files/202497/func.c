/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202497
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
    var_11 = var_6;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))));
            var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)15])) ? (((/* implicit */int) arr_3 [i_1] [(short)0] [(short)0])) : (((/* implicit */int) arr_0 [i_0])))) >> (((max((((/* implicit */long long int) (unsigned short)48110)), (8723749107548954196LL))) - (8723749107548954170LL)))));
            var_13 = ((/* implicit */unsigned short) var_6);
        }
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) * (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) / (var_3)))));
    }
    for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) -8723749107548954197LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_1 [i_2] [i_2 - 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                arr_19 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_3] [i_2])) ? (((/* implicit */int) (short)-16889)) : (((/* implicit */int) arr_17 [i_3] [i_2 - 1]))));
                arr_20 [i_2 + 1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1]))));
            }
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))) / (arr_2 [i_3])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)25136))));
                /* LoopSeq 1 */
                for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14039)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)110)))))));
                        var_16 = arr_4 [i_6 + 2] [i_3] [i_2 - 1];
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_34 [i_2] [i_3] [i_5] = (unsigned char)55;
                        var_17 ^= ((/* implicit */long long int) arr_32 [i_8]);
                        arr_35 [i_2] [(unsigned char)4] [(unsigned char)4] [i_2 + 1] [i_2] [9LL] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_6 + 3]))));
                    }
                    /* LoopSeq 2 */
                    for (short i_9 = 3; i_9 < 11; i_9 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-14024)) ? (((/* implicit */int) (unsigned short)23153)) : (((/* implicit */int) (short)-11878))));
                        var_19 = ((/* implicit */unsigned short) (~(arr_26 [(short)8] [(short)3] [i_5] [(unsigned char)3] [i_2] [i_2])));
                        var_20 = ((/* implicit */unsigned short) var_5);
                        arr_39 [i_2] [i_9] [i_5] [i_5] [(short)0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) arr_28 [i_2] [i_6] [i_6 + 3] [i_5] [i_2])) : (((/* implicit */int) arr_28 [i_2] [i_6] [i_6 - 1] [i_5] [i_2]))));
                    }
                    for (short i_10 = 3; i_10 < 11; i_10 += 2) /* same iter space */
                    {
                        arr_43 [i_2] [i_2] [i_3] [i_5] [i_6] [i_10] = ((/* implicit */short) var_10);
                        var_21 = ((/* implicit */unsigned short) arr_25 [i_3] [i_2] [i_2] [i_2]);
                        arr_44 [i_2] = ((/* implicit */unsigned char) ((short) var_6));
                        var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (short)16889)) : (((/* implicit */int) (short)32767))))));
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_2 - 1])) & ((~(((/* implicit */int) var_8))))));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) arr_8 [i_2 + 1] [i_2]);
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((/* implicit */int) arr_3 [i_6 + 1] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_47 [i_11 + 1] [i_2] [i_6 + 3] [i_6] [i_6 - 1] [i_2]))));
                    }
                }
            }
        }
    }
}
