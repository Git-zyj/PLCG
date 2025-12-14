/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5000
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) ((max(((-(((/* implicit */int) (short)15872)))), (((/* implicit */int) ((((/* implicit */int) (short)-15872)) == (((/* implicit */int) (short)-15872))))))) % (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_0 - 1]))));
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_18))));
                arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_17)) - ((~(((/* implicit */int) ((short) var_2)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_1 [i_2 - 1] [i_3])))) : (((((/* implicit */int) (short)-15873)) % (((/* implicit */int) (short)-15873)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)15872))))))))));
            arr_14 [i_2] [i_2 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))));
        }
        for (short i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((_Bool) min(((short)-5), (var_12)))))));
                        arr_25 [i_2 - 1] = ((/* implicit */short) ((_Bool) min((((/* implicit */int) ((_Bool) (short)6449))), ((~(((/* implicit */int) (short)1016)))))));
                        arr_26 [i_2 - 1] [i_4] [(_Bool)1] = ((/* implicit */short) min((((_Bool) (short)0)), (arr_24 [i_6])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_31 [i_7] [i_4] [i_2] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min((((/* implicit */short) var_6)), (var_1))))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) ((short) arr_16 [i_2 + 1]))) : (((arr_16 [i_2 + 1]) ? (((/* implicit */int) arr_16 [i_2 - 1])) : (((/* implicit */int) var_3))))));
            }
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_35 [(short)6] [(short)6] = ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) ((_Bool) (short)-15872)))));
                            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (_Bool)0)))));
                            arr_41 [i_9] [i_4] [i_9 + 1] [i_9] [i_4] [i_9 + 1] [i_8] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) arr_19 [i_2 + 1] [i_2 + 1])) : (((((/* implicit */_Bool) (short)-21182)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_42 [i_2 + 1] [i_4 - 2] = arr_18 [i_2] [i_2] [i_8];
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_12 = 1; i_12 < 9; i_12 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((max((((arr_11 [(short)0]) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) var_6)))), ((-(((/* implicit */int) var_16)))))), (((/* implicit */int) ((short) (_Bool)0))))))));
                    var_26 += ((/* implicit */_Bool) var_12);
                    var_27 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_12 + 1] [i_4]))))), ((-(((/* implicit */int) ((var_14) || (((/* implicit */_Bool) var_16)))))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (var_17)));
                    arr_47 [i_4] [(_Bool)1] [i_4 - 3] [(_Bool)1] |= var_5;
                }
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (((short) min((((/* implicit */short) arr_24 [i_11])), ((short)-15268)))))))));
                arr_48 [i_2] [i_2] [i_2] [i_11] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_7))))));
            }
        }
        var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) arr_30 [i_2])))))) ? (((/* implicit */int) max((arr_2 [i_2 - 1]), (((/* implicit */short) arr_32 [i_2 - 1]))))) : (((/* implicit */int) var_10))));
        arr_49 [i_2] [i_2 + 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((short) arr_32 [i_2]))))) ? (((/* implicit */int) ((short) max((var_5), (var_7))))) : (((/* implicit */int) var_16))));
        var_31 -= ((/* implicit */short) (-(((/* implicit */int) (short)10755))));
    }
    /* LoopSeq 3 */
    for (short i_13 = 2; i_13 < 18; i_13 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((_Bool) ((_Bool) (short)-1))))));
            var_33 *= max(((_Bool)1), ((!(((/* implicit */_Bool) max((arr_3 [i_14] [(short)4]), (((/* implicit */short) var_7))))))));
            arr_56 [i_14] [i_14] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (short)-24462))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_2))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_61 [i_13 - 2] &= ((/* implicit */short) (~(((((/* implicit */int) arr_53 [i_13 - 1])) | (((/* implicit */int) arr_0 [i_13]))))));
            arr_62 [i_13 - 1] [i_13] = arr_4 [i_13] [i_13] [i_13];
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (short i_17 = 3; i_17 < 17; i_17 += 4) 
                {
                    for (short i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (short)32767))));
                            arr_72 [(_Bool)1] [i_17] [(short)11] [i_15] [(short)11] [i_13] = ((/* implicit */_Bool) ((short) (short)17237));
                            arr_73 [i_13] [i_13] [i_15] [i_15] [i_16] [i_17] [i_18] = (!(((_Bool) ((((/* implicit */_Bool) (short)-15062)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */_Bool) var_16);
        }
        /* vectorizable */
        for (short i_19 = 1; i_19 < 16; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (short i_20 = 0; i_20 < 19; i_20 += 2) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (short i_22 = 3; i_22 < 18; i_22 += 2) 
                    {
                        {
                            arr_87 [i_22] [i_21] [(short)1] [i_19] [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) arr_74 [i_19 + 3] [i_20] [i_22 - 2])) >> (((/* implicit */int) arr_74 [i_19 - 1] [i_21] [i_22 + 1]))));
                            var_36 |= var_13;
                        }
                    } 
                } 
            } 
            arr_88 [i_13 - 1] [i_19] = ((/* implicit */short) ((_Bool) (_Bool)1));
            var_37 |= ((/* implicit */short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_70 [i_19])))));
            arr_89 [i_13] = var_10;
            var_38 = ((/* implicit */_Bool) min((var_38), ((!(((/* implicit */_Bool) ((short) arr_0 [i_19])))))));
        }
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 19; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 19; i_24 += 2) 
            {
                {
                    arr_97 [(short)2] [(short)2] [i_24] = var_15;
                    arr_98 [i_13] [i_13 + 1] [i_13 + 1] [i_13] = ((/* implicit */_Bool) arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] [(short)9]);
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 19; i_25 += 1) 
                    {
                        arr_102 [i_13 - 1] [i_23] [i_24] [i_25] = ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_13)))) : ((-(((/* implicit */int) var_8))))));
                        arr_103 [i_13] [(short)0] [i_24] [i_25] = min((((((/* implicit */int) arr_66 [(short)9] [i_23] [i_23] [i_25])) > ((-(((/* implicit */int) (_Bool)0)))))), ((!(((/* implicit */_Bool) (short)-17238)))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                    {
                        var_39 -= ((/* implicit */short) (+(((/* implicit */int) ((short) ((short) (short)17627))))));
                        var_40 *= ((/* implicit */_Bool) (short)17238);
                        arr_107 [i_13 + 1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) var_5))))) & (((/* implicit */int) (short)9953))));
                    }
                    var_41 -= ((/* implicit */short) (~((-(((/* implicit */int) arr_52 [i_13 + 1] [i_24]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
    {
        arr_112 [i_27] [i_27 + 1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (_Bool)1))));
        var_42 = ((/* implicit */_Bool) max((var_42), ((!(((/* implicit */_Bool) var_10))))));
    }
    /* vectorizable */
    for (short i_28 = 0; i_28 < 16; i_28 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (_Bool)0))));
                        arr_124 [i_28] [i_28] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)18228)) ? (((/* implicit */int) (short)-25539)) : (((/* implicit */int) (short)30787))))));
                        arr_125 [i_28] [i_28] [i_28] [i_28] = (_Bool)0;
                    }
                } 
            } 
        } 
        var_44 = ((/* implicit */_Bool) ((short) ((var_2) ? (((/* implicit */int) arr_67 [i_28] [i_28] [i_28] [i_28])) : (((/* implicit */int) (short)25545)))));
        /* LoopSeq 1 */
        for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) 
        {
            var_45 = (_Bool)1;
            arr_128 [i_28] [i_32] [i_32] = ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)));
            var_46 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_90 [i_32 + 1] [(short)14]))));
            arr_129 [i_28] [i_32] [i_28] = ((/* implicit */short) (!(arr_94 [i_28] [i_32 + 1] [i_32] [i_32 + 1])));
            arr_130 [i_28] [i_32] [i_32 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_86 [i_28] [i_28] [i_28] [i_28]))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) arr_63 [i_32 + 1] [i_32 + 1] [i_32 + 1]))));
        }
    }
}
