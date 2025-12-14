/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22536
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
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */unsigned short) (short)12378);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 16019222819496622131ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1078331447)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (signed char)-124))))) : (((unsigned long long int) 2427521254212929484ULL))));
                    arr_8 [i_0] [i_1] [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (1940783461U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5753)))))) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (unsigned short)48853))));
                    var_17 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 9071319240280666694ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (977931071498130416LL))));
                    arr_9 [i_0] = ((/* implicit */long long int) (signed char)124);
                    var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (755905614) : (((/* implicit */int) ((signed char) (unsigned char)168)))));
                }
            } 
        } 
    } 
}
