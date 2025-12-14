/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23070
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
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned long long int) (unsigned short)65508);
                    arr_6 [3ULL] [6LL] [(unsigned char)1] [i_0] = ((/* implicit */int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), ((-9223372036854775807LL - 1LL))))) && ((!(((/* implicit */_Bool) 67106816U)))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_9 [2LL] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                        arr_10 [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((-17LL) + (arr_7 [11LL] [i_1] [i_2 + 1] [i_3])))) ? ((+(arr_8 [i_3] [i_2] [(unsigned short)13] [i_1] [i_1] [i_0]))) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_18 |= 5LL;
                            var_19 *= ((/* implicit */unsigned int) ((((var_12) / (((/* implicit */int) arr_0 [i_3])))) == (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_0 [i_1])))))));
                        }
                        var_20 = ((/* implicit */unsigned short) (~(((arr_14 [(unsigned short)2] [i_0] [i_2 - 1] [(unsigned short)6] [i_2]) + (((((/* implicit */_Bool) 67106816U)) ? (17293822569102704640ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                        arr_15 [(unsigned char)6] [(unsigned char)3] [i_0] [i_3] = (~(((((2249600790429696LL) & (((/* implicit */long long int) arr_1 [7LL] [i_0])))) & (max((var_6), (((/* implicit */long long int) var_3)))))));
                    }
                }
            } 
        } 
    } 
}
