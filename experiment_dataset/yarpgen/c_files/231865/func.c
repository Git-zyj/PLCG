/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231865
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5734828593816686347ULL)) ? (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (1148658039))))))) : (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775783LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */_Bool) min((((arr_4 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))))), (arr_4 [i_1])));
                var_16 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) + (2147483647))) << (((12711915479892865280ULL) - (12711915479892865280ULL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)77)), (arr_3 [i_1])))) : (arr_2 [i_0 + 1])))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_1 + 1] [i_2 + 2] [i_3 + 2] [i_0] = ((/* implicit */_Bool) 9223372036854775783LL);
                                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (789044316) : (((/* implicit */int) var_4))))) ? (((5734828593816686347ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) -1LL)) : (5734828593816686335ULL)))))));
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_11 [i_0] [13] [5ULL]))), (max((9LL), (arr_9 [i_1] [(signed char)2] [i_2 + 3] [(signed char)2] [i_4] [i_3])))))), (18081864804781789350ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        var_19 = ((/* implicit */long long int) arr_13 [i_5]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_16 [i_5] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (short)-22915)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (4294967295U))))))));
    }
}
