/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241100
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_9 [i_0] [4U] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_1] [i_0]))))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-29839)) && (((/* implicit */_Bool) var_10)))))) : (min((((/* implicit */unsigned int) var_12)), (2446436391U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)6750))))) && (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))) > (var_9)))))))));
                        arr_10 [i_0] [1LL] [i_1] [i_2] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))) || (((/* implicit */_Bool) max((((/* implicit */short) ((signed char) 1848530904U))), (arr_8 [i_0] [i_1 + 1] [i_2]))))));
                        arr_11 [i_1] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0] [i_2]);
                        arr_12 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2]))))) : (arr_1 [i_1 + 3]))) > (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))) == (arr_7 [i_0]))))));
                    }
                    arr_13 [i_0] [(signed char)2] &= arr_8 [i_1 - 2] [i_1 - 2] [i_0];
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (4294967295U))), (((((/* implicit */_Bool) 1848530904U)) ? (((/* implicit */unsigned int) var_12)) : (2446436399U))))) + (2446436388U)));
    var_21 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned int) 1812564127)) == (2446436392U)))), (var_8)));
}
