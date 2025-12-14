/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199652
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_16 = arr_8 [i_2] [i_1 - 4] [i_0];
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) 268435456)) && (((/* implicit */_Bool) var_14)))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7))))))) + (((((/* implicit */_Bool) ((short) (signed char)48))) ? ((~(arr_0 [i_2] [i_2]))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) var_5);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (-218880933)))) ? (((218880933) / (((/* implicit */int) (short)4096)))) : (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0 + 2] [i_0] [i_0]))))) / (((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) min((var_4), (var_8)))))))))));
        var_20 = ((short) (short)(-32767 - 1));
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            var_21 = ((((/* implicit */_Bool) ((int) min((arr_0 [i_3] [i_0]), (((/* implicit */int) arr_3 [i_3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_3])));
            var_22 = ((((/* implicit */int) ((signed char) (short)31))) & (((((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1])) & (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 3])))));
            var_23 = max(((-(((/* implicit */int) ((((/* implicit */int) (short)-29)) > (((/* implicit */int) (short)-29339))))))), (((/* implicit */int) (short)(-32767 - 1))));
            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)-29337)), (-892795107)))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_3] [i_3])) : ((+(((/* implicit */int) var_11)))))) >= (max((((/* implicit */int) max((var_0), ((signed char)88)))), (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_5 [i_0] [i_3] [i_3] [10]))))))));
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                var_25 = ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_4] [i_0]))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) var_13);
                            var_27 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) (signed char)-1);
            }
            var_29 = ((/* implicit */short) (-(((/* implicit */int) (signed char)48))));
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((signed char) arr_9 [i_0] [i_4])))));
            arr_21 [i_0] [i_4] [i_4] = ((/* implicit */int) (short)-32763);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4))));
            var_32 += ((((int) arr_5 [16] [i_8] [i_0] [i_0])) + (((((/* implicit */_Bool) 301519313)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-84)))));
            var_33 -= ((/* implicit */signed char) ((((/* implicit */int) ((short) var_4))) / (arr_16 [i_0 + 1])));
        }
    }
    for (short i_9 = 2; i_9 < 24; i_9 += 4) 
    {
        arr_26 [i_9] = var_7;
        /* LoopSeq 3 */
        for (signed char i_10 = 2; i_10 < 24; i_10 += 1) 
        {
            var_34 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_27 [i_9 + 1] [i_9 - 1] [i_10 - 2])) : (((/* implicit */int) var_2)))) | (var_3))) + (((/* implicit */int) arr_25 [i_10]))));
            var_35 = ((/* implicit */signed char) min((((((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) var_12)))) ? (((/* implicit */int) (signed char)7)) : (1093539026))), (min((((((/* implicit */int) var_9)) + (((/* implicit */int) var_11)))), (arr_30 [i_10])))));
            var_36 -= ((((/* implicit */int) ((((/* implicit */int) (signed char)30)) < (((/* implicit */int) (short)32704))))) + (((/* implicit */int) (signed char)(-127 - 1))));
        }
        for (short i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            var_37 = ((/* implicit */signed char) var_7);
            var_38 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) ((signed char) arr_25 [i_9 - 2]))))) && (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_24 [i_9 + 1] [i_9 + 1]))))));
        }
        for (int i_12 = 2; i_12 < 24; i_12 += 3) 
        {
            arr_36 [(short)1] |= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_9 - 1]))))) ? ((+(((arr_31 [i_9] [i_9] [i_9]) / (((/* implicit */int) (short)-5046)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (arr_30 [i_9])))) ? (((268435455) | (((/* implicit */int) (signed char)-103)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)1984)) : (((/* implicit */int) var_2)))))));
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) arr_28 [i_9]))));
        }
    }
    var_40 -= ((/* implicit */signed char) var_5);
    var_41 |= ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (short i_13 = 1; i_13 < 9; i_13 += 2) 
    {
        for (short i_14 = 3; i_14 < 11; i_14 += 1) 
        {
            {
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_18 [i_13 + 1] [i_13 + 1] [i_14] [i_13] [i_14] [i_14 - 1]))))))));
                arr_42 [i_13] [i_14] = ((/* implicit */short) arr_14 [i_13] [i_13]);
                arr_43 [i_13] [i_13] [i_13] &= min((((((/* implicit */int) (short)-23636)) | (((/* implicit */int) ((short) var_10))))), (arr_12 [15] [i_13] [i_13]));
                arr_44 [i_13] [i_13] [i_14] = var_1;
            }
        } 
    } 
}
