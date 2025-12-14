/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20384
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) ((max((((/* implicit */int) var_0)), (((var_11) | (((/* implicit */int) arr_1 [i_0] [i_0])))))) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) | (max((((/* implicit */int) arr_3 [i_0])), (var_11))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15893)) && (((/* implicit */_Bool) var_11)))))));
    }
    var_15 = ((/* implicit */int) ((((max((((/* implicit */unsigned int) var_11)), (var_5))) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_11)) ? (max((var_6), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_3))));
    /* LoopNest 3 */
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    var_17 |= (~((~(arr_6 [i_1 - 1]))));
                    arr_12 [i_3] [i_2] [i_1] |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2]))))), (var_1))), (((/* implicit */unsigned int) ((arr_6 [i_3]) == (((/* implicit */unsigned int) var_11)))))));
                    arr_13 [i_1] [i_3] = ((/* implicit */unsigned short) arr_8 [i_1] [i_2] [i_3]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)35422))))) : (var_1))) > (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned short)59909)))), ((((_Bool)0) ? (-1) : (((/* implicit */int) var_12)))))))));
}
