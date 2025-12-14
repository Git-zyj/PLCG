/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228173
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_1 + 1])) - (1)))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (var_11)));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 |= ((/* implicit */unsigned short) var_15);
                        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                    }
                    arr_10 [i_0] [i_2 - 1] [i_2] = ((arr_0 [i_2 - 1]) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) var_7)));
                }
                for (short i_4 = 1; i_4 < 16; i_4 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_0))));
                    arr_13 [(unsigned short)15] [(unsigned short)15] [i_4 + 1] = (((~(var_6))) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))));
                    var_23 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) & (6005038310602902886LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4])) | (((/* implicit */int) (short)15589)))))));
                    var_24 = ((/* implicit */unsigned short) var_14);
                }
                /* vectorizable */
                for (short i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) var_6);
                        arr_21 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */short) arr_9 [i_5] [i_0] [i_5]);
                        var_26 = ((/* implicit */int) min((var_26), (var_12)));
                    }
                    arr_22 [i_5] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [(unsigned char)13]))))) ? (arr_14 [i_1 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    arr_23 [i_0] [i_5] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) var_15)) ? (arr_18 [i_5 - 1] [i_1 + 1]) : (((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_1 + 1])));
                }
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)201)));
                    arr_26 [i_7] [i_7] [i_1 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)55), ((unsigned char)77)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15589))))) : (((/* implicit */int) min((arr_6 [i_1 + 1] [(short)15] [(short)15] [(short)15]), (arr_6 [i_1 + 1] [i_1] [i_7] [i_1]))))));
                }
                for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (591214278) : (((/* implicit */int) (unsigned char)6)))))));
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_19 [6] [(_Bool)1] [6] [i_1])), ((-((-(((/* implicit */int) (unsigned char)229))))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) var_9)), (((/* implicit */unsigned short) arr_1 [(short)16])))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | (arr_14 [i_8] [i_0] [i_0])))))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((arr_1 [i_0]) ? ((~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1])))) : ((~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_8])) < (((/* implicit */int) var_1))))))))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = min((-764759100), ((-(((/* implicit */int) (unsigned char)54)))));
        arr_32 [(_Bool)1] [i_9] |= ((/* implicit */_Bool) min((((((/* implicit */int) arr_6 [i_9] [i_9] [i_9] [i_9])) | (((/* implicit */int) arr_6 [i_9] [i_9] [i_9] [i_9])))), ((+(arr_17 [i_9] [i_9] [i_9] [i_9])))));
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((((((/* implicit */int) arr_28 [i_9] [i_9] [(_Bool)1] [i_9])) << (((((/* implicit */int) var_7)) + (21042))))) ^ (((/* implicit */int) arr_2 [i_9])))) <= (((/* implicit */int) ((_Bool) 6U))))))));
    }
    for (unsigned char i_10 = 3; i_10 < 17; i_10 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) var_17);
        arr_35 [i_10] = ((/* implicit */unsigned short) (short)15591);
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_11) > (((/* implicit */int) arr_37 [i_11] [i_11]))))) / (((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_3))))));
        var_35 |= ((/* implicit */unsigned char) arr_37 [i_11] [i_11]);
        arr_38 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1016)) + (arr_36 [i_11])));
    }
    var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
}
