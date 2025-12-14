/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199900
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
    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_10)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [(_Bool)1])) % (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) max((var_12), (var_8)))) : (((/* implicit */int) arr_0 [i_0]))))));
                    var_18 = ((/* implicit */unsigned int) ((_Bool) arr_3 [i_0]));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */short) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [(short)11])) : (((/* implicit */int) var_5)))) * (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_1] [8U])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) ((short) (_Bool)1)))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1]);
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_15 [(short)10] [i_1] [(unsigned short)6] [i_6] &= (_Bool)1;
                            arr_16 [i_0] [i_0] [(short)1] [i_5] [i_6] = ((/* implicit */_Bool) var_6);
                            var_22 += (unsigned short)39058;
                            arr_17 [i_5] [i_0] = arr_7 [i_0] [i_2] [(unsigned short)13] [i_0];
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_6] = ((/* implicit */short) var_14);
                        }
                        for (short i_7 = 4; i_7 < 14; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_7] [(unsigned short)2] [i_2 - 1] [i_7 + 1]))) ? (((/* implicit */int) max(((short)4776), (((/* implicit */short) arr_7 [i_7] [i_2] [i_2 + 1] [i_7 + 1]))))) : (((((/* implicit */int) (unsigned short)46094)) >> (((/* implicit */int) arr_7 [i_7] [8U] [i_2 + 1] [i_7 - 4])))))))));
                            var_24 = ((/* implicit */short) var_12);
                            var_25 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-11161)) + (11174))))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_24 [i_0] [i_0] [(unsigned short)1] [i_2] [i_2] [(_Bool)0] [i_8] = ((/* implicit */short) ((unsigned int) max((375616921U), (((/* implicit */unsigned int) (unsigned short)53446)))));
                            arr_25 [i_0] [i_0] [(unsigned short)11] [(short)1] [i_0] [(short)1] = ((((/* implicit */_Bool) ((short) arr_10 [i_8 - 1] [i_5 + 1] [i_1 - 1]))) ? (arr_10 [i_8 - 1] [i_5 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                            var_26 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)5]);
                        }
                        var_27 = ((/* implicit */unsigned short) var_2);
                        var_28 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) <= (((/* implicit */int) min(((short)9931), (((/* implicit */short) (_Bool)1)))))))), (var_15)));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~((~(var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_30 += ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) + (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                            {
                                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9] [(short)14] [i_13]))) * (((unsigned int) var_10)))) | (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (_Bool)1)))))))))));
                                var_33 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_0 [(_Bool)1])))), (((((/* implicit */_Bool) (short)12167)) ? (((/* implicit */int) arr_27 [i_11])) : (((/* implicit */int) arr_27 [i_11]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                var_34 = ((/* implicit */short) (unsigned short)55279);
                                arr_43 [i_9] [i_9] [i_11] [i_11] [i_9] [(_Bool)1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)14804)) + (((/* implicit */int) (short)2))))) ? ((-(var_3))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_9])))))));
                                var_35 = ((/* implicit */short) (~(((/* implicit */int) arr_33 [i_9 + 1] [i_10] [i_14]))));
                                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((unsigned short) (_Bool)1)))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                            {
                                var_37 = ((arr_22 [4U] [i_10] [4U] [4U] [i_15]) + (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_45 [i_9] [i_10] [(short)13] [i_11] [i_10] [(unsigned short)10] [13U]), (arr_32 [(_Bool)1] [(_Bool)1]))))))));
                                var_38 = ((/* implicit */_Bool) var_3);
                                arr_46 [i_11] [i_12] [i_9] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18)) && ((_Bool)1)));
                                arr_47 [i_9] [i_11] [i_9] = ((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_31 [(unsigned short)2] [(short)8] [i_15])) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) (short)-32390)) - (((/* implicit */int) var_7))))))));
                            }
                            var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9] [i_9 + 1])) ? (((/* implicit */int) arr_28 [i_9] [i_9 + 1])) : (((/* implicit */int) arr_28 [i_9] [i_9 + 1]))))) || (((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 + 1])));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                            {
                                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9] [8U] [i_11] [8U] [i_9] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_29 [i_9 + 1] [11U])) : (((/* implicit */int) arr_29 [i_9 + 1] [i_10]))));
                                arr_52 [i_9] [i_9] [i_11] [i_11] [i_12] [8U] [i_11] = ((/* implicit */short) arr_3 [i_10]);
                                arr_53 [i_16] [i_12] [i_11] [i_10] [i_16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3)))));
                                arr_54 [i_16] [(unsigned short)6] [i_16] [i_16] [i_9] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_4))) <= (((/* implicit */int) ((_Bool) var_2)))));
                                arr_55 [i_9] [(_Bool)1] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) arr_42 [i_9 + 1] [i_11] [i_11] [i_12] [i_11]);
                            }
                            for (short i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
                            {
                                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)1)) / (((/* implicit */int) (unsigned short)32235)))), (((((/* implicit */_Bool) arr_26 [(unsigned short)0])) ? (((/* implicit */int) (unsigned short)65442)) : (((/* implicit */int) (unsigned short)54931))))))) ? (((((((/* implicit */int) arr_1 [i_17])) * (((/* implicit */int) (unsigned short)33300)))) * ((-(((/* implicit */int) arr_37 [i_11] [i_9] [i_11])))))) : (((((/* implicit */int) arr_27 [i_9 + 1])) * (((/* implicit */int) arr_27 [i_9 + 1]))))));
                                var_42 += ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_9 + 1]))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_17])) && (((/* implicit */_Bool) arr_26 [i_11])))))))));
                                arr_58 [(short)6] [i_10] [i_11] [i_11] [i_12] [i_11] = arr_42 [i_9] [i_11] [i_11] [i_12] [i_17];
                            }
                            for (short i_18 = 0; i_18 < 15; i_18 += 4) /* same iter space */
                            {
                                arr_63 [i_11] = ((/* implicit */short) ((var_15) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_9 + 1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)18)))))))));
                                var_43 = ((/* implicit */unsigned int) (+(min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) arr_56 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_11]))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    for (unsigned short i_20 = 2; i_20 < 12; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 1; i_21 < 11; i_21 += 3) 
                        {
                            {
                                arr_72 [i_20] [i_21] [i_20] [i_20] [(short)6] [(_Bool)1] [i_20] = ((/* implicit */short) var_8);
                                var_44 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_48 [i_20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)46144)))))))) : (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
                var_45 -= ((/* implicit */short) min((((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_9))))) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2))));
            }
        } 
    } 
}
