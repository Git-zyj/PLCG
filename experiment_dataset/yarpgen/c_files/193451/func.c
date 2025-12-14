/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193451
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */_Bool) arr_8 [i_4]);
                                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_10 [i_3] [i_2 + 2] [i_2 + 2]))) ? (arr_3 [i_1] [i_2 + 3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [i_1]))))))));
                                arr_13 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_1] [(short)1] [i_0] [i_1]);
                            }
                        } 
                    } 
                    arr_14 [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1])))))));
                }
            } 
        } 
        var_20 = ((unsigned int) (unsigned char)245);
        var_21 = ((/* implicit */unsigned char) (!(((_Bool) arr_8 [i_0]))));
    }
    var_22 = ((/* implicit */unsigned int) var_1);
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-306046703))))));
    var_24 = ((/* implicit */unsigned short) (+(777922285U)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(arr_8 [(unsigned char)14]))), (((((/* implicit */_Bool) arr_3 [(unsigned short)16] [i_6] [i_7])) ? (arr_8 [(_Bool)1]) : (((/* implicit */long long int) arr_22 [i_5] [i_6] [i_7]))))))) ? (((/* implicit */int) arr_20 [i_5])) : ((-(arr_18 [i_5 + 2] [i_5 - 1])))));
                    var_26 = ((unsigned short) (+(((/* implicit */int) (signed char)127))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) arr_15 [i_6]);
                                arr_29 [i_5] [i_6] [i_7] [i_6] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_5]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) | (arr_3 [i_9] [i_9] [i_7]))) : (((/* implicit */long long int) ((arr_24 [i_5]) << (((arr_24 [i_5]) - (2033381330U))))))))) ? (((/* implicit */int) ((_Bool) (~(var_11))))) : (((/* implicit */int) ((unsigned short) arr_22 [i_5 - 2] [i_6] [(short)6])))));
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_5 - 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_21 [i_5 - 1]))))) ^ (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)245)) || (((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
