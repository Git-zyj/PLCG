/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27520
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
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) max((arr_4 [(unsigned char)21]), (arr_4 [i_1])))) - (arr_1 [i_0 + 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1])))));
                arr_5 [(unsigned char)17] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)19864)) ? (max((max((15ULL), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (4222124650659840LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73)))));
                var_17 = ((/* implicit */unsigned short) var_0);
                var_18 = (-(((((/* implicit */int) (unsigned char)31)) << (((983398471) - (983398464))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)52532)))) + ((-(((((/* implicit */int) var_8)) - (((/* implicit */int) var_11))))))));
}
