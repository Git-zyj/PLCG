/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23577
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 -= ((unsigned char) (+(((/* implicit */int) var_3))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) (unsigned char)13)), (18U)))))));
        arr_5 [i_0] = min((3639328649U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_0]), ((unsigned char)214))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)21))))) : (((((/* implicit */_Bool) (unsigned char)182)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_11))));
    /* LoopSeq 3 */
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (97314602U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) (-(4294967289U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (534773760U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        arr_9 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)188)) && (((/* implicit */_Bool) 187809041U))));
        arr_10 [i_1] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned char)77)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * ((+(3702573509U)))))));
        arr_11 [(unsigned char)6] = ((/* implicit */unsigned char) 2750394521U);
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_16 += ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_12 [i_2] [i_2])))), (((/* implicit */int) min(((unsigned char)131), (arr_12 [i_2] [i_2]))))));
        var_17 = (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (4294967293U))));
        arr_16 [i_2] = ((/* implicit */unsigned char) 2093056U);
        arr_17 [i_2] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)119)), (0U)));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            arr_22 [i_3] = (unsigned char)122;
            arr_23 [4U] [4U] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)219))));
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (unsigned char)28))))))));
            arr_26 [(unsigned char)14] [i_4] = ((/* implicit */unsigned char) var_5);
            arr_27 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)63)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_4] [i_4]))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            arr_34 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned char)238)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (268435455U)))));
            arr_35 [i_6] = ((/* implicit */unsigned char) ((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 - 1] [i_6])))));
            arr_36 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_6 - 1])) : (((/* implicit */int) var_3))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                var_19 -= ((/* implicit */unsigned char) var_10);
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_42 [i_8] [i_6] [(unsigned char)12] [i_8] &= ((/* implicit */unsigned char) ((2018311078U) < (arr_1 [i_5 + 1] [i_8])));
                    arr_43 [i_6] = ((/* implicit */unsigned char) 1295840720U);
                    var_20 *= ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_1));
                }
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_21 *= ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (33554431U));
                    arr_48 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6] = ((/* implicit */unsigned char) 939524096U);
                    var_22 -= ((/* implicit */unsigned int) (unsigned char)128);
                    arr_49 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)5)) % (((/* implicit */int) (unsigned char)183))));
                }
                arr_50 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) arr_3 [i_6 + 1] [i_6]);
            }
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            arr_53 [i_5] [i_10] = ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)254))))) : (((387031115U) << (((((/* implicit */int) var_2)) - (51))))));
            var_23 = ((/* implicit */unsigned int) ((unsigned char) var_9));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))))) > ((+(var_5))))))));
                var_25 |= ((unsigned int) (!(((/* implicit */_Bool) arr_20 [i_11] [i_11] [i_11]))));
                var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
            }
            arr_57 [i_5] [12U] [i_10] = 3625120661U;
            arr_58 [i_5] [i_5] = 323243198U;
        }
        for (unsigned int i_12 = 2; i_12 < 13; i_12 += 3) 
        {
            var_27 = var_6;
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    for (unsigned char i_15 = 1; i_15 < 13; i_15 += 3) 
                    {
                        {
                            arr_71 [i_12] [i_5] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((60520228U) - (60520210U)))));
                            arr_72 [i_5] [i_12] [i_12 - 2] [(unsigned char)11] [i_12] [i_12 - 2] [(unsigned char)4] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5));
                            arr_73 [i_12] = ((((/* implicit */_Bool) var_8)) ? (((unsigned int) var_9)) : (var_0));
                            var_28 = ((/* implicit */unsigned int) arr_59 [i_5 + 1]);
                        }
                    } 
                } 
            } 
        }
        arr_74 [i_5] [i_5] = ((/* implicit */unsigned char) (~(((5U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        arr_75 [i_5] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    }
}
