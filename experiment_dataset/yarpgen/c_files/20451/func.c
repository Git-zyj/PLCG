/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20451
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [10ULL]))))), ((~(var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((var_7) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((var_4), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48819)) >> (((((/* implicit */int) (signed char)114)) - (99))))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_12 |= ((((/* implicit */int) arr_6 [i_1])) / (var_5));
            arr_12 [14U] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) / (arr_5 [i_1])));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_13 -= min((((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)114)) - (110))))), (((/* implicit */long long int) (+(((int) (short)4685))))));
            var_14 = ((/* implicit */signed char) 2528561046U);
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((((/* implicit */_Bool) arr_23 [i_1] [i_4] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)97))) : (-1542486302560265937LL))))) : (((/* implicit */long long int) var_4))));
                            var_15 += var_10;
                        }
                    } 
                } 
                arr_29 [(short)3] [i_4] [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23076)))))));
            }
            for (int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                arr_33 [i_1] [i_4] [i_8 + 1] [i_8] = ((/* implicit */long long int) arr_32 [i_8] [i_4] [i_8]);
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        {
                            arr_38 [i_1] [i_4] [i_1] [i_10] [i_8] [i_8] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (signed char)-114)), (min((((/* implicit */unsigned int) (signed char)60)), (4294967291U))))), (max((((/* implicit */unsigned int) arr_7 [i_1])), (min((2311664707U), (((/* implicit */unsigned int) (signed char)125))))))));
                            var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) 1760180475)) ? (min((((/* implicit */unsigned int) var_7)), (45484539U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-4686), (((/* implicit */short) (signed char)-118))))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_1] [i_1])))))));
                            var_18 = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    {
                        arr_44 [i_1] = ((/* implicit */long long int) max((arr_15 [i_12]), (((/* implicit */unsigned int) arr_16 [i_11] [i_1]))));
                        /* LoopSeq 3 */
                        for (signed char i_13 = 1; i_13 < 16; i_13 += 3) 
                        {
                            var_19 &= ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_1)))))) ? (var_6) : (((/* implicit */long long int) (+((-(((/* implicit */int) var_10))))))));
                            var_20 = ((/* implicit */long long int) var_10);
                        }
                        for (signed char i_14 = 1; i_14 < 16; i_14 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)7))));
                            arr_52 [i_1] [i_1] [i_11] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) var_7);
                        }
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            arr_56 [i_15] [i_12] [i_11] [i_4] [i_4] [i_4] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-4684))) < (max((var_6), (((/* implicit */long long int) max((var_10), ((signed char)114))))))));
                            arr_57 [i_1] [i_1] [(signed char)3] [i_15] [(signed char)1] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_20 [i_1] [i_1] [i_1])), (var_5))), (((((/* implicit */_Bool) arr_40 [i_4] [i_11] [i_12])) ? (((/* implicit */int) arr_20 [i_1] [i_12] [i_15])) : (((/* implicit */int) var_0))))));
                        }
                        var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) ((min((arr_5 [8]), (((/* implicit */long long int) 427658796U)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                    }
                } 
            } 
            arr_58 [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((arr_7 [i_1]), (((/* implicit */int) arr_30 [i_4] [i_4])))) : (((/* implicit */int) var_0))));
        }
        arr_59 [i_1] [(short)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((arr_30 [(short)14] [i_1]) ? (var_2) : (((/* implicit */unsigned int) var_8)))))) ? (min((((/* implicit */unsigned int) var_5)), (arr_10 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) ((427658819U) * (((/* implicit */unsigned int) 2147483647))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_55 [i_1] [(short)14] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))))));
        arr_60 [i_1] = var_10;
        arr_61 [i_1] = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_53 [i_1])) : (var_3));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 17; i_16 += 4) 
        {
            for (unsigned int i_17 = 2; i_17 < 13; i_17 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_9))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        arr_69 [i_1] [i_16] [(signed char)9] [i_18] [i_18] [i_17] = max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (arr_62 [i_17 + 2] [i_17 + 1] [i_17 - 2]))), (((((/* implicit */_Bool) arr_62 [i_17 + 2] [i_17 + 2] [i_17 - 1])) ? (((/* implicit */int) (short)-4686)) : (((/* implicit */int) (_Bool)1)))));
                        var_24 = ((/* implicit */short) max((var_24), ((short)26794)));
                        arr_70 [i_17] [i_16] [i_17] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((var_8), (var_8))))))) / (((/* implicit */int) (signed char)-106))));
                        arr_71 [i_1] [i_16] [i_17] [i_1] [i_17] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21742))))), (var_4)));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_74 [i_16] [i_19] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-4686)) : (((/* implicit */int) arr_19 [i_16] [i_1]))))))) ? ((-(1654216380U))) : ((+((-(var_2)))))));
                        /* LoopSeq 2 */
                        for (int i_20 = 3; i_20 < 16; i_20 += 3) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1858909972U)))) ? (arr_46 [i_20 + 1] [i_20] [i_20] [i_20 - 3] [i_20]) : ((+((-(arr_46 [i_1] [i_16] [i_17] [i_19] [i_20 - 2])))))));
                            arr_78 [i_1] [i_16] [i_17] [i_19] [i_17] = var_0;
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_26 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) (unsigned short)18020)) ? (2436057305U) : (0U))), (((/* implicit */unsigned int) (short)26794))))));
                            arr_81 [i_1] [i_16] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3447582503U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967274U)));
                        }
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) < (1046896160U))), ((_Bool)1))))));
                        arr_82 [i_1] [i_16] [i_17] [i_19] = ((/* implicit */signed char) max((var_9), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_17 - 1])))))));
                        var_28 += ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_83 [i_17] [i_17] [i_16] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_22 [i_17 + 1] [i_17 + 2] [i_17 + 2] [i_17 - 2])) || (((/* implicit */_Bool) arr_36 [i_1] [i_16] [i_17] [15U] [15U])))), ((!(((/* implicit */_Bool) var_4))))));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(var_2))) & (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_17])))))))) ? ((-(((/* implicit */int) ((signed char) (signed char)-66))))) : (((/* implicit */int) min(((signed char)65), (((/* implicit */signed char) (_Bool)1)))))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */long long int) var_0);
    var_31 = ((/* implicit */short) ((long long int) min(((~(var_2))), (var_4))));
}
