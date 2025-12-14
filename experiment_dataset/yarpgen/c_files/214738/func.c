/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214738
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) var_11);
        var_21 *= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_22 = ((/* implicit */long long int) arr_0 [i_1]);
        var_23 += ((/* implicit */long long int) ((unsigned long long int) (-(arr_4 [i_1] [i_1]))));
        var_24 -= ((/* implicit */signed char) arr_4 [i_1] [i_1]);
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_2 - 1] [i_2] [i_2 - 1] = (-((+(min((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (var_13))))));
                    var_25 -= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)46340))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-17)) ? (7917541164962857903LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59514))))))));
                                arr_17 [i_1] [i_1] [2LL] [i_1] [i_4] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 - 2] [i_2 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_16 [i_2] [i_3 + 1])) ? (arr_16 [i_2] [i_2]) : (arr_16 [i_2] [i_5])))));
                                arr_18 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */signed char) max((((arr_15 [i_4] [i_2 - 2] [(signed char)9] [i_2] [(short)7] [i_5] [0ULL]) >> (((arr_15 [i_1] [i_2 - 1] [i_3] [i_2] [i_5] [i_5] [(unsigned short)8]) - (4679080422132005570LL))))), (((((/* implicit */_Bool) arr_15 [i_1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_4])) ? (arr_15 [(signed char)0] [i_2 - 2] [i_3 + 1] [i_2] [9LL] [i_2] [(signed char)0]) : (arr_15 [i_1] [i_2 + 1] [i_3] [i_2] [i_5] [i_4] [i_3 + 2])))))) : (((/* implicit */signed char) max((((arr_15 [i_4] [i_2 - 2] [(signed char)9] [i_2] [(short)7] [i_5] [0ULL]) >> (((((arr_15 [i_1] [i_2 - 1] [i_3] [i_2] [i_5] [i_5] [(unsigned short)8]) - (4679080422132005570LL))) - (3496474446072033989LL))))), (((((/* implicit */_Bool) arr_15 [i_1] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_4])) ? (arr_15 [(signed char)0] [i_2 - 2] [i_3 + 1] [i_2] [9LL] [i_2] [(signed char)0]) : (arr_15 [i_1] [i_2 + 1] [i_3] [i_2] [i_5] [i_4] [i_3 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((unsigned long long int) max((((/* implicit */long long int) var_19)), (var_8)))) : (((unsigned long long int) var_14))));
}
