/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244531
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >> (((((((/* implicit */_Bool) (unsigned char)4)) ? ((~(89051182U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (4205916105U)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
                                arr_13 [i_0] [i_0] [(unsigned short)14] [i_3] [i_4] = ((/* implicit */int) (+((+(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [2U] [2U] [i_4])) ? (((/* implicit */unsigned long long int) 3556656785U)) : (1019161273250090101ULL)))))));
                                var_21 *= ((/* implicit */_Bool) ((int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (arr_12 [3U] [i_1] [i_2] [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(_Bool)1] [(_Bool)1] |= ((/* implicit */int) max(((~(var_8))), (max((((unsigned int) arr_6 [12] [i_1 + 2] [i_1 - 2])), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [0LL]))) < (arr_12 [i_1] [i_1] [i_1] [i_0] [i_1]))))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((1184736096U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2084)))))) && (((4973468687819932590ULL) <= (((/* implicit */unsigned long long int) 16777216U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1 - 1] [i_1])))))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) 738310510U))))) ? (max((arr_8 [i_0] [i_0] [i_1 + 2] [i_1 - 2]), (((/* implicit */unsigned long long int) var_6)))) : (18446744073709551593ULL)))));
            }
        } 
    } 
}
