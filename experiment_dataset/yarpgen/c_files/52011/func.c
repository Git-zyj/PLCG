/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52011
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_0] [1ULL]) : (((/* implicit */int) (unsigned short)5))))) ? (max((var_11), (((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)192)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))) > (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) var_10))))))))));
                arr_7 [(unsigned char)3] [(_Bool)1] [(unsigned char)3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 220325951U)) ? (-601161529637722975LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 2] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) ^ (arr_2 [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)41183)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_5)))) != (((((/* implicit */_Bool) (unsigned short)26254)) ? (13650383295196912218ULL) : (((/* implicit */unsigned long long int) 1278646835)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)130)) >> (((((/* implicit */int) var_14)) + (16146)))))) : (max((((/* implicit */unsigned long long int) var_1)), (max((12475802596820082600ULL), (((/* implicit */unsigned long long int) (unsigned short)27841))))))));
}
