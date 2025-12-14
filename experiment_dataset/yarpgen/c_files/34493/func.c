/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34493
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
    var_10 = ((/* implicit */long long int) var_1);
    var_11 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((8191U), (((/* implicit */unsigned int) 1067582624))))), (max((var_7), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294959105U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) : (8189U)))) >= ((~(0ULL))))))));
    var_12 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)131))))), (2226788538702662426ULL)));
    var_13 = ((/* implicit */_Bool) ((683772176395605930LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))) == (var_1)))) < (((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (min((var_6), (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned int) var_5)));
                    var_15 = ((/* implicit */unsigned long long int) (~(8203U)));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (unsigned char)17))));
        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) 4294959118U)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) 8196U)) : (arr_1 [i_0 + 1]))) : (((/* implicit */long long int) ((int) 3637692661U)))));
    }
}
