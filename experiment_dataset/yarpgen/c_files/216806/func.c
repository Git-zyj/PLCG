/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216806
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)63))))))), (min((((((/* implicit */_Bool) (signed char)-61)) ? (arr_7 [i_3] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)62))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63053)) || (((/* implicit */_Bool) arr_3 [i_3] [i_1] [(unsigned short)7])))))))));
                        arr_10 [(unsigned short)3] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1]))))), ((~(arr_2 [i_1 + 1] [i_1 + 1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_14 [i_1] = ((/* implicit */unsigned short) var_2);
                            var_21 = ((/* implicit */unsigned short) arr_2 [i_2] [3ULL]);
                        }
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) / (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))))))));
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-23)), (arr_6 [i_2] [i_2])))), (arr_2 [11U] [i_3])));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2] [4] = ((/* implicit */signed char) (unsigned short)12449);
                        var_24 *= ((/* implicit */unsigned long long int) 1170703578);
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_5))))))) ? (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) <= (var_14)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_6] [i_6] [i_2] [i_0] [i_1] [i_6])), ((unsigned short)53087)))))));
                        arr_21 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) arr_15 [i_0] [15ULL] [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) 1120975755U))));
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_7] [i_7])))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(min((8252451865397031386ULL), (((/* implicit */unsigned long long int) var_16)))))))));
    var_29 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (18446744073709551615ULL)))) ? (max((10194292208312520224ULL), (var_14))) : (((((/* implicit */_Bool) (unsigned short)53087)) ? (var_6) : (var_6))))));
}
