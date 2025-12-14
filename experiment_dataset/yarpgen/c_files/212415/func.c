/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212415
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
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_7 [12U] [i_1] [12U] &= ((/* implicit */unsigned short) (+(((var_2) | (arr_2 [i_1])))));
                arr_8 [i_0 - 4] [i_1] [9] = ((/* implicit */unsigned short) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)51938))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                {
                    arr_15 [i_4] [(short)0] [(short)0] [i_2] |= ((short) (signed char)72);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_20 [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)61364))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_17 [i_4])) >> (((((((/* implicit */_Bool) var_6)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))))) + (9071942523435437868LL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) ^ (((var_8) & (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_16 [i_6] [i_6] [i_6] [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72)))))))))));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_6] [(unsigned char)6] [i_3 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_5] [i_2] [i_2]))) : (var_4))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [14ULL] [12U] [i_4] [2] [i_4])))))))))) : (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_16 [1LL] [i_4] [i_3] [12LL]))), (((/* implicit */unsigned long long int) ((var_16) >> (((((/* implicit */int) (signed char)-72)) + (103))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                {
                    var_22 |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2147483647)), ((-9223372036854775807LL - 1LL))));
                    var_23 += ((/* implicit */unsigned char) arr_23 [(unsigned short)9] [i_3] [(unsigned char)9]);
                    arr_24 [5ULL] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) (+(-1LL)))) * (((7497373353719578247ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_29 [i_2] [i_3] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) arr_19 [(signed char)14] [i_3 + 1] [i_7] [i_7] [i_8])) ? (1272212401U) : (var_13)))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_28 [i_2] [(unsigned char)3] [(unsigned short)7] [i_2] [11U]) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_9 [i_3])) : (((((/* implicit */int) arr_27 [i_8] [i_8] [3U] [i_3] [i_2] [i_2])) * (((/* implicit */int) var_0)))))), (max((((/* implicit */int) (signed char)-73)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [i_8] [(signed char)16] [i_2] [(signed char)16] [i_2] [i_2])) : (((/* implicit */int) var_18)))))))))));
                    }
                    arr_30 [i_3] [i_3] [9ULL] = ((unsigned int) var_3);
                }
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1)))))) ? (((/* implicit */int) var_1)) : (((int) arr_13 [i_2] [i_9] [i_2] [(signed char)2]))));
                    var_27 = ((signed char) max((arr_31 [i_9] [i_3 - 1] [i_9]), (arr_31 [i_9] [i_3] [i_9])));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) arr_19 [i_10] [i_3 + 1] [i_3] [i_2] [i_2]);
                    arr_36 [i_2] [i_3 + 1] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_3])))))));
                    var_29 = ((/* implicit */short) ((signed char) var_10));
                }
                arr_37 [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) arr_31 [8] [i_2] [i_3])));
            }
        } 
    } 
}
