/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196380
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
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)217)) : (-181935793)))) ? (((((/* implicit */_Bool) ((var_14) << (((((/* implicit */int) (signed char)-68)) + (110)))))) ? (((/* implicit */int) ((_Bool) (unsigned char)194))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42))))))))))));
                    var_20 = ((/* implicit */short) var_6);
                    var_21 ^= ((/* implicit */int) max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [(signed char)12]))))))))));
                    arr_8 [i_1] [i_0] [i_1] [i_1] = ((unsigned char) ((((/* implicit */_Bool) min(((unsigned char)62), ((unsigned char)58)))) ? ((~(((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) ((_Bool) 9223372036854775807LL)))));
                }
            } 
        } 
    } 
}
