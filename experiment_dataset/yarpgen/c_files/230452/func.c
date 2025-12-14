/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230452
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 4294967295U))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-28)) == (((/* implicit */int) arr_2 [i_2]))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)-93))))) ? (max(((-(4294967295U))), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((max((var_5), (arr_0 [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)27))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (1008935530U)));
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2] [i_1 + 2] [i_3] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1565292510U))) >> (((((/* implicit */int) max(((signed char)(-127 - 1)), (arr_12 [i_1] [i_1 - 2] [i_1] [i_3] [i_1 - 1])))) - (66)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2] [i_1 + 2] [i_3] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1565292510U))) >> (((((((/* implicit */int) max(((signed char)(-127 - 1)), (arr_12 [i_1] [i_1 - 2] [i_1] [i_3] [i_1 - 1])))) - (66))) + (88))))));
                                var_22 |= var_18;
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */unsigned char) 1008935530U);
                }
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) 754916937U)) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 2] [i_5])) : (((/* implicit */int) (unsigned char)130)))))));
                    arr_21 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)18)) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)81)) || (((/* implicit */_Bool) (unsigned char)242)))))));
                }
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_25 |= ((/* implicit */signed char) var_17);
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 23; i_7 += 1) 
                    {
                        arr_27 [i_1] [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_9 [i_7] [i_6] [i_1 + 2] [i_0])) - (((/* implicit */int) var_6))))));
                        arr_28 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned char)117))))), (min((var_17), (((/* implicit */unsigned int) arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1]))))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0]))) < (((unsigned int) arr_14 [i_7] [i_1 - 2] [i_1 - 2] [(unsigned char)19] [i_1 - 2])))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((3798878065U), (2578634820U))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_28 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1 - 2]))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_18))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_22 [i_0] [i_1])) + (((/* implicit */int) (unsigned char)46))))));
                    }
                }
                var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                arr_32 [(signed char)6] [i_1] = min((((/* implicit */unsigned int) ((unsigned char) var_18))), (((unsigned int) ((496089230U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_17) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-1), ((signed char)-88)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))));
    var_32 = ((/* implicit */unsigned int) (signed char)65);
    var_33 = ((/* implicit */unsigned char) (((-(((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-50)), ((unsigned char)5)))))))));
}
