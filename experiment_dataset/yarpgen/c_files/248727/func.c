/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248727
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(var_5)))), (max(((-(var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [16] [i_1 + 3] [i_2])))))))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_1 + 4]), (arr_0 [i_1 + 2])))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 4])) : (((/* implicit */int) arr_0 [i_1 + 3]))))));
                    var_13 += ((/* implicit */long long int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_10 [i_3]), ((-(3420646280U)))))) >= (min((((((/* implicit */_Bool) (unsigned short)25762)) ? (((/* implicit */unsigned long long int) 0U)) : (2664951107754097636ULL))), (((/* implicit */unsigned long long int) arr_10 [i_3]))))));
        var_15 = ((/* implicit */unsigned char) min(((((!((_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [15LL]))))) : (((/* implicit */int) arr_9 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3])))))));
    }
    var_16 &= ((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) >> (((30132091570330088ULL) - (30132091570330083ULL)))))) : (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) == (0U)));
}
