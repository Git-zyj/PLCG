/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195724
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
    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(13601233549725045459ULL)))) ? (((/* implicit */int) var_1)) : ((((-2147483647 - 1)) & (-1844753459)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1 - 2] [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_2)), (arr_8 [i_3])))))) ? (((/* implicit */unsigned int) 2147483647)) : (((((/* implicit */_Bool) var_4)) ? (243378467U) : (((/* implicit */unsigned int) arr_2 [i_1 - 3])))));
                            arr_15 [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */unsigned long long int) ((arr_6 [i_1] [i_0] [i_2 + 1]) % (((/* implicit */unsigned int) -777438432))))) & (((((/* implicit */_Bool) 243378456U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5039554821900937393ULL)))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) 2147483647))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1228167061)) >= (((4051588834U) << (((var_2) - (1262842783))))))))));
        var_14 -= ((/* implicit */unsigned long long int) (~(var_3)));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) > (arr_16 [i_4] [i_4])));
    }
}
