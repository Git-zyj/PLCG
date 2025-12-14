/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44309
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)896)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [2ULL] [i_0])))))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_11)))) == (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_0])))))));
                    var_18 += ((/* implicit */unsigned int) ((524287LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_2))))) != (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_9)))))))) ^ (((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) var_8)) : (arr_0 [i_0]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)34)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_1);
    var_21 = ((/* implicit */_Bool) var_5);
}
