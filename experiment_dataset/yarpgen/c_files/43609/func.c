/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43609
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
    var_12 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)181))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1 + 1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) arr_0 [i_2])) == (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) arr_5 [i_2 - 2] [i_2] [i_2])) : (var_5))))));
                    arr_9 [i_2] [(short)7] = ((/* implicit */unsigned char) (((((+(((/* implicit */int) ((signed char) var_4))))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (var_2))) == (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    arr_10 [0U] [0U] [i_2 + 1] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) ? (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) (signed char)0)), (var_7))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)38679)) + (var_3)))))) : (((/* implicit */long long int) ((int) max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (var_11)))))));
                    var_13 ^= ((/* implicit */unsigned char) ((unsigned short) (-(var_4))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((int) max((-1LL), (((2849592472916378172LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))))) ? (var_10) : (((((var_11) - (var_7))) * (((/* implicit */long long int) ((var_3) - (var_3))))))));
    var_16 = ((signed char) var_5);
}
