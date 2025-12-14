/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189764
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57707))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */short) ((min(((-(2304253410U))), (((/* implicit */unsigned int) (unsigned char)119)))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17187)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)56393)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)168)) <= ((+(((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_1] [i_1]))))));
                        var_17 += ((/* implicit */unsigned short) arr_9 [i_0] [(unsigned short)5] [i_1] [i_2] [i_3]);
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17187))) * (((((/* implicit */_Bool) arr_5 [i_0] [(short)3] [i_2] [i_3])) ? (arr_1 [(unsigned short)3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))))))))));
                        arr_11 [i_0] [(unsigned char)4] [i_1] [i_0] = (unsigned short)53056;
                    }
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (var_9)));
                        /* LoopSeq 4 */
                        for (short i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) 3561553493U);
                            var_21 += ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)36171)), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_3))))));
                            arr_18 [(unsigned char)6] [i_1] [i_4] [(unsigned short)11] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [(unsigned short)7]))) : (1465916417U)))))) ? (min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_6 [i_1]))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 957860654U)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (unsigned short)29343)))))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) arr_2 [i_4 + 1]);
                            arr_21 [i_1] [i_1] [i_1] = (unsigned short)53076;
                        }
                        for (unsigned int i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) arr_22 [i_7] [10U] [i_7] [(unsigned short)8] [i_7 + 1] [(unsigned short)8] [i_7])) ? (3561553493U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_7 - 2] [i_7 - 3] [i_7])) ? (1990713885U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))))) ? ((+(((/* implicit */int) arr_12 [i_4 - 1] [i_7 + 1] [i_7 - 1] [(unsigned short)11])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_12 [i_4 - 1] [i_7 - 3] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_23 [i_1] [i_4 + 1] [i_2] [(short)9] [i_7]))))));
                            var_25 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_1] [i_7 - 1])) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_0] [i_7 - 2])) : (((/* implicit */int) (unsigned char)255))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)52631)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) arr_3 [i_4 - 1] [i_4 + 1] [i_4 - 1])))))));
                            var_27 = ((/* implicit */unsigned int) var_14);
                            var_28 = ((/* implicit */unsigned int) (unsigned short)53975);
                            var_29 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_7), (var_1))))))) / (max((3561553496U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51016)))))))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= ((-(3070839404U)))));
}
