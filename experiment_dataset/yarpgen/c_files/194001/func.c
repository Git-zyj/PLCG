/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194001
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
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_1), (var_17)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)127)))) : (((/* implicit */int) ((_Bool) var_0))))), (max(((-(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) max((var_6), (var_16))))))));
                    arr_7 [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) var_6)))))))), (((max((var_1), (((/* implicit */unsigned long long int) var_9)))) << (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] &= ((/* implicit */int) max((max((max((var_1), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((unsigned short) var_3))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (var_15)))), (max((((/* implicit */unsigned long long int) var_7)), (var_1)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) ((_Bool) var_2))));
    var_20 += ((/* implicit */signed char) (((+(491022095))) / (max((((((/* implicit */int) (unsigned short)4)) * (((/* implicit */int) (unsigned short)65535)))), ((-(((/* implicit */int) (_Bool)0))))))));
    var_21 = ((/* implicit */int) max((max((((((/* implicit */_Bool) (unsigned short)38212)) ? (3504349221625452518ULL) : (((/* implicit */unsigned long long int) 287177919U)))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_5)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_13)))))))));
}
