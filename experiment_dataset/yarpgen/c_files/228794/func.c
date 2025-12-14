/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228794
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
    var_16 = ((/* implicit */int) min((var_16), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))) ? (((/* implicit */int) (unsigned short)19374)) : (((((/* implicit */_Bool) 11532830015760654167ULL)) ? (67108863) : (((/* implicit */int) var_0)))))), ((-(var_12)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)65228)) << (((67108858) - (67108851))))))) / (((/* implicit */int) arr_1 [i_0])));
        arr_3 [i_0] [i_0] = -67108875;
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))) : ((~(arr_2 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) var_2);
                                var_20 = ((/* implicit */int) (unsigned short)14060);
                                arr_14 [i_4] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) (unsigned short)10783)))) ? (((unsigned long long int) ((int) (unsigned short)54749))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) (unsigned char)202))))) : (-1319689097))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) min((1593085351998657157ULL), (((/* implicit */unsigned long long int) 67108863))))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) : (18446744073709551615ULL))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned int) (short)-21964);
    }
}
