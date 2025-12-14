/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240597
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
    var_13 |= ((/* implicit */unsigned long long int) var_0);
    var_14 = ((((((/* implicit */int) var_7)) == (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)-1)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_3), (((/* implicit */signed char) ((var_10) && (((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)11152))))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) ((arr_3 [(unsigned short)6]) ? (max((((151578887U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (short)11153)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */short) (signed char)(-127 - 1)))))))));
                        var_16 -= ((_Bool) arr_2 [(_Bool)1]);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_17 [(_Bool)1] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((int) var_1));
                            arr_18 [i_2 - 1] [i_3] [3U] = min((max((((/* implicit */int) max((arr_2 [i_4]), (var_2)))), ((~(((/* implicit */int) (short)11153)))))), (((/* implicit */int) ((short) arr_1 [i_0 - 2] [i_1 + 2]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((arr_13 [i_0 + 1] [i_2 - 1]) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (arr_7 [i_3] [i_1 - 2]))) : (((/* implicit */int) min((arr_6 [i_1] [i_4]), (((/* implicit */unsigned short) arr_2 [i_0 + 1]))))))) : (((/* implicit */int) arr_13 [i_2] [i_1 - 2]))));
                        }
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) arr_15 [i_0] [(short)11] [i_0 + 3] [i_0 - 2] [i_0 + 3]);
    }
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
    {
        arr_21 [(_Bool)1] [i_5] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_15 [i_5] [i_5] [i_5] [i_5] [i_5])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_5])))))));
        var_20 *= ((/* implicit */short) ((((arr_7 [i_5] [i_5]) == (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5]))) : (2641766892U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) (short)-5892)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6217))) : (321524916U)))));
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ ((-2147483647 - 1))));
    }
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
    {
        arr_25 [(short)8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_10 [i_6] [i_6] [(_Bool)0] [i_6] [i_6])) : (((/* implicit */int) arr_10 [i_6] [(unsigned short)7] [(unsigned short)7] [i_6] [i_6]))))) ? (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])) : ((-(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6]))))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            for (unsigned short i_8 = 2; i_8 < 12; i_8 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) arr_19 [i_6]);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */signed char) var_5)), (min((((/* implicit */signed char) (_Bool)1)), (var_4))))))));
                                var_23 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_30 [i_6] [i_7] [i_6] [i_10]))));
                                var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_8 - 2])) ? (arr_31 [i_8 - 1]) : (arr_31 [i_8 - 2]))) & (((((/* implicit */_Bool) (signed char)3)) ? ((-2147483647 - 1)) : ((-2147483647 - 1))))));
                                arr_38 [0U] [i_7] [i_8 - 2] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (min((((arr_14 [i_6]) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_26 [i_7])), (arr_24 [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_11 = 1; i_11 < 15; i_11 += 2) 
    {
        arr_41 [i_11 - 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)112))))));
        arr_42 [i_11] [(unsigned short)5] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11 + 2])) && (((/* implicit */_Bool) arr_40 [i_11 + 1])))))));
        var_25 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) 4294966272U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-1))))))));
        var_26 = ((/* implicit */long long int) min((((_Bool) arr_39 [i_11 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_40 [i_11])))))));
        arr_43 [i_11] = ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)18)));
    }
}
