/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217844
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -325596807))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_13))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1222100977)) ? (325596794) : (((/* implicit */int) (unsigned short)58610))))) || (((/* implicit */_Bool) (unsigned short)13813))))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) ((int) (signed char)-116)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [(unsigned short)8] [i_1] = ((/* implicit */signed char) -325596834);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    var_20 *= ((unsigned char) -325596834);
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((int) arr_8 [i_0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) 0))));
                        var_23 -= ((/* implicit */int) (signed char)18);
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (-325596850) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                        var_25 *= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51711))));
                        arr_25 [i_0] [i_5] = ((/* implicit */int) var_10);
                    }
                }
            } 
        } 
        arr_26 [(signed char)9] [i_0] = ((/* implicit */int) ((signed char) (+(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (signed char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((signed char) (signed char)8)))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((signed char) max((-325596835), (((/* implicit */int) ((unsigned short) -325596807)))))))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_28 -= ((/* implicit */signed char) (unsigned char)0);
            /* LoopSeq 2 */
            for (unsigned char i_10 = 2; i_10 < 13; i_10 += 2) 
            {
                arr_35 [i_8] [i_9] = ((/* implicit */signed char) max((((/* implicit */int) (short)-30274)), (16777215)));
                arr_36 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)109))));
            }
            for (int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                var_29 += ((/* implicit */int) (signed char)120);
                arr_41 [i_8] [i_9] [(unsigned short)5] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((signed char) (short)9169)))) ? (((/* implicit */int) var_7)) : (max((16777215), (((/* implicit */int) (unsigned char)92))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        arr_47 [i_8] [(short)13] [(short)13] [(short)13] [(unsigned char)1] [(short)11] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15058)) ? ((+(((/* implicit */int) (unsigned short)13430)))) : (((/* implicit */int) ((signed char) (unsigned char)159)))));
                        arr_48 [i_8] [i_9] [i_9] [i_9] [i_13 + 2] = ((/* implicit */unsigned char) ((arr_12 [i_13 + 1] [i_9] [i_13 + 2] [i_9] [i_13 + 2]) / (((/* implicit */int) var_13))));
                        var_30 += (unsigned short)52111;
                        var_31 -= ((/* implicit */signed char) arr_19 [i_8] [i_13 + 1]);
                    }
                    var_32 = ((/* implicit */int) (unsigned char)168);
                    arr_49 [i_8] [(unsigned short)4] [i_9] [9] [i_12] [i_12] = ((/* implicit */short) arr_43 [i_9]);
                }
            }
            var_33 ^= ((unsigned char) max((((/* implicit */unsigned short) var_8)), (max((((/* implicit */unsigned short) (unsigned char)107)), ((unsigned short)21058)))));
            var_34 -= ((/* implicit */unsigned short) ((short) ((((arr_19 [i_8] [i_9]) + (2147483647))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)9169)))) + (62))))));
        }
        arr_50 [i_8] [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_8] [i_8] [i_8])) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) arr_3 [i_8] [i_8] [i_8])))), (((/* implicit */int) (unsigned char)92))));
    }
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-42))));
}
