/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216573
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0])), (min((((/* implicit */unsigned short) arr_2 [i_0])), (var_10)))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
                var_12 *= ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                var_13 ^= ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    var_14 ^= ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_15 ^= (+((-(((/* implicit */int) arr_7 [i_2] [i_3])))));
                arr_11 [i_2] = ((/* implicit */unsigned char) (unsigned short)18);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            {
                arr_17 [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (+(var_7)));
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_17 = (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))))));
                                arr_27 [i_6] [i_5] [i_6] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_4] [i_5] [i_8]), (((/* implicit */unsigned int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) ? ((~(arr_23 [i_4] [i_5] [i_7] [i_7] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_7 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_4] [i_5] [i_4]) ? (((/* implicit */int) arr_4 [i_4] [18LL] [i_4])) : (((/* implicit */int) (short)-13))))) ? (arr_20 [i_4] [i_4] [i_5]) : (min((var_5), (((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))))))) ? (arr_8 [i_4] [i_4] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_5] [i_4])))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (short)28871))))))))));
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_28 [i_4])))) ? (((var_0) ? (((/* implicit */int) arr_32 [i_4] [i_4] [i_4] [i_11])) : (((/* implicit */int) arr_32 [i_4] [i_11] [i_9] [i_10])))) : (((/* implicit */int) arr_19 [(unsigned char)7] [i_10] [i_9]))));
                                arr_36 [i_4] [i_11] [i_9] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5]))));
                                var_21 = ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */int) min((arr_19 [i_4] [i_4] [i_4]), (arr_19 [i_4] [i_4] [i_4])))) : (((/* implicit */int) ((_Bool) arr_19 [i_4] [i_5] [i_9]))));
                                arr_37 [i_4] [i_5] [i_9] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)8))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
