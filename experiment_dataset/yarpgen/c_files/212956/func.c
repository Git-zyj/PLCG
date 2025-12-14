/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212956
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((arr_0 [i_1 - 2] [i_4]) ? (arr_3 [22LL] [(signed char)10] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_1 - 4])))))) ? (((((/* implicit */_Bool) var_14)) ? (((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : ((+(var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (489826103) : (((/* implicit */int) (signed char)1))))));
                                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [(_Bool)1] [i_4] [i_2 + 2] [i_2 + 2])) && (((/* implicit */_Bool) arr_4 [i_3 + 1] [i_2 - 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((~(min((var_1), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_11) : (var_15))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_18)))))))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                arr_20 [4U] [i_6] [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_5] [i_6] [i_6])) ? ((+(arr_18 [i_6] [i_6] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) arr_14 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) arr_4 [(short)3] [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_0 [i_5] [i_6])))))))));
                var_24 *= arr_14 [i_5];
                /* LoopSeq 1 */
                for (unsigned short i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_9] [i_8] [i_6] [i_5])) : (((/* implicit */int) arr_2 [i_5] [i_5] [i_7 + 1]))))))) : (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_24 [i_6]))) : (((arr_10 [i_5] [i_6] [i_6] [i_7] [i_7] [i_7] [i_9]) << (((((/* implicit */int) var_14)) + (42)))))))));
                                var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) arr_16 [i_6] [i_7 - 1] [i_7 - 2])) + (29432))) - (7)))));
                                arr_31 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                    arr_32 [i_7] [i_6] [i_5] = ((/* implicit */int) var_13);
                    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                }
                var_28 += ((/* implicit */unsigned long long int) var_8);
                var_29 = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_6]))))) * (var_12));
            }
        } 
    } 
}
