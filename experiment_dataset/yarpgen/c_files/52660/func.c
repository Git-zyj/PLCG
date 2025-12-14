/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52660
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
    var_19 = ((/* implicit */_Bool) max((((((var_6) ? (((/* implicit */unsigned int) var_13)) : (var_16))) >> (((/* implicit */int) var_4)))), (min((var_2), (((/* implicit */unsigned int) ((unsigned char) var_14)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) min((max((min((((/* implicit */int) arr_8 [i_3] [i_2 + 1] [i_1] [i_0])), (arr_0 [i_2 - 1] [i_0]))), (((((/* implicit */_Bool) arr_0 [(short)21] [i_2])) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_1])))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) arr_1 [i_1] [i_2 - 1])))), (max(((_Bool)1), (var_14))))))));
                            arr_11 [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28945)) ? (((/* implicit */int) max((arr_8 [i_1] [i_2 - 1] [i_2 - 1] [18U]), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1))))))) : (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)31845))))))));
                            arr_12 [i_3] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max(((unsigned char)173), ((unsigned char)173)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (var_7)))))) : (((unsigned int) min((((/* implicit */unsigned int) var_10)), (4294967295U))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_3] [i_1]) >> (((((/* implicit */int) arr_4 [(_Bool)1] [i_2 + 1] [i_3])) - (213)))))) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [2U])))))), ((~(arr_1 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (unsigned char)15)) + (((1697032038) - (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    arr_15 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned char) 1902843733);
                    var_22 = ((/* implicit */int) var_9);
                    var_23 = ((/* implicit */int) (((((!((_Bool)1))) || (((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_1] [i_4] [i_4])))))) && (((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((((/* implicit */_Bool) 492654209)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1]))))))))));
                    var_24 = ((/* implicit */short) arr_14 [i_0] [i_1] [i_4]);
                }
                var_25 = ((/* implicit */_Bool) max((var_25), ((_Bool)1)));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (var_18)))) : (max((var_16), (((/* implicit */unsigned int) var_1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_13))));
}
