/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45690
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) arr_10 [i_0] [7U] [(unsigned short)9] [(short)8] [i_3 + 4] [i_0]);
                                arr_12 [i_4] [i_2] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_4] [10LL])), ((unsigned short)34078)))) & (((/* implicit */int) min((var_15), (arr_3 [i_2] [i_2] [i_2]))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_2] [(_Bool)1])), (arr_0 [i_3])))) ? (arr_11 [i_3 + 3] [(signed char)2] [4ULL] [i_2] [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [i_1] [(short)4]), (((/* implicit */unsigned short) arr_1 [i_4] [i_4]))))))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_7 [6U] [10LL] [(unsigned short)0] [6U]))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [7U])), (var_17)))) ? (((((/* implicit */_Bool) (unsigned short)51223)) ? (((/* implicit */int) (short)2140)) : (((/* implicit */int) (short)-2140)))) : (((((/* implicit */_Bool) (short)2140)) ? (((/* implicit */int) (unsigned short)31458)) : (((/* implicit */int) var_15)))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [i_1 - 4]), (((/* implicit */signed char) arr_15 [i_6] [i_6] [i_1 - 2] [i_6]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [3LL] [3LL] [i_1 - 2]))) ^ (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4703652690662906685LL)) ? (((/* implicit */int) (short)2158)) : (((/* implicit */int) (short)-17846)))))));
                            arr_18 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) (unsigned short)20498))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [(short)10] [i_6] [i_6] [i_0] [i_0])) ? (arr_7 [i_0] [(unsigned short)6] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))), (((arr_9 [i_1]) ? (((/* implicit */long long int) arr_13 [i_0])) : (-7096716358453551854LL))))) : (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_12)))), (((var_10) < (7096716358453551853LL)))))))));
                            var_23 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [(unsigned short)10] [(short)4] [(short)4] [i_6] [6LL] [i_0]))))), (-7096716358453551864LL))) % (((/* implicit */long long int) ((/* implicit */int) ((-7096716358453551855LL) <= (max((var_16), (((/* implicit */long long int) var_9))))))))));
                            arr_19 [i_1] [i_6] = ((max((7096716358453551833LL), (-7096716358453551854LL))) < (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (arr_0 [i_1 - 3]) : (arr_0 [i_1 - 4]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
    /* LoopSeq 4 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_20 [(unsigned short)17])) : (((/* implicit */int) arr_20 [i_7])))) : ((~(((/* implicit */int) arr_20 [(_Bool)0]))))))));
        var_25 = ((/* implicit */unsigned short) max((arr_21 [i_7]), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7])))))) < (var_16))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 3) 
                    {
                        for (signed char i_11 = 3; i_11 < 20; i_11 += 2) 
                        {
                            {
                                arr_37 [i_9] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_10 + 1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_24 [i_9] [i_10] [i_9])), (arr_27 [i_7] [i_9] [i_9] [i_11]))))) > (((arr_24 [i_9] [17LL] [10]) ? (7096716358453551849LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_9] [(signed char)5])))))))) : (((/* implicit */int) var_6))));
                                arr_38 [(unsigned char)0] [i_11 - 2] [i_9] [(unsigned char)15] [i_9] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) max((max(((unsigned short)34078), ((unsigned short)31481))), (((/* implicit */unsigned short) ((signed char) (short)17)))))), (((((/* implicit */_Bool) (~(arr_33 [i_11] [(unsigned short)5] [(unsigned char)0] [19U])))) ? (((long long int) arr_20 [i_8])) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_23 [(unsigned short)10] [(unsigned short)10])) - (48966))))))))));
                                arr_39 [(unsigned char)18] [i_9] [i_9] [(signed char)13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_7] [i_9] [i_10] [i_11]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (short i_13 = 3; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_42 [i_13 - 1] [i_9] [i_13 - 1] [i_9] [(unsigned short)9])) ? (((/* implicit */int) arr_42 [i_13 - 1] [i_9] [i_13 - 1] [i_13] [i_13])) : (((/* implicit */int) arr_42 [i_13 - 1] [i_9] [i_13 - 1] [(short)15] [(unsigned short)2])))) <= (((arr_35 [i_13 - 2] [i_12] [i_12] [i_12] [i_9]) - (arr_35 [i_13 + 3] [i_12] [i_9] [i_7] [8LL])))));
                                var_27 = ((/* implicit */unsigned short) arr_31 [i_8] [i_8] [i_9] [i_12] [18U] [i_13 - 1]);
                                arr_45 [i_13 + 2] [i_12] [i_9] [i_9] [i_8] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2))) : (((((/* implicit */_Bool) (unsigned short)25768)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47326))) : (((((/* implicit */_Bool) (unsigned short)47326)) ? (2011380074U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508)))))))));
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_24 [i_13 + 3] [i_13 + 1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_13 - 2] [i_13 + 2] [(_Bool)1])) > (((/* implicit */int) arr_24 [i_13 - 2] [i_13 - 2] [i_13 + 2]))))) : (((((/* implicit */_Bool) 7096716358453551859LL)) ? (((/* implicit */int) arr_24 [i_13 + 1] [i_13 - 1] [i_13 + 3])) : (((/* implicit */int) arr_24 [i_13 + 3] [i_13 - 2] [i_13 + 3]))))));
                                arr_46 [(_Bool)1] [i_9] [i_9] [9LL] [9LL] [i_9] [9LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_32 [i_7] [17U] [i_9] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (arr_36 [i_9] [i_9]))))) ? (((((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_7] [i_12] [i_9])) ? (((/* implicit */int) arr_28 [i_7] [i_9] [18U])) : (((/* implicit */int) (unsigned short)65532)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)65524)) > (var_18)))))) : (min(((-(((/* implicit */int) arr_23 [i_9] [i_9])))), (((/* implicit */int) arr_44 [(_Bool)1] [(unsigned char)2] [17] [(short)17] [11U] [i_12]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) arr_32 [i_14] [i_14] [(short)20] [i_14]);
        arr_50 [(_Bool)0] [(_Bool)0] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)20))));
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((/* implicit */int) (short)-17859)))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49135))));
        var_32 = ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17871))))) ? ((+(arr_35 [i_15] [i_15] [i_15] [8LL] [i_15]))) : (((((/* implicit */int) (signed char)40)) * (((/* implicit */int) arr_20 [(unsigned short)18])))))) > ((~(((((/* implicit */_Bool) arr_40 [i_15 - 1] [i_15])) ? (((/* implicit */int) arr_51 [i_15])) : (((/* implicit */int) arr_24 [i_15 - 1] [i_15] [i_15])))))));
        var_33 = ((/* implicit */unsigned short) (~(arr_29 [4])));
        arr_55 [10LL] = ((/* implicit */_Bool) arr_31 [i_15] [17] [i_15 - 1] [i_15 - 1] [i_15 - 1] [8LL]);
    }
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)62)), (-7096716358453551850LL))))));
        /* LoopNest 2 */
        for (unsigned short i_17 = 2; i_17 < 16; i_17 += 3) 
        {
            for (int i_18 = 2; i_18 < 17; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 1; i_19 < 16; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
                        {
                            {
                                var_35 = ((unsigned short) arr_34 [(signed char)5] [(signed char)12] [i_18] [i_17] [(signed char)12] [i_16 - 1]);
                                var_36 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_16] [i_17] [i_18] [i_19]))) : (var_14))) < (((/* implicit */long long int) ((/* implicit */int) min(((short)-14866), (((/* implicit */short) (signed char)-32)))))))) ? (max((arr_35 [i_16 - 1] [i_16 - 1] [i_16 - 1] [(signed char)7] [i_16]), (((((/* implicit */int) var_6)) >> (((/* implicit */int) arr_57 [i_16 - 1])))))) : ((-(((/* implicit */int) arr_20 [i_18 + 2]))))));
                                arr_69 [i_17] [i_19 + 2] [i_18 + 2] [i_17] [i_17] = ((/* implicit */_Bool) (+((+(((/* implicit */int) min((arr_54 [i_18]), (arr_43 [i_20] [15LL] [15LL] [20LL] [i_17]))))))));
                                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (775852531) : (((/* implicit */int) arr_52 [i_16 - 1] [i_16 - 1]))))) ? (arr_34 [i_16] [i_16] [i_18] [i_19 + 1] [i_17] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_62 [i_16 - 1] [i_18 + 2] [16]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-21032)) < (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_42 [i_17] [i_18] [i_19 + 3] [i_20] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [(short)12] [i_18] [i_19 + 2] [(short)12] [(unsigned short)8]))) : (4294967287U))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (min((((/* implicit */unsigned long long int) ((signed char) arr_23 [i_16 - 1] [i_18 + 2]))), ((-(arr_30 [i_16 - 1] [i_17 + 3] [i_17 - 2] [i_18 + 2] [i_18 - 2])))))));
                    var_39 = ((/* implicit */long long int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_40 [i_16 - 1] [i_17]))))) ? (((/* implicit */int) (unsigned short)47327)) : (((/* implicit */int) min((((/* implicit */short) (signed char)-35)), (var_12))))))));
                    /* LoopNest 2 */
                    for (long long int i_21 = 3; i_21 < 18; i_21 += 2) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 19; i_22 += 1) 
                        {
                            {
                                arr_76 [i_16 - 1] [i_16 - 1] [i_18] [i_21] [i_17] = ((/* implicit */unsigned char) var_18);
                                var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_40 [(_Bool)1] [i_17 - 2]))))))));
                                var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_60 [i_17 + 2] [i_17] [i_16])) ? (((/* implicit */int) (unsigned short)16426)) : (((/* implicit */int) arr_60 [i_17 + 2] [i_17] [i_17 + 2])))) & ((+(((/* implicit */int) arr_60 [i_17 + 1] [i_17] [i_18]))))));
                                var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((unsigned char) ((arr_25 [i_16 - 1] [i_18 + 2]) ? (((/* implicit */int) arr_25 [i_16 - 1] [i_18 + 2])) : (((/* implicit */int) arr_25 [i_16 - 1] [i_18 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_77 [(_Bool)1] |= ((/* implicit */_Bool) var_6);
        arr_78 [(signed char)10] [9LL] = ((/* implicit */unsigned int) min(((short)-17871), (((/* implicit */short) (signed char)33))));
        /* LoopSeq 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            arr_81 [i_16 - 1] [i_16 - 1] [i_23] = ((/* implicit */long long int) ((unsigned int) (((~(var_17))) & (((/* implicit */int) ((unsigned char) var_15))))));
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 6393916470552519193ULL))) ? (((((/* implicit */_Bool) -1126463608207028985LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_16]))))) : (((/* implicit */int) arr_43 [0LL] [i_16 - 1] [i_16 - 1] [i_16] [0LL])))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-63)), ((short)14872)))))))));
            var_44 = ((/* implicit */int) min((var_44), ((-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_16] [i_23]))))) ? (((((/* implicit */_Bool) arr_56 [1U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)9224)))) : ((+(((/* implicit */int) arr_57 [i_16 - 1]))))))))));
            var_45 = ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (unsigned short)28255)))))) < (((/* implicit */int) ((_Bool) ((_Bool) arr_51 [i_16])))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_25 = 2; i_25 < 15; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 19; i_26 += 1) 
                {
                    for (int i_27 = 0; i_27 < 19; i_27 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((unsigned short) (unsigned short)0)))));
                            var_47 = ((/* implicit */int) ((((/* implicit */unsigned int) var_18)) < (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16406)) ? (((/* implicit */int) arr_42 [i_16] [i_26] [i_25 + 3] [i_16] [4LL])) : (((/* implicit */int) (signed char)-68))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_24] [i_24]))) / (255U)))))));
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_33 [i_16 - 1] [(short)9] [i_16 - 1] [i_16 - 1])) ? (arr_68 [0LL] [(_Bool)1] [6] [(unsigned short)0] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [10U] [i_24]))))), (((/* implicit */unsigned long long int) arr_52 [i_16 - 1] [i_16 - 1]))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (arr_71 [i_16] [i_24] [i_16]))) & (((/* implicit */unsigned long long int) ((-3005209395269639482LL) / (arr_66 [i_24] [i_16] [i_16] [i_16])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2)) ? (((((/* implicit */int) arr_75 [i_24] [i_16] [i_16])) & (((/* implicit */int) var_12)))) : (((/* implicit */int) max((arr_21 [19U]), (arr_20 [i_16])))))))));
            var_49 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)-18))) <= ((-(((((/* implicit */int) arr_52 [i_16] [i_24])) / (((/* implicit */int) (signed char)-123))))))));
        }
    }
    var_50 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) var_7)), (15983888370619516634ULL))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) var_18))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (((unsigned long long int) var_2))))))));
}
