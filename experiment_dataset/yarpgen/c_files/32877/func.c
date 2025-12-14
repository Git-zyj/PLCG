/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32877
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = 284971874U;
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((max((arr_0 [i_3 + 1]), (arr_0 [i_3 - 2]))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 240270654U)) ? (((/* implicit */int) (unsigned short)94)) : ((~(((/* implicit */int) (unsigned short)50083)))))))));
                        arr_14 [i_3] [i_2] [i_2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)45700))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_17 [i_4] [i_1])))) ? (((/* implicit */int) (unsigned short)50083)) : (((/* implicit */int) ((unsigned short) (unsigned short)29381)))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_17 [i_0] [i_0 + 1])))))));
                            var_11 = (unsigned short)62179;
                            arr_20 [i_2] [i_1] = ((/* implicit */unsigned int) arr_16 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0 - 2] [i_0 + 2]);
                        }
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_9 [i_3] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)50083))))), (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_3)))))))))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), ((-(arr_21 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_2] [i_1] [i_2] [i_3] [i_2] [i_3 + 1] [i_0 - 2]), ((unsigned short)15453))))) : (((unsigned int) max((var_5), (((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_2])))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_14 = ((unsigned int) ((((/* implicit */_Bool) arr_12 [3U] [(unsigned short)11] [i_2] [i_2])) && (((/* implicit */_Bool) ((var_3) + (arr_1 [i_0]))))));
                            arr_27 [i_2] [(unsigned short)10] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0 + 2] [i_3 - 1] [i_2]))))) ? (((76982115U) << (((((/* implicit */int) (unsigned short)47250)) - (47239))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) < (var_7)))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_31 [4U] [11U] [i_0] [i_2] [i_0] = ((unsigned short) (-(33554431U)));
                            var_15 = (+(((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_1] [i_0 - 2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_12 [i_0 - 2] [i_1] [i_2] [i_2]))));
                            arr_32 [i_0] [16U] [i_3] [i_2] [i_3] [6U] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_3 - 2])) ? (arr_7 [i_0 + 2] [i_3 - 2]) : (arr_7 [i_0 + 2] [i_3 - 2]))) == (var_9)));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                for (unsigned short i_11 = 1; i_11 < 17; i_11 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 2; i_12 < 18; i_12 += 1) 
                        {
                            arr_49 [i_8] [i_12] [i_9] = ((((/* implicit */_Bool) max(((unsigned short)38783), ((unsigned short)22877)))) ? (((max((((/* implicit */unsigned int) arr_33 [i_8])), (4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11] [i_11] [i_12 - 2] [i_11 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3101881472U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_40 [i_11 + 1] [i_9] [i_12 + 1] [i_11]))))));
                            arr_50 [i_10] [14U] [i_10] [i_10] [i_12] [17U] [i_10] = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */_Bool) arr_42 [i_12] [i_9] [i_8])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned int) (unsigned short)27407)))));
                        }
                        for (unsigned int i_13 = 3; i_13 < 15; i_13 += 3) 
                        {
                            var_16 = min((((((/* implicit */_Bool) (unsigned short)58203)) ? (min((3617597764U), (((/* implicit */unsigned int) (unsigned short)46535)))) : (1898475736U))), (max((((unsigned int) arr_44 [i_8])), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60973))))))));
                            arr_54 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((1798989451U) - (1798989427U)))))) ? (((min((3704654917U), (1030548722U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15452))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15452))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25841)) ? (0U) : (var_8)))) ? (((((/* implicit */_Bool) arr_53 [i_13] [(unsigned short)7] [i_13] [(unsigned short)14] [i_13 + 3] [i_13 - 2] [i_13 + 3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_8] [i_8] [18U] [i_8])))))));
                            arr_55 [i_10] [14U] [12U] [(unsigned short)12] [(unsigned short)12] [i_10] |= max((((((/* implicit */_Bool) arr_36 [i_11 + 1])) ? (max((arr_53 [8U] [8U] [16U] [16U] [i_9] [i_9] [8U]), (((/* implicit */unsigned int) (unsigned short)0)))) : (((unsigned int) var_6)))), (((/* implicit */unsigned int) max((var_2), (min(((unsigned short)50083), ((unsigned short)0)))))));
                        }
                        arr_56 [i_8] [i_9] [i_8] [i_10] [i_9] = ((max((((/* implicit */unsigned int) arr_48 [18U] [i_9] [i_11 + 2] [i_9] [i_8] [i_9] [i_10])), (var_10))) + (((((/* implicit */_Bool) arr_38 [i_11 + 2] [i_11 + 2])) ? (arr_38 [i_11 + 2] [i_11 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(unsigned short)4] [i_11] [i_11 + 1] [i_11 - 1] [i_9] [2U] [2U]))))));
                        arr_57 [i_8] [i_9] [i_9] [i_11] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)56368)), (742145217U)))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_45 [i_11 + 2])) ? (((/* implicit */int) (unsigned short)52215)) : (((/* implicit */int) (unsigned short)45812))))))) : ((~(var_3))));
                        arr_58 [(unsigned short)2] [i_9] [i_10] [3U] [(unsigned short)16] [i_9] = arr_38 [i_9] [i_11];
                        var_18 = ((/* implicit */unsigned int) max((var_18), (min((((/* implicit */unsigned int) min(((unsigned short)50083), (var_4)))), (((((/* implicit */_Bool) arr_41 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])) ? (3861387502U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11])))))))));
                    }
                } 
            } 
            arr_59 [i_8] [i_9] [i_8] = arr_36 [i_8];
            arr_60 [7U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_34 [i_8])), (var_10))))));
            var_19 = max(((-(arr_53 [2U] [2U] [i_8] [i_8] [i_8] [i_9] [i_8]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38128))))));
        }
        arr_61 [i_8] = ((((/* implicit */_Bool) (+(1805622124U)))) ? (((unsigned int) ((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned short)44324))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_4))))))));
    }
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (var_8) : (((((/* implicit */_Bool) 1369822026U)) ? (3897060723U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50084)))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
}
