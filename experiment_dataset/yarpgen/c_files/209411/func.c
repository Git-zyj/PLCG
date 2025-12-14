/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209411
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((arr_5 [i_1 - 1] [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0]))))));
                var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0]))))));
                var_18 = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_15))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))) < (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */_Bool) max((((/* implicit */short) var_4)), (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_3] &= ((unsigned short) arr_7 [(_Bool)1] [i_2]);
                arr_12 [i_3] [i_3] = ((/* implicit */_Bool) ((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) arr_10 [i_3 + 2] [i_2])) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [(unsigned short)7] |= ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_17 [i_5] [i_3])))), (((/* implicit */int) ((arr_7 [i_4] [i_4 + 1]) || (((/* implicit */_Bool) min((arr_16 [i_2]), (var_7)))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_9 [i_3 + 1])))) : ((+(((/* implicit */int) min(((unsigned short)58350), (((/* implicit */unsigned short) arr_17 [i_3] [i_5]))))))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3 + 2])) != (((arr_9 [i_3 + 2]) ? (((/* implicit */int) arr_9 [i_3 + 1])) : (((/* implicit */int) arr_9 [i_3 + 2]))))));
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_17 [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_24 [i_7] [(_Bool)1] [(_Bool)1] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)203)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)44905))));
                        var_25 = ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_3 + 2]))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63889)) ? (((/* implicit */int) (unsigned short)63904)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((arr_17 [i_2] [i_8]), (((/* implicit */unsigned char) arr_9 [i_4])))))))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (short)659)) : (((/* implicit */int) arr_21 [i_2] [i_3 + 2] [i_4] [i_8 + 1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_2] [(_Bool)0] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (short)5505)) : (((/* implicit */int) var_13)))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)198)) > (((/* implicit */int) (_Bool)1)))))))))))));
                        arr_28 [i_2] [i_3 + 2] [i_2] = arr_15 [i_2] [i_2];
                        arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1] [i_4 - 1])) - (((/* implicit */int) (unsigned short)63878))))) ? (((/* implicit */int) max((arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_4 + 1]), (arr_21 [i_4] [i_3 + 2] [i_2] [i_4 + 1])))) : (((((/* implicit */int) (short)8)) - (((/* implicit */int) max((var_11), (((/* implicit */short) (unsigned char)209)))))))));
                    }
                    var_27 = ((/* implicit */_Bool) var_9);
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)169)) : (((((/* implicit */_Bool) (unsigned short)61103)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)2505)) : (((/* implicit */int) (short)-5505))))))));
                    var_29 = ((/* implicit */short) (+(((/* implicit */int) (short)5505))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2505)) ? (((/* implicit */int) (short)-2496)) : (((/* implicit */int) (unsigned short)63890))));
                    var_31 = ((((/* implicit */_Bool) arr_14 [(short)15] [(short)15] [i_3 + 2])) || (((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3 + 2])));
                }
                for (unsigned short i_10 = 1; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    arr_36 [(short)15] [(short)15] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned short)2473), (((/* implicit */unsigned short) (short)-28390))))) + (((/* implicit */int) max(((short)-5481), (((/* implicit */short) (_Bool)1)))))));
                    arr_37 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5514)) ? (((/* implicit */int) ((_Bool) min(((short)0), ((short)-9708))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)61555)) : (((((/* implicit */_Bool) (unsigned short)5509)) ? (((/* implicit */int) (short)9738)) : (((/* implicit */int) (unsigned char)0))))))));
                    arr_38 [i_10] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_10 + 2] [i_10 + 1] [i_3 + 2] [i_3 - 1]))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */_Bool) arr_22 [i_10 - 1] [i_10 - 1] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */int) arr_22 [i_10 - 1] [i_10 + 1] [i_3 + 1] [i_3 + 2])) : (((/* implicit */int) arr_22 [i_10 + 1] [i_10 - 1] [i_3 - 1] [i_3 - 1]))))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    arr_42 [i_2] [i_11] = ((/* implicit */unsigned short) (_Bool)1);
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+((+(((/* implicit */int) var_12)))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (unsigned short i_13 = 4; i_13 < 16; i_13 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */short) (+((~(((/* implicit */int) arr_19 [i_3]))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_14 = 2; i_14 < 15; i_14 += 1) 
                            {
                                arr_51 [i_14] [i_14] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) min(((short)-20200), (((/* implicit */short) arr_44 [i_14 + 2] [i_3 - 1])))))));
                                var_34 = ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_13 [i_14 - 2] [i_14 - 1] [i_14 - 1])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-7964)), ((unsigned short)65519)))) ? (((((/* implicit */_Bool) arr_41 [i_14] [i_13] [i_12] [i_2])) ? (((/* implicit */int) arr_39 [(short)13] [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) (short)13)) ? (((/* implicit */int) arr_27 [i_2] [i_3 + 1] [i_12] [i_13])) : (((/* implicit */int) (unsigned char)12))))))));
                            }
                            var_35 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-13)) & (((/* implicit */int) (short)13))))) ? (((((/* implicit */int) var_11)) & ((+(((/* implicit */int) var_4)))))) : (min(((~(((/* implicit */int) (short)-12)))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_22 [(unsigned short)11] [i_3] [i_12] [i_13])) : (((/* implicit */int) var_1))))))));
                            var_36 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
}
