/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32481
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (signed char)-107)))) : (((/* implicit */int) (unsigned char)206))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)39))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = (((+(((((/* implicit */_Bool) -1553884179)) ? (-985498413411464568LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (17944029765304320ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (arr_1 [i_0])))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_9)))))) ? (((/* implicit */int) ((unsigned char) min(((short)0), (((/* implicit */short) arr_3 [i_1])))))) : (((((arr_1 [4U]) != (var_14))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) arr_2 [i_1])) << (((((((/* implicit */int) (short)-17400)) + (17428))) - (24)))))))));
                var_20 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_14) : (var_14))))))));
            }
        } 
    } 
}
