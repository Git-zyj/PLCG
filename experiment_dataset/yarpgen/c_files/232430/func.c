/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232430
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_10 |= ((((/* implicit */int) var_7)) & ((+(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)7] [(signed char)7] [i_1] [i_4])) : (((/* implicit */int) var_0)))))));
                                var_11 = ((/* implicit */signed char) ((unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) arr_12 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0]))), ((unsigned char)217))))));
                            arr_22 [i_0] [i_1] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (~(var_3)));
                            arr_23 [i_0] [i_2] [(short)2] [i_6] |= ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_4)), (arr_7 [i_1] [i_1] [i_6])))))) ? (((/* implicit */int) max(((signed char)120), (var_0)))) : ((((+(((/* implicit */int) (unsigned char)217)))) + (min((((/* implicit */int) (signed char)-124)), (var_6))))));
                        }
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (max((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0]))) : (var_3))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) : (max((var_3), (((/* implicit */unsigned int) var_6)))))))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_15 [i_0] [i_1] [i_2]))));
                    }
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_9 [i_0] [i_1] [i_2] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_0] [(unsigned short)10])))))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (short)29556)) : ((~(((/* implicit */int) (signed char)-105))))));
                    var_16 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 3; i_7 < 7; i_7 += 4) 
    {
        arr_26 [i_7] [i_7] = ((/* implicit */int) (unsigned char)26);
        arr_27 [i_7] = ((/* implicit */unsigned char) arr_15 [i_7 + 2] [i_7] [i_7]);
    }
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-52))));
}
