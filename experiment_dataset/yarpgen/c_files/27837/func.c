/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27837
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((unsigned int) var_1))), (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10))))), (((((/* implicit */_Bool) max((317632983U), (((/* implicit */unsigned int) (unsigned char)20))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_8)))) : (max((var_10), (((/* implicit */unsigned long long int) var_0))))))));
                        var_13 += ((/* implicit */unsigned short) var_1);
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((1U), (((/* implicit */unsigned int) (unsigned short)5958))));
        var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))) : (((/* implicit */unsigned long long int) ((var_11) / (33554431U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (var_7) : (((unsigned int) var_9))))) : (var_5)));
    }
    var_15 = ((unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1))) * (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
