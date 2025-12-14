/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234174
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_4)))));
        var_15 = ((_Bool) var_11);
        var_16 *= ((((int) arr_1 [i_0])) * (((1918142959) + (((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_10))));
        }
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_0] = ((var_7) + ((-(((/* implicit */int) arr_6 [i_0] [i_2])))));
            arr_12 [i_0] = ((/* implicit */_Bool) max(((-(var_3))), ((-(((/* implicit */int) var_14))))));
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_15 [i_0] = ((_Bool) ((unsigned char) var_7));
            arr_16 [i_0] [i_0] = ((int) var_13);
        }
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) var_3);
            arr_19 [i_4] [i_4] [i_0] = ((int) ((unsigned char) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_8)))));
        }
    }
    for (int i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        var_19 = var_5;
        arr_23 [i_5] [6] |= (~(((int) arr_14 [i_5])));
        arr_24 [i_5] |= ((/* implicit */unsigned char) ((((arr_18 [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_18 [i_5 - 1] [i_5 + 2] [i_5])) : (var_3))) & (((((/* implicit */int) arr_18 [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_18 [i_5] [i_5] [i_5]))))));
        arr_25 [i_5 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) -2095306191))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    for (int i_6 = 1; i_6 < 8; i_6 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_14))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_35 [i_6] [i_7] [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned char) (((((_Bool)1) || ((_Bool)1))) ? (max((max((2038048990), (((/* implicit */int) (unsigned char)50)))), (((/* implicit */int) arr_32 [i_6] [i_6 + 1] [i_6 + 3])))) : (((/* implicit */int) max((arr_30 [i_8 - 1] [i_7]), (var_13))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                arr_42 [i_6 + 3] [i_7] [i_8] [i_9] [i_6] [i_6 + 3] = ((((var_13) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) << (((/* implicit */int) (unsigned char)14)));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((int) var_4)) : ((+(((/* implicit */int) arr_31 [i_6 + 1]))))));
                                arr_43 [i_6] [i_7] [i_8] [i_9 + 1] [i_10] = max((((var_13) ? (((/* implicit */int) arr_37 [i_6] [i_9 + 1] [i_6 - 1] [i_8 - 1])) : (var_7))), (((/* implicit */int) ((arr_40 [i_6 + 3] [i_6 + 3] [i_8 - 1] [i_8 - 1] [(_Bool)1] [i_7]) != (var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_44 [i_6] = max((((int) var_6)), (((/* implicit */int) ((_Bool) (unsigned char)80))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2147483647)) ? (-118957686) : (((/* implicit */int) var_13)))) + (((/* implicit */int) var_13)))))));
        arr_45 [i_6] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (unsigned char)150))), (2038048979)));
    }
    for (int i_11 = 2; i_11 < 12; i_11 += 2) 
    {
        var_23 = ((/* implicit */int) arr_17 [i_11 + 2] [i_11]);
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            for (int i_13 = 2; i_13 < 13; i_13 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) var_8);
                    var_25 = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 1298564152))));
            arr_58 [i_11 - 2] [(unsigned char)13] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_52 [(unsigned char)13] [i_11 - 1] [i_11 - 2] [i_11 + 3])) ? (((/* implicit */int) arr_52 [(_Bool)1] [i_11 + 1] [i_11 - 2] [i_11 - 2])) : (((/* implicit */int) arr_52 [i_11] [i_11] [i_11 - 1] [i_11 - 2])))));
            var_27 *= (-(((/* implicit */int) ((arr_51 [i_11 - 1] [i_11 - 1] [i_11 + 2]) && (var_1)))));
        }
    }
    var_28 = ((((/* implicit */int) var_11)) == (((((/* implicit */_Bool) ((int) var_4))) ? (((((/* implicit */_Bool) -2095306218)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))) : (max((var_10), (((/* implicit */int) (unsigned char)87)))))));
}
