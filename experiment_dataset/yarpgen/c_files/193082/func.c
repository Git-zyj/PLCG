/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193082
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
    var_11 = ((max((var_3), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) var_7)))))) < (((/* implicit */unsigned long long int) var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0]))));
                arr_6 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) arr_4 [i_0]);
                var_12 *= (unsigned short)0;
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) ^ (var_8))))), (507904U)));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) min((-14), (((((/* implicit */_Bool) (unsigned short)224)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)0))))))) : (arr_8 [i_2])));
    }
    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) (signed char)-9);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 3])) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 3])))))) ? (((((/* implicit */int) (unsigned char)15)) >> (((((((/* implicit */_Bool) (unsigned char)249)) ? (9223372036854775807LL) : (((/* implicit */long long int) 0U)))) - (9223372036854775791LL))))) : (((/* implicit */int) min(((signed char)12), (((/* implicit */signed char) arr_14 [i_3] [i_3 - 3])))))));
    }
    for (int i_4 = 4; i_4 < 7; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */int) min((arr_9 [i_4 - 4] [i_4 - 3]), (((/* implicit */unsigned short) ((_Bool) 70368744173568LL)))));
        var_15 = ((/* implicit */unsigned int) max((min((min((((/* implicit */int) arr_4 [i_4])), ((-2147483647 - 1)))), (((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) arr_16 [i_4] [i_4])))))), (2147483647)));
        arr_19 [i_4] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4 - 3] [i_4 - 3])) - (((/* implicit */int) arr_7 [i_4 - 4] [i_4]))))) ? (((/* implicit */int) arr_3 [i_4 - 3])) : (((-2147483620) + (((/* implicit */int) (_Bool)0))))));
    }
}
