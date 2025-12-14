/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195002
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((unsigned char) max((var_7), (((/* implicit */unsigned short) (signed char)-32))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1889254278)) ? (-7669406459689051410LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) : (1160970680U))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 + 2] [i_0 + 3])) > (183907949297944549ULL)))) : (((/* implicit */int) var_1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) ^ (18262836124411607067ULL))))))));
        var_18 = ((/* implicit */unsigned char) ((signed char) max((arr_1 [i_0]), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)103))))))));
    }
    for (signed char i_1 = 4; i_1 < 23; i_1 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((short) min((arr_2 [i_1 + 1]), ((unsigned char)192))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((long long int) arr_3 [i_1 - 3])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)45708)))))));
    }
    var_21 = ((/* implicit */long long int) var_10);
}
