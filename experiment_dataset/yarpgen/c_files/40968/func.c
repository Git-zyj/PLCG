/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40968
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
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_19 = (short)32076;
                            arr_9 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0 + 3])) ^ (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1]))))));
                            var_20 = var_11;
                            arr_10 [i_1] = (((~(((/* implicit */int) ((_Bool) arr_5 [i_3] [i_3] [i_3]))))) < ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_14))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6]), (((/* implicit */short) var_8))))) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) ((_Bool) (short)11127))))) : (((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */short) min((((min(((_Bool)1), (var_12))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) max(((short)8184), (((/* implicit */short) arr_6 [i_1] [i_1]))))) ? (((arr_13 [i_0] [i_1]) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))))));
                            }
                        } 
                    } 
                } 
                var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (short)19732)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(var_18))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) var_2))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = ((_Bool) min((arr_1 [i_7]), (((/* implicit */short) (_Bool)1))));
        var_24 = (short)32767;
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_25 = ((/* implicit */short) max((var_25), (min((((/* implicit */short) ((_Bool) arr_23 [i_8 + 1]))), (arr_23 [i_8])))));
        var_26 = arr_23 [i_8 + 1];
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */_Bool) (short)-31795);
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                var_28 = ((/* implicit */short) (-((-(((/* implicit */int) min((((/* implicit */short) var_7)), ((short)21869))))))));
                var_29 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_31 [i_8] [i_9] [i_10] [i_8]))))) ? (((((/* implicit */_Bool) arr_28 [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_28 [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) (short)31804)))) : (max((((/* implicit */int) min(((short)2410), ((short)-538)))), (((((/* implicit */int) arr_28 [i_9] [i_9])) / (((/* implicit */int) (short)32755))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_30 = ((max((((/* implicit */int) min((var_18), ((_Bool)1)))), (((((/* implicit */_Bool) (short)17873)) ? (((/* implicit */int) (short)-6401)) : (((/* implicit */int) (short)8184)))))) < (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (min((var_1), ((short)32767)))))));
                            var_31 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_29 [i_10] [i_9] [i_9] [i_9]))) == (((/* implicit */int) ((short) arr_32 [i_11] [i_10])))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 1] [(short)0] [i_8 + 1])) & (((/* implicit */int) (short)-24037)))));
            var_33 = ((/* implicit */_Bool) ((short) min((arr_38 [i_8] [i_8 + 1] [i_8] [(_Bool)1] [(_Bool)1] [i_8] [i_8]), (arr_38 [i_8] [i_8 + 1] [i_8] [(_Bool)1] [i_8] [i_8] [i_8]))));
            var_34 = ((/* implicit */short) (-(((/* implicit */int) (!(var_3))))));
        }
        for (short i_14 = 4; i_14 < 18; i_14 += 1) /* same iter space */
        {
            arr_46 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((var_16) ? (((/* implicit */int) (short)-25318)) : (((/* implicit */int) max((((/* implicit */short) arr_36 [i_8] [i_14] [i_8] [(_Bool)1] [i_14])), (arr_37 [i_8] [i_8] [i_8] [i_8] [i_8])))))) : (((arr_41 [i_14 + 1] [i_14 + 1] [i_14]) ? (((/* implicit */int) arr_41 [i_14 - 1] [i_14 - 1] [i_14])) : (((/* implicit */int) arr_41 [i_14 + 1] [i_14 + 1] [i_8]))))));
            var_35 = ((/* implicit */short) ((((/* implicit */int) ((short) var_17))) <= (((min((arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_14]), (var_6))) ? (((/* implicit */int) min((((/* implicit */short) var_13)), (arr_27 [i_8])))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) arr_24 [i_8])))))))));
        }
        for (short i_15 = 4; i_15 < 18; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_36 += ((/* implicit */short) (~(((((/* implicit */_Bool) ((short) arr_23 [i_16]))) ? (((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)27055)))) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)-13520))))))));
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 15; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */short) ((_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_27 [i_18])))), ((+(((/* implicit */int) arr_53 [i_15] [i_15] [i_16])))))));
                            arr_55 [i_18] [i_16] [i_16] [i_8] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_40 [i_8 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_33 [i_8 + 1] [i_17 + 4])) != (((/* implicit */int) arr_44 [i_8 + 1] [i_17 + 1])))))));
                            arr_56 [i_16] [i_15] [i_15] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_27 [i_17 + 4])))), (((((/* implicit */int) arr_27 [i_17 + 2])) / (((/* implicit */int) arr_27 [i_17 + 4]))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_15] [i_16])) ? (((/* implicit */int) arr_29 [(short)16] [i_15] [i_15] [(short)16])) : (((/* implicit */int) max(((short)2047), (arr_26 [i_16] [i_15] [i_8]))))))) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-13520)))))))))));
                /* LoopSeq 4 */
                for (short i_19 = 2; i_19 < 17; i_19 += 1) 
                {
                    arr_60 [i_8] [i_16] [i_8] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((short) arr_23 [i_8 + 1]))) : (((/* implicit */int) min((max((arr_35 [i_19] [i_19] [i_19] [i_19]), (arr_25 [i_8]))), (arr_25 [i_8 + 1]))))));
                    var_39 = ((/* implicit */short) min((var_39), (min((min(((short)1454), (arr_43 [i_8] [i_8 + 1]))), ((short)-7105)))));
                    var_40 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_35 [i_8] [i_16] [i_8] [i_8])) : (((/* implicit */int) (short)25519))))) ? (((((/* implicit */_Bool) (short)11127)) ? (((/* implicit */int) arr_52 [(_Bool)1] [i_15] [i_16] [(_Bool)1] [i_19])) : (((/* implicit */int) (short)-6349)))) : (((/* implicit */int) ((short) (_Bool)0)))))));
                }
                for (short i_20 = 0; i_20 < 19; i_20 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */_Bool) ((min((var_16), ((_Bool)1))) ? (((/* implicit */int) min(((short)19589), (((/* implicit */short) arr_25 [i_8 + 1]))))) : (((((/* implicit */_Bool) max(((short)-1), ((short)-32170)))) ? (((/* implicit */int) arr_61 [i_8 + 1] [i_16] [i_8 + 1] [i_20])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [i_8] [i_8] [i_8] [i_16] [i_8])) : (((/* implicit */int) arr_49 [i_8] [i_15] [i_16] [i_16]))))))));
                    /* LoopSeq 1 */
                    for (short i_21 = 3; i_21 < 17; i_21 += 4) 
                    {
                        var_42 &= ((/* implicit */_Bool) max((min((((/* implicit */short) var_2)), (arr_45 [i_8 + 1] [i_8 + 1] [i_21 + 2]))), (min((arr_23 [i_21 + 2]), (var_10)))));
                        var_43 = ((/* implicit */_Bool) (short)32170);
                    }
                    arr_68 [i_8] [i_8] [i_16] = min((((/* implicit */short) ((_Bool) (short)-11127))), (max((max(((short)-24090), ((short)-11130))), (max((((/* implicit */short) var_13)), (arr_28 [i_16] [i_16]))))));
                }
                for (short i_22 = 0; i_22 < 19; i_22 += 4) /* same iter space */
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_64 [i_8] [i_8] [i_8]))) ^ (((/* implicit */int) ((short) arr_32 [i_8 + 1] [i_16])))));
                    var_45 = ((/* implicit */short) arr_35 [i_8 + 1] [i_16] [i_16] [i_16]);
                    var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) min((((((((/* implicit */_Bool) arr_57 [i_8] [i_16] [i_15] [i_8])) ? (((/* implicit */int) arr_69 [i_22])) : (((/* implicit */int) (short)11127)))) + ((+(((/* implicit */int) arr_31 [i_8] [i_8] [i_22] [i_8])))))), (((((/* implicit */int) ((_Bool) var_14))) - (((/* implicit */int) min(((short)11121), ((short)-20393)))))))))));
                }
                for (short i_23 = 0; i_23 < 19; i_23 += 4) /* same iter space */
                {
                    var_47 = ((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) ((((/* implicit */_Bool) (short)32170)) || (((/* implicit */_Bool) min(((short)-32039), (((/* implicit */short) (_Bool)0))))))))));
                    var_48 &= (!(((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_14))))))));
                    var_49 = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_67 [i_8])), ((+(((/* implicit */int) arr_66 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                }
            }
            for (short i_24 = 0; i_24 < 19; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (short i_26 = 0; i_26 < 19; i_26 += 1) 
                    {
                        {
                            arr_81 [i_8] [i_15] [i_8] [i_25] [i_25] = ((/* implicit */_Bool) (+(((((/* implicit */int) (short)-30)) / (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16380))))))));
                            var_50 &= ((/* implicit */_Bool) min((var_0), (var_11)));
                            var_51 = ((short) var_17);
                        }
                    } 
                } 
                var_52 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22972)) ? (((/* implicit */int) arr_63 [i_8] [(_Bool)0])) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
            var_53 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_61 [i_8 + 1] [(short)12] [i_15 - 1] [i_15]))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
        {
            var_54 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_62 [i_8] [i_8] [(_Bool)1] [i_8] [i_8]))));
            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) min(((~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_11)) + (268))))))), (((/* implicit */int) min((arr_58 [i_8] [i_8] [i_8 + 1]), (((/* implicit */short) arr_67 [i_8 + 1]))))))))));
            arr_85 [i_27] = ((_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_61 [i_8] [(short)4] [i_27] [i_27]))))));
            /* LoopNest 2 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_56 = ((/* implicit */_Bool) arr_72 [i_8] [i_8] [i_8] [i_8]);
                        arr_90 [i_8] [i_27] [i_28] [i_29] [i_29] = ((/* implicit */_Bool) (short)-12382);
                    }
                } 
            } 
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_57 += ((/* implicit */short) min((((((/* implicit */int) arr_88 [i_8] [i_8] [i_8] [i_30])) - (((/* implicit */int) arr_59 [i_8 + 1] [i_30] [(_Bool)1])))), (((/* implicit */int) ((short) var_13)))));
            var_58 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max(((short)-4635), (((/* implicit */short) (_Bool)0))))))) ? (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-32756)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)-10755)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_44 [i_8] [i_30]))));
        }
        var_59 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-2899))))));
    }
    var_60 = ((/* implicit */short) var_18);
    var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) min(((short)11121), (((/* implicit */short) var_4)))))) / (((/* implicit */int) var_7)))))));
}
