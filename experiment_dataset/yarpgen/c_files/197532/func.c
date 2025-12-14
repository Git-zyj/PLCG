/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197532
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
    var_16 = ((/* implicit */signed char) max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_8))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [(unsigned char)2] [i_1] [(unsigned char)2] [i_2] = ((/* implicit */signed char) (short)12835);
                    var_17 = ((/* implicit */long long int) (~((+(((15819704206126130187ULL) * (15819704206126130183ULL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_14 [i_3] [i_3] = ((/* implicit */int) (((-(1U))) + ((~(11U)))));
                            var_18 &= ((/* implicit */short) arr_6 [i_0]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_19 = ((((/* implicit */int) (signed char)103)) >> (((((/* implicit */int) (unsigned short)15527)) - (15518))));
                            var_20 = ((/* implicit */short) ((arr_11 [i_0] [i_2] [i_3]) ? (((((/* implicit */int) arr_5 [i_1] [i_2])) & (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_16 [i_5] [i_3] [i_3] [i_1] [i_0]))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            arr_20 [i_0 - 1] [i_3] [i_2] [i_3] [i_0 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_14)))));
                            var_21 = ((/* implicit */short) ((arr_18 [i_0] [i_1] [i_2] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6 + 1] [i_0 - 2] [i_0] [i_0] [i_0])))));
                        }
                        var_22 = ((/* implicit */unsigned int) (unsigned short)22359);
                        var_23 = ((/* implicit */unsigned char) (~(arr_13 [i_0 - 2])));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((((/* implicit */int) max((var_8), ((signed char)-123)))) * (((/* implicit */int) var_8)))) / (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15819704206126130211ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))));
                arr_26 [2] [i_7] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((arr_18 [i_7] [i_7] [i_7 + 1] [i_8]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (arr_2 [i_7 + 1])))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967284U)) ? (((arr_19 [i_7] [i_7] [i_7 + 2] [i_8] [(short)11]) << ((((+(((/* implicit */int) arr_0 [i_8] [i_7 + 2])))) - (18230))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))));
                var_27 &= ((/* implicit */unsigned long long int) 310795896U);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_13))));
}
