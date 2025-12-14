/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194912
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) arr_2 [i_0]);
        var_15 = (_Bool)1;
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14336)) ? (((/* implicit */int) (short)14349)) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [8U] = ((/* implicit */short) max((var_3), (((/* implicit */long long int) (_Bool)1))));
            var_17 = ((/* implicit */unsigned short) arr_9 [i_1]);
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */int) min((var_18), (max((((/* implicit */int) max((min((((/* implicit */unsigned short) (short)-14336)), ((unsigned short)4599))), (((/* implicit */unsigned short) max((arr_3 [i_1] [i_3]), ((short)8192))))))), (((min((var_13), (((/* implicit */int) arr_6 [i_1] [i_3])))) % (((/* implicit */int) var_8))))))));
                arr_15 [i_4] [(unsigned short)6] = ((/* implicit */unsigned int) (unsigned char)193);
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_6 [i_3] [i_3]))));
                    var_20 = -504928746;
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 368391371)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_4] [i_5])) : (((/* implicit */int) var_4))))));
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    var_23 = ((unsigned int) (+((-(((/* implicit */int) arr_14 [i_3] [i_4] [i_4]))))));
                    arr_21 [i_1] [i_1] [i_4] [i_4] [i_6] = var_7;
                    var_24 = ((/* implicit */long long int) ((signed char) -315145947));
                    arr_22 [i_4] = ((/* implicit */unsigned int) arr_2 [i_3]);
                }
            }
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), (var_0))), (((/* implicit */unsigned short) ((signed char) arr_1 [i_1])))))), ((+(arr_18 [(unsigned short)10]))))))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_10))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (short)17287))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)0)), (arr_23 [0ULL] [0] [i_7])))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-14370))))))))))));
                var_29 = ((/* implicit */unsigned char) var_6);
                arr_25 [i_7] [i_3] = ((/* implicit */_Bool) (short)-14337);
            }
            var_30 = ((/* implicit */signed char) min((((/* implicit */int) min((var_0), (var_4)))), (min((((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (short)-17288)) : (((/* implicit */int) (short)-20915)))), ((+(((/* implicit */int) (unsigned char)222))))))));
        }
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [(unsigned char)6] [i_1] [i_1] [8U]))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */unsigned short) min((((long long int) (_Bool)1)), (((/* implicit */long long int) (~(((var_9) ? (1232517271) : (((/* implicit */int) arr_27 [i_8])))))))));
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) ((int) ((arr_24 [i_8]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8] [(short)4]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    {
                        var_32 = ((/* implicit */short) (+(arr_35 [i_9])));
                        arr_42 [i_10] [i_10] [i_11] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (3234951789U) : (((/* implicit */unsigned int) var_1)))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-17275))))));
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            arr_47 [i_13] [i_9] = (+((~(((/* implicit */int) var_2)))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2032350831)) ? (((/* implicit */unsigned int) -315145951)) : (32512U))))));
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 13; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (+((-(((/* implicit */int) var_2)))))))));
                            var_36 = (short)-1093;
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        var_37 = ((((/* implicit */_Bool) 1567923956U)) ? (arr_51 [i_13] [i_13] [i_17] [(short)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_9] [i_13] [i_17]))));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (short)-1093))));
                    }
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((((/* implicit */int) (short)-21711)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))))));
                        var_41 = ((/* implicit */unsigned short) arr_52 [i_17] [i_17] [i_17] [i_17] [i_17]);
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((unsigned short) var_3)))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    for (short i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_72 [i_9] [i_9] [(short)9] = ((/* implicit */short) var_3);
                            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) var_11))));
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (unsigned short)0))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */short) (-(-315145947)));
                var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)32)))))));
                var_47 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_9] [i_13] [i_17] [i_13] [(short)9]))));
            }
            for (long long int i_23 = 0; i_23 < 13; i_23 += 1) 
            {
                arr_76 [i_13] [i_23] = ((/* implicit */short) var_10);
                /* LoopSeq 3 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_25 = 0; i_25 < 13; i_25 += 4) 
                    {
                        var_48 = ((/* implicit */short) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((/* implicit */long long int) var_13)) >= (arr_33 [i_13] [i_24]))))));
                        arr_81 [i_9] [6] [i_23] [(signed char)10] [10ULL] [i_25] [(unsigned char)3] = ((/* implicit */int) (short)-3181);
                        var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) var_8))));
                    }
                    for (int i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        arr_85 [i_9] [i_13] [i_23] [i_24] [i_24] [i_26] = ((/* implicit */unsigned short) -1);
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((unsigned short) 32512U)))));
                    }
                    var_51 = ((/* implicit */_Bool) 315145956);
                    var_52 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)14349)) < (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_27 = 0; i_27 < 13; i_27 += 2) 
                    {
                        arr_88 [i_9] [i_13] [i_24] [i_27] = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
                        var_53 = ((/* implicit */int) max((var_53), (-1077755925)));
                    }
                    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        var_54 = (~(var_11));
                        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */long long int) 32512U)) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_33 [i_9] [i_9]))))))));
                    }
                }
                for (signed char i_29 = 0; i_29 < 13; i_29 += 2) 
                {
                    var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_9] [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)248))));
                    arr_95 [i_9] [i_13] [i_13] [i_13] [i_9] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -315145956)) ? (((/* implicit */int) arr_64 [i_29] [i_13] [i_23] [i_13] [i_13] [i_9] [i_9])) : (((/* implicit */int) arr_64 [i_9] [i_9] [i_13] [i_13] [i_23] [i_29] [(_Bool)1]))));
                    var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) (short)22258))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)164))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_31 = 0; i_31 < 13; i_31 += 4) 
                    {
                        var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) 104996783))));
                        var_60 = ((/* implicit */unsigned long long int) max((var_60), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    for (long long int i_32 = 0; i_32 < 13; i_32 += 1) /* same iter space */
                    {
                        var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_1)))))))));
                        var_62 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (1878370500) : (var_5)))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_8))));
                        var_63 = ((/* implicit */_Bool) min((var_63), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) var_9))))))));
                        arr_103 [i_13] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */int) (_Bool)1))))) : (264282908U)));
                    }
                    for (long long int i_33 = 0; i_33 < 13; i_33 += 1) /* same iter space */
                    {
                        var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) arr_82 [i_9] [i_23] [i_33]))));
                        var_65 = ((/* implicit */short) min((var_65), (((/* implicit */short) ((arr_61 [i_13] [i_13]) && (((/* implicit */_Bool) arr_35 [i_9])))))));
                        var_66 = ((/* implicit */long long int) min((var_66), (((/* implicit */long long int) ((_Bool) var_5)))));
                        arr_108 [(short)12] [(short)12] [(short)12] [i_33] = ((/* implicit */short) ((_Bool) arr_73 [i_9] [i_9]));
                    }
                    for (long long int i_34 = 0; i_34 < 13; i_34 += 1) /* same iter space */
                    {
                        var_67 = ((/* implicit */_Bool) min((var_67), ((_Bool)1)));
                        arr_113 [i_30] [i_23] [i_13] [i_9] = ((/* implicit */_Bool) ((unsigned short) arr_32 [i_23]));
                        arr_114 [i_9] [12] [i_23] [i_23] [i_30] [i_34] = ((/* implicit */signed char) ((unsigned short) (-(arr_106 [i_9]))));
                    }
                    /* LoopSeq 1 */
                    for (int i_35 = 0; i_35 < 13; i_35 += 1) 
                    {
                        arr_118 [i_9] [i_9] [i_13] [i_23] [i_30] [i_35] [i_35] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_23])) ? (var_11) : (((/* implicit */unsigned int) 1878370500))))) ? (((((/* implicit */_Bool) arr_98 [i_9] [i_23] [3U] [3U])) ? (((/* implicit */unsigned int) arr_84 [(_Bool)1] [i_13] [i_13] [i_13] [(_Bool)1] [i_13])) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        arr_119 [i_35] [i_35] [4ULL] [i_23] [i_13] [i_13] [i_9] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (short)1023)) ? (var_10) : (var_10))));
                    }
                    arr_120 [i_9] [i_13] [i_23] [i_30] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_75 [i_9] [i_9] [i_9] [i_9]))));
                }
            }
        }
    }
    var_68 = ((/* implicit */short) max((var_68), (((/* implicit */short) (~((~((~(var_3))))))))));
}
