/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222342
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
    var_15 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) 9223372036854775790LL)))) ? (min((((/* implicit */long long int) var_5)), (1773364250310098711LL))) : (((/* implicit */long long int) var_3)))) >= (((/* implicit */long long int) var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((((((/* implicit */_Bool) (short)2048)) ? (-21) : (-1))) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (128)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = arr_8 [i_0] [i_1] [i_2] [i_4];
                                arr_14 [i_0] [i_0] [9ULL] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned short)14] [i_0] [i_2] [i_3 - 3] [i_4])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -6601933736429749489LL)) ? (((/* implicit */int) (short)-7639)) : (((/* implicit */int) var_2))))), (arr_0 [i_0]))) : (max(((~(arr_10 [2ULL] [13ULL] [(unsigned short)0] [12] [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17005094909645672772ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)65535)))))))));
                                arr_15 [i_0] [(unsigned short)0] [12LL] [i_0] [3U] = ((/* implicit */unsigned char) ((signed char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_10 [i_0] [i_1] [(unsigned short)5] [i_3 - 3] [(_Bool)1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((signed char) var_2)), (((/* implicit */signed char) ((arr_18 [i_0] [i_0] [i_0] [(unsigned char)14] [13]) != (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_6] [i_0])))))))), (min((((/* implicit */long long int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [16] [i_2] [(unsigned short)6])))))), (arr_2 [i_6] [i_1])))));
                                arr_21 [6LL] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50190))) > (arr_6 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [(signed char)9] [6LL] [i_2] [i_1] [i_0] [i_0]))))) : (((/* implicit */int) (signed char)-113))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_1)))) ? (max((((/* implicit */int) var_14)), (var_8))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65405)))))), (var_5)));
}
