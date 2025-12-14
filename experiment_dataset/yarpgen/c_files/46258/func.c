/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46258
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) max((max((4294967295U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_6 [i_2])), ((unsigned short)14978)))))), (((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) / (((/* implicit */int) max((arr_1 [i_2] [7U]), ((unsigned char)153)))))))));
                    arr_9 [i_0] [i_1] [i_2] = min((((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_3 [i_0]))))))), (max((min((((/* implicit */unsigned int) (unsigned short)25)), (2003907752U))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (4294967281U))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((+(673914537U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4] [(_Bool)1] [i_4] [i_0]))))))));
                            arr_16 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61082)) ? ((~(((/* implicit */int) (unsigned char)105)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [8U] [i_0] [(_Bool)1])) || (((/* implicit */_Bool) (unsigned char)120)))))));
                            var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_2] [i_4] [i_0])) : (((/* implicit */int) (_Bool)1))));
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)245))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65530))))) : (arr_5 [i_1] [i_4])));
                        }
                        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_18 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))))) || (((/* implicit */_Bool) ((min((arr_17 [i_0] [i_0] [i_2] [i_3] [i_2]), (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_2] [i_3] [(_Bool)1])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5] [i_5] [i_2] [i_2])))))));
                            arr_20 [11U] [i_2] [(unsigned char)7] [(unsigned char)6] [i_3] [i_5] = (((+((+(4294967295U))))) >> (((((((/* implicit */_Bool) arr_17 [i_2] [1U] [i_2] [i_1] [i_2])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_5 [i_0] [i_5]))) : (arr_13 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2]))) - (3591813733U))));
                        }
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])), (max((arr_0 [i_2]), (arr_19 [i_0] [i_1] [i_2] [i_1] [i_2]))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [i_6])))))));
                        arr_24 [i_0] &= ((/* implicit */unsigned short) (((~(arr_0 [i_0]))) % (((((/* implicit */_Bool) 25548991U)) ? (arr_10 [i_0]) : (3483190721U)))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_4))))) ? (min((811776565U), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (((var_18) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_18), (var_6))) != (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))) : (max((((17U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))));
    var_28 = max((6U), (((/* implicit */unsigned int) (_Bool)1)));
}
