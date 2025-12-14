/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192775
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), ((~(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (unsigned short)40365)) : (((/* implicit */int) (unsigned short)13258))))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_2 [i_1] [i_1] [(_Bool)1])))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)40365)) : (((/* implicit */int) (unsigned short)20019))))))))));
                arr_5 [(unsigned short)13] [i_0] [i_0] = ((/* implicit */unsigned short) min((((arr_1 [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_0 [(unsigned short)11]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!(((var_13) || (((/* implicit */_Bool) ((arr_6 [i_3]) ? (((/* implicit */int) arr_7 [7] [i_3])) : (var_17))))))));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_6 - 1] [i_6 - 1] = ((/* implicit */_Bool) min((((arr_6 [i_6 - 1]) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_4))))) : (min((((/* implicit */int) var_6)), (arr_11 [i_2] [i_3] [i_3]))))), (((/* implicit */int) ((_Bool) ((var_5) ^ (var_12)))))));
                            var_20 -= ((/* implicit */_Bool) var_17);
                            arr_23 [3] [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */_Bool) ((unsigned short) var_17));
                        }
                        for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) arr_6 [i_7 + 1])) : (((/* implicit */int) (unsigned short)25171))))) ? (max((((/* implicit */int) (_Bool)1)), (var_5))) : (((/* implicit */int) arr_24 [i_2] [i_7]))))));
                            var_22 = ((/* implicit */_Bool) min((arr_20 [i_2] [i_3] [i_3] [i_5] [(unsigned short)5] [i_7] [i_3]), (((((/* implicit */int) ((arr_4 [(_Bool)1] [(unsigned short)4] [i_5]) > (var_12)))) - (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            var_23 = ((((/* implicit */_Bool) min(((unsigned short)13264), ((unsigned short)40383)))) ? (max((((((/* implicit */_Bool) arr_13 [i_7 - 2])) ? (arr_18 [i_2] [i_4] [6] [i_7]) : (((/* implicit */int) (unsigned short)25152)))), (((((/* implicit */int) (unsigned short)13258)) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)40384)));
                        }
                        arr_27 [i_2] = ((/* implicit */_Bool) (unsigned short)40384);
                    }
                    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 3; i_9 < 8; i_9 += 4) 
                        {
                            arr_33 [i_2] [i_3] [i_9] [(unsigned short)6] [i_9] = (+(((((/* implicit */_Bool) max((arr_4 [i_9 - 1] [i_8 - 3] [6]), (((/* implicit */int) var_9))))) ? (((int) var_1)) : (var_11))));
                            arr_34 [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_9 + 1] [i_9])) == (((/* implicit */int) ((_Bool) arr_10 [i_3])))))) % (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)13229)) : (((/* implicit */int) (unsigned short)12595))))));
                        }
                        arr_35 [i_8] [i_2] [6] [i_2] = ((/* implicit */_Bool) (((-(max((((/* implicit */int) var_4)), (var_11))))) / (((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */int) var_13)))) : (min((arr_14 [i_2] [i_2] [i_2]), (((/* implicit */int) var_4))))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((var_0) ? (min((((/* implicit */int) var_6)), (var_11))) : (min((1264107191), (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_8])))))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) - (41612))))))));
                    }
                    for (int i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) ((unsigned short) (unsigned short)232))) ? (((((/* implicit */int) ((_Bool) var_12))) / (((/* implicit */int) min((var_16), (var_3)))))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        arr_39 [i_10 - 2] [i_3] = ((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10)))), (min((((/* implicit */int) var_16)), (((arr_0 [i_2]) ? (arr_11 [i_2] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) min((max((var_11), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) max((var_15), ((_Bool)1)))) - (((((/* implicit */_Bool) arr_29 [i_4] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (var_10)))))));
                        var_28 = ((_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))));
                        var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (arr_25 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 2]) : (((/* implicit */int) var_2)))), (arr_25 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 2])));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_11 + 1] [i_11 + 1]))))) ? (((((/* implicit */_Bool) ((arr_14 [(unsigned short)8] [i_2] [i_3]) + (var_12)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (unsigned short)35648)) / (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(arr_2 [i_2] [i_4] [2])))))))));
                        var_31 = var_11;
                    }
                }
            } 
        } 
    } 
    var_32 ^= max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_4))))) : (var_17))), (((((((/* implicit */_Bool) 418655868)) ? (1073741823) : (((/* implicit */int) var_2)))) + (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65535)))))));
    var_33 = ((/* implicit */_Bool) max((((/* implicit */int) ((max((var_10), (((/* implicit */int) var_4)))) > (((/* implicit */int) ((_Bool) (_Bool)0)))))), (((((((/* implicit */_Bool) -647015553)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) var_14))))));
    var_34 = ((((((_Bool) var_9)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_5)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) (_Bool)1)), (var_1)))))));
}
