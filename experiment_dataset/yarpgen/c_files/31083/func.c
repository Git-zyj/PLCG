/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31083
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
    var_17 &= ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((((/* implicit */int) (unsigned short)29680)) | (((/* implicit */int) var_4)))) ^ (((/* implicit */int) (unsigned short)35855))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_19 = (!(var_16));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)35856)) ? (((/* implicit */int) (unsigned short)29652)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)35842)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) - ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)29694)) : (((/* implicit */int) (_Bool)1))))));
            var_21 *= ((/* implicit */unsigned short) arr_4 [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_15))))));
            arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)29680)) : (((/* implicit */int) var_15))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_17 [i_0] [i_0] [i_3] = var_8;
            var_22 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_3]))));
            arr_18 [i_0] [i_0] [i_0] = arr_15 [i_0] [i_3];
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_21 [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)29679)))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_10 [i_4 - 1])))) : ((~(((/* implicit */int) (unsigned short)7878))))));
            var_23 = ((/* implicit */unsigned short) arr_16 [i_0] [i_4 - 1] [i_4 - 1]);
            var_24 = ((/* implicit */_Bool) (unsigned short)29714);
            var_25 = ((/* implicit */unsigned short) (_Bool)0);
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_26 [i_0] = ((/* implicit */unsigned short) ((arr_24 [i_0] [i_4 - 1] [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_0] [i_4 - 1] [i_5]))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_4]))));
                    var_27 |= ((/* implicit */_Bool) ((arr_25 [i_0] [i_4 - 1]) ? (((/* implicit */int) arr_25 [i_6] [i_4 - 1])) : (((/* implicit */int) arr_25 [i_0] [i_0]))));
                    arr_29 [i_0] [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_4 - 1] [i_5] [i_6])) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_5])) : (((((/* implicit */_Bool) (unsigned short)7874)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_7 [i_0] [i_4 - 1] [i_5]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0])) + (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_15)))))));
                        var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35866)) ? (((arr_24 [i_0] [i_4] [i_6]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_14)))))));
                        arr_32 [i_0] [i_4] [i_5] [i_6] [i_7 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_4 - 1])) <= (((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 1] [i_7 + 1]))));
                        var_30 = (!((!(((/* implicit */_Bool) (unsigned short)14336)))));
                    }
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_31 = (!(arr_1 [i_4 - 1]));
                arr_37 [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_0] [i_0])))))));
                var_32 = ((/* implicit */_Bool) ((arr_36 [i_4] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */int) arr_36 [i_4 - 1] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_36 [i_0] [i_4 - 1] [i_4 - 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 1; i_9 < 23; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_43 [i_0] [i_4] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_8] [i_0] [i_8] [i_9 + 2])) ? (((((/* implicit */_Bool) arr_34 [i_0] [i_4 - 1] [i_9])) ? (((/* implicit */int) arr_25 [i_9 + 1] [i_10 + 1])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned short)35841))));
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_8] = (_Bool)0;
                    }
                    for (unsigned short i_11 = 1; i_11 < 23; i_11 += 4) 
                    {
                        var_33 -= ((/* implicit */unsigned short) (_Bool)1);
                        arr_48 [i_8] [i_0] [i_8] [i_9] [i_11 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_0] [i_4] [i_9 - 1]))));
                        var_34 += var_8;
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 2; i_12 < 24; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_4 - 1])) ^ (((/* implicit */int) arr_24 [i_4 - 1] [i_9 + 2] [i_12 + 1]))));
                        arr_51 [i_0] [i_4 - 1] [i_8] [i_9 + 1] [i_0] = ((/* implicit */unsigned short) var_16);
                        var_36 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)29694)))) + (2147483647))) >> (((/* implicit */int) arr_31 [i_0] [i_4 - 1] [i_8] [i_9] [i_9 - 1] [i_12 - 1] [i_12 - 2]))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))));
                    }
                    var_37 += ((/* implicit */_Bool) (unsigned short)57658);
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_55 [i_8] [i_8] [i_9 - 1] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)57652)) : (((/* implicit */int) (_Bool)1))));
                        var_38 = ((/* implicit */_Bool) var_14);
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)7856)) : (((/* implicit */int) var_5))))) || ((!(arr_4 [i_4])))));
                        var_40 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_4 - 1] [i_9 - 1]))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((arr_31 [i_9] [i_9 - 1] [i_9 - 1] [i_14] [i_14] [i_14] [i_14]) || (((/* implicit */_Bool) (unsigned short)10056)))))));
                        var_42 = var_16;
                        var_43 *= ((/* implicit */unsigned short) (_Bool)1);
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) - (((((/* implicit */int) (unsigned short)29679)) - (((/* implicit */int) (_Bool)1))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        arr_60 [i_0] [i_0] [i_8] [i_0] [i_0] = (!(((/* implicit */_Bool) ((unsigned short) arr_20 [i_0] [i_0] [i_0]))));
                        var_45 = ((((/* implicit */int) arr_24 [i_15 + 1] [i_15] [i_15 + 1])) < (((((/* implicit */int) (unsigned short)14336)) - (((/* implicit */int) (unsigned short)4095)))));
                        arr_61 [i_8] [i_4 - 1] [i_8] [i_9] [i_15 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7685)) / (((/* implicit */int) (unsigned short)1))));
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    var_46 = ((/* implicit */unsigned short) ((_Bool) var_2));
                    arr_65 [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)9))));
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
        {
            arr_70 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) (_Bool)1))));
            var_47 = var_0;
            /* LoopSeq 2 */
            for (unsigned short i_19 = 2; i_19 < 24; i_19 += 3) 
            {
                arr_73 [i_19 - 1] [i_17] [i_17] = (unsigned short)14358;
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_48 = ((((/* implicit */int) var_6)) > (((/* implicit */int) (_Bool)1)));
                            arr_78 [i_17] [i_17] [i_19 + 1] [i_17] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_54 [i_21] [i_18])) <= (((/* implicit */int) var_6))))) > (((/* implicit */int) (unsigned short)57657))));
                            arr_79 [i_17] [i_18] [i_19 - 2] [i_21] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) var_15);
                        }
                    } 
                } 
                var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_17] [i_18] [i_19 - 1]))));
                var_50 = ((/* implicit */unsigned short) ((_Bool) arr_63 [i_18] [i_17]));
                arr_80 [i_17] [i_17] [i_18] [i_19 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_17] [i_17] [i_17] [i_18] [i_18] [i_19 + 1] [i_19 - 2])) : (((/* implicit */int) arr_75 [i_17] [i_18] [i_18] [i_19] [i_17] [i_18]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_62 [i_17] [i_17] [i_19 + 1]))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_51 = ((/* implicit */unsigned short) var_12);
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_88 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_23 + 1] [i_23 + 1])) | (((/* implicit */int) var_8))));
                            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) var_1))));
                            var_53 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)60667)))) - (((/* implicit */int) arr_53 [i_17] [i_17] [i_22] [i_23]))));
                        }
                    } 
                } 
            }
        }
        arr_89 [i_17] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_66 [i_17])) * (((/* implicit */int) arr_84 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))));
        var_54 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_42 [i_17] [i_17] [i_17])) : (((/* implicit */int) var_16))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        var_55 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)0))));
        /* LoopSeq 3 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_95 [i_26] = ((/* implicit */unsigned short) var_5);
            var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_25] [i_25])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18144))))) : (((/* implicit */int) arr_15 [i_25] [i_26]))));
        }
        for (unsigned short i_27 = 0; i_27 < 11; i_27 += 1) 
        {
            var_57 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (min((arr_74 [i_25] [i_27] [i_27] [i_25] [i_27]), (arr_2 [i_27])))));
            var_58 = (((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65535)))))) <= (((arr_47 [i_27] [i_27] [i_27] [i_25] [i_25] [i_25] [i_25]) ? (((/* implicit */int) ((((/* implicit */int) arr_76 [i_25] [i_27])) < (((/* implicit */int) arr_97 [i_25]))))) : (((((/* implicit */int) var_14)) >> (((((/* implicit */int) arr_5 [i_25] [i_27] [i_27])) - (61293))))))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_103 [i_25] [i_25] [i_28] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
            arr_104 [i_25] [i_25] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_75 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)0) ? (((/* implicit */int) arr_24 [i_25] [i_25] [i_28])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) arr_41 [i_25])) >> (((((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)65535)))) - (5615))))) : (((/* implicit */int) (unsigned short)65535))));
        }
    }
}
