/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217422
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((unsigned short) 3130654212875252378LL));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) (unsigned char)9);
                            var_21 *= ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (-3130654212875252360LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))), (max((arr_9 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(short)8] [i_0] [i_0] [i_0])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))));
                            arr_10 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]);
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((max((4503599627370480LL), (((/* implicit */long long int) (unsigned short)8176)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))), (((long long int) arr_9 [(signed char)12]))));
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)63371))))), (max((((/* implicit */unsigned long long int) ((signed char) arr_7 [i_0] [i_1]))), (arr_9 [i_0])))));
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned char) 9205357638345293824LL);
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_24 [i_6] [i_7] [14ULL] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57359)) ? (((/* implicit */int) (short)-28462)) : (((/* implicit */int) arr_13 [i_4] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4] [7])) & (((/* implicit */int) (signed char)0))))) : ((~(arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                                arr_25 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((3130654212875252364LL) >> (((/* implicit */int) (_Bool)1)))), (((long long int) arr_20 [i_8] [i_6] [i_6] [i_4])))))));
                                var_24 = arr_16 [i_6];
                                var_25 += ((/* implicit */long long int) (signed char)18);
                            }
                        } 
                    } 
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_12 [i_4] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_5] [i_4])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6] [i_5])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_27 = ((((unsigned int) (unsigned short)45851)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_9 + 2] [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_9] [i_6])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)8176))))) : (((((/* implicit */_Bool) arr_17 [(unsigned short)18] [i_4] [i_6])) ? (((/* implicit */int) arr_22 [(unsigned char)4] [15LL] [i_6] [i_9] [(unsigned char)19])) : (((/* implicit */int) arr_13 [i_4] [i_5]))))))));
                                var_28 |= min((((/* implicit */long long int) arr_28 [i_10] [i_10] [i_10] [i_10] [i_10])), ((~(arr_21 [i_9 + 3] [i_9] [i_9 + 2] [i_9 + 3] [i_9 + 3] [i_9]))));
                                var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9 + 2] [i_6] [i_6] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (long long int i_11 = 4; i_11 < 18; i_11 += 4) 
    {
        for (signed char i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            {
                var_31 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)46315)) : (((/* implicit */int) arr_28 [i_12] [i_11 - 4] [i_11] [i_11] [0ULL]))))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_11])), (arr_27 [23LL] [i_12] [i_12] [i_12 + 3] [i_12 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11] [i_12])) && (((/* implicit */_Bool) arr_22 [i_11] [(short)7] [i_11] [6U] [i_12])))))))));
                /* LoopNest 3 */
                for (long long int i_13 = 2; i_13 < 17; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)63086))));
                                arr_44 [i_11] [i_12 + 3] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) max(((signed char)-73), ((signed char)-37)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
