/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36106
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)158)) & (((/* implicit */int) var_9)))) > (((/* implicit */int) min(((_Bool)1), (arr_1 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        var_10 |= ((/* implicit */signed char) (_Bool)1);
                        var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_10 [i_0 + 1]), (arr_10 [i_0 - 1])))) <= (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)65))))));
                        var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((signed char)-50), (((/* implicit */signed char) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) (unsigned char)18)) : (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)128)))))) | (min((((((/* implicit */int) arr_10 [i_0])) & (((/* implicit */int) arr_4 [i_3])))), (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)114))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [(_Bool)1] [i_0 - 1] [i_1] [i_0] [i_0 - 1])))), (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_0] [i_4] [i_2])), (var_9))))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), ((signed char)-5)))))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)231)) ? (((((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 1] [i_4] [i_2] [i_0 + 1] [i_2] [i_4])) > (((/* implicit */int) (_Bool)0))))) & (((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (unsigned char)25))));
                        arr_13 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 + 1])) & (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)96)) | (((/* implicit */int) arr_16 [i_6] [i_6 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                            arr_20 [i_1] [i_1] [(_Bool)1] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)5)) + (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)114)))))));
                        }
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            var_15 -= ((/* implicit */_Bool) (unsigned char)0);
                            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_0] [i_5] [i_1])) - (((/* implicit */int) (unsigned char)102)))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_8 [i_7 + 3] [i_1] [i_2])))))));
                        }
                        arr_23 [i_0] [i_0 + 1] [(signed char)17] = ((/* implicit */unsigned char) (_Bool)1);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [i_0 - 1] [i_1] [(signed char)17] [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_2] [i_5] [i_8])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) (unsigned char)96))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)198)) < (((/* implicit */int) (signed char)-15)))))));
                            arr_28 [i_1] [i_5] [i_1] = ((/* implicit */_Bool) var_4);
                            var_17 -= ((/* implicit */unsigned char) arr_24 [i_8] [i_5] [i_0] [i_1] [i_0]);
                            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_1 [(_Bool)1] [i_8 - 1]))))) ? ((+(((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    for (signed char i_9 = 4; i_9 < 19; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_35 [i_0] [i_1] [i_10] [i_9] [i_10] = ((/* implicit */signed char) (unsigned char)170);
                            var_19 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (_Bool)0)))) < (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_3)))))));
                            var_20 = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)203)))), (((/* implicit */int) arr_25 [i_0] [(unsigned char)16] [(unsigned char)16] [(unsigned char)14] [i_0 - 1])))) < (((((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_10])) > (((/* implicit */int) (signed char)-79))))) & (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)4)), (var_5))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned char)98), (var_5)))) % (((/* implicit */int) (signed char)-64)))) & (((((/* implicit */int) arr_16 [(_Bool)0] [i_0 - 1] [i_11] [i_0 + 1] [i_9])) & (((/* implicit */int) (unsigned char)252))))));
                            arr_41 [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) arr_9 [(signed char)13] [(unsigned char)10] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) max((arr_8 [i_0 - 1] [i_0 - 1] [i_2]), ((signed char)38)))))))));
                            arr_42 [(signed char)19] [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0 - 1] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (unsigned char)231)) > (((/* implicit */int) (unsigned char)187)))), ((!(((/* implicit */_Bool) var_3)))))) && (((/* implicit */_Bool) (signed char)39))));
                        }
                        var_21 += ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) (signed char)-57))))), (arr_2 [i_2] [i_2])))) - (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)6))))));
                        var_22 = ((/* implicit */unsigned char) max((((((((/* implicit */int) (unsigned char)31)) < (((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_9 - 4] [i_2])))) ? (((/* implicit */int) max(((unsigned char)125), (arr_26 [i_0] [i_0] [i_1] [i_2] [i_9 - 1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0])), ((unsigned char)191)))))), (min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) arr_12 [i_1] [i_9 - 3]))))));
                        var_23 = ((/* implicit */_Bool) arr_25 [i_0] [(_Bool)1] [(_Bool)1] [(unsigned char)9] [i_0 - 1]);
                    }
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) min(((unsigned char)216), (arr_22 [i_0] [i_0] [(_Bool)1])))) != (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (signed char)-39)))))))), (((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (_Bool)1))))) & (((/* implicit */int) max(((unsigned char)185), (((/* implicit */unsigned char) (signed char)-39)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) min((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_18 [(signed char)18] [i_0] [(signed char)8] [(unsigned char)12] [(unsigned char)12] [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)251))))) < (((((/* implicit */int) (unsigned char)137)) & (((/* implicit */int) (unsigned char)25)))))))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) < (((/* implicit */int) (signed char)123)))))))) ? (((((((/* implicit */int) var_8)) < (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)131)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)161)))))) : (((((((/* implicit */int) (signed char)112)) & (((/* implicit */int) var_9)))) - (((/* implicit */int) var_8))))));
    /* LoopSeq 1 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_46 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)246)))), (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (signed char)83))))))) ? (((/* implicit */int) min(((unsigned char)62), (max((((/* implicit */unsigned char) (_Bool)1)), (var_4)))))) : (((/* implicit */int) (signed char)112))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9)))), (((/* implicit */int) min(((signed char)95), (var_0))))))) ? (max((((((/* implicit */int) (unsigned char)231)) | (((/* implicit */int) (unsigned char)130)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_9))))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) ((_Bool) (_Bool)0))))))));
        arr_47 [i_12] [(_Bool)1] = ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))) | (((((/* implicit */int) (unsigned char)142)) - (((/* implicit */int) (unsigned char)177)))))) < ((-(((/* implicit */int) ((((/* implicit */int) arr_25 [i_12] [(unsigned char)10] [i_12] [(unsigned char)6] [i_12])) < (((/* implicit */int) var_0))))))));
    }
    var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) (signed char)74))))));
}
