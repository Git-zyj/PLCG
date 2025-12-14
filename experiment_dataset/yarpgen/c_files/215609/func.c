/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215609
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
    var_16 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(signed char)9] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((var_11) < (((/* implicit */int) arr_2 [i_1] [i_1 - 1])))))))));
                var_17 = ((/* implicit */unsigned int) min(((-(((((/* implicit */int) arr_2 [i_0] [i_1])) + (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1])))))), (((/* implicit */int) ((unsigned short) arr_1 [i_1 - 1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [16] [i_5]))))))));
                            arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((((/* implicit */int) arr_5 [i_5] [i_5])) * (((/* implicit */int) (signed char)0)))) : ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))))));
                            /* LoopSeq 2 */
                            for (signed char i_6 = 4; i_6 < 23; i_6 += 4) 
                            {
                                arr_22 [i_4 - 1] [i_5] [i_3] [i_3] [i_5] [20] = ((/* implicit */signed char) var_0);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_1)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) var_10))))), (var_13))))))));
                                var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_13 [i_2 - 1] [i_3] [i_4] [i_5]), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : (((unsigned int) arr_14 [i_3] [i_4] [i_6]))))));
                            }
                            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                            {
                                arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */short) ((((/* implicit */int) (signed char)38)) >> (((/* implicit */int) ((((/* implicit */_Bool) 16LL)) && (((/* implicit */_Bool) ((unsigned char) (_Bool)1))))))));
                                var_21 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_4 + 1])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_4 + 1])))), (((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_2 + 1] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_18 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                                var_22 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_3] [10U] [i_5] [i_7] [i_7]))));
                                arr_27 [i_3] = ((/* implicit */unsigned int) (!(((((/* implicit */int) ((signed char) (unsigned char)60))) >= (((/* implicit */int) arr_15 [i_7] [i_5] [i_2 - 1] [i_2 - 1]))))));
                                var_23 = ((/* implicit */unsigned long long int) (-((~(var_1)))));
                            }
                            arr_28 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned char) arr_5 [i_5] [i_2 - 1]);
                        }
                    } 
                } 
                arr_29 [i_2] &= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)198)))))));
                arr_30 [(short)17] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_6 [i_2 + 1])) * (((/* implicit */int) arr_6 [i_2 + 1])))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) + (-16LL)))));
}
